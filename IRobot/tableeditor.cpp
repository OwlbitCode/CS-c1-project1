#include "tableeditor.h"
#include <QSqlTableModel>
#include <QtWidgets>

TableEditor::TableEditor()
{

}

TableEditor::TableEditor(const QString &tableName, QWidget *parent)
    : QWidget(parent)
{
    database = QSqlDatabase::addDatabase("SQLITE");
    database.setDatabaseName("customerList.db");

    if(!database.open()){
        qDebug() << ("panic");
    }
    else{
        qDebug() << ("Don't panic");
    }

    model = new QSqlTableModel(this, database);
    model->setTable(tableName);
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();

    model->setHeaderData(0, Qt::Horizontal, tr("Company"));
    model->setHeaderData(1, Qt::Horizontal, tr("Address"));
    model->setHeaderData(2, Qt::Horizontal, tr("Interest Level"));
    model->setHeaderData(3, Qt::Horizontal, tr("key"));

    QTableView *view = new QTableView;
    view->setModel(model);
    view->resizeColumnsToContents();

    submitButton = new QPushButton(tr("Sumbit"));
    submitButton->setDefault(true);
    revertButton = new QPushButton(tr("&Revert"));
    quitButton= new QPushButton(tr("Quit"));

    buttonBox = new QDialogButtonBox(Qt::Vertical);
    buttonBox->addButton(submitButton, QDialogButtonBox::ActionRole);
    buttonBox->addButton(revertButton, QDialogButtonBox::ActionRole);
    buttonBox->addButton(quitButton, QDialogButtonBox::RejectRole);

    connect(submitButton, &QPushButton::clicked, this,&TableEditor::submit);
    connect(revertButton, &QPushButton::clicked, model, &QSqlTableModel::revertAll);
    connect(quitButton, &QPushButton::clicked, this, &TableEditor::close);

    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addWidget(view);
    mainLayout->addWidget(buttonBox);
    setLayout(mainLayout);

    setWindowTitle(tr("cash money"));

}


void TableEditor::submit()
{
    model->database().transaction();
    if(model->submitAll()){
        model->database().commit();
    }else{
        model->database().rollback();
        QMessageBox::warning(this, tr("cash money"),
                             tr("The data dun did dum"));
    }
}

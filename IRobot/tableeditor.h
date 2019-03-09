#ifndef TABLEEDITOR_H
#define TABLEEDITOR_H

#include <QPushButton>
#include <QDialogButtonBox>
#include <QSqlTableModel>


class TableEditor : public QWidget
{
    Q_OBJECT

public:
    explicit TableEditor(const QString &tableName, QWidget *parent = nullptr);
    TableEditor();
private:
    QPushButton *submitButton;
    QPushButton *revertButton;
    QPushButton *quitButton;
    QDialogButtonBox *buttonBox;
    QSqlTableModel *model;
    QSqlDatabase database;

public slots:
    void submit();
};

#endif // TABLEEDITOR_H

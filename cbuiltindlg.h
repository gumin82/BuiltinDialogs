#ifndef CBUILTINDLG_H
#define CBUILTINDLG_H

#include <QDialog>
#include <QPushButton>
#include <QTextEdit>

class cbuiltindlg : public QDialog
{
    Q_OBJECT

public:
    cbuiltindlg(QWidget *parent = nullptr);
    ~cbuiltindlg();
private:
    QTextEdit       *displayTextEdit;
    QPushButton     *colorPushBtn;
    QPushButton     *errorPushBtn;
    QPushButton     *filePushBtn;
    QPushButton     *fontPushBtn;
    QPushButton     *inputPushBtn;
    QPushButton     *pagePushBtn;
    QPushButton     *progressPushBtn;
    QPushButton     *printPushBtn;
    QPushButton     *colorPushBtn2;

private slots:
    void doPushBtn();
    void doTextcolor();
};
#endif // CBUILTINDLG_H

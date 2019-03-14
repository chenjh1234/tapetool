#ifndef NEXT_DLG_H
#define NEXT_DLG_H
#include <QDialog>
#include <QString>
#include <QLabel>
#include <QCheckBox>
#include <QGridLayout>
//#include <QDebug>
#include "ui_nextReelDlg.h"
 
class nextDlg :public QDialog
{
    Q_OBJECT

public:
    nextDlg(QWidget *p);
    //paramView(QWidget *p,int idd);
    ~nextDlg();
    void init();

    void getParam();
    void setReel();

    QCheckBox *checkBoxH80;
   
public   slots:
 //   void slotFileOpen();
 //   void slotComBox(const QString);
    
protected:
private:
    QGridLayout *lyout;
    QWidget *inputW;
    QLabel * labelYes,*labelNo;
    QLabel * labelReel;
 
    Ui::DialogNext uiNext;
};
#endif

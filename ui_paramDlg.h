/********************************************************************************
** Form generated from reading UI file 'paramDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMDLG_H
#define UI_PARAMDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_DialogParam
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogParam)
    {
        if (DialogParam->objectName().isEmpty())
            DialogParam->setObjectName(QStringLiteral("DialogParam"));
        DialogParam->resize(400, 300);
        buttonBox = new QDialogButtonBox(DialogParam);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(190, 260, 201, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(DialogParam);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogParam, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogParam, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogParam);
    } // setupUi

    void retranslateUi(QDialog *DialogParam)
    {
        DialogParam->setWindowTitle(QApplication::translate("DialogParam", "Parameters", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogParam: public Ui_DialogParam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMDLG_H

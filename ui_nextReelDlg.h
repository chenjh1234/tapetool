/********************************************************************************
** Form generated from reading UI file 'nextReelDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEXTREELDLG_H
#define UI_NEXTREELDLG_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_DialogNext
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogNext)
    {
        if (DialogNext->objectName().isEmpty())
            DialogNext->setObjectName(QStringLiteral("DialogNext"));
        DialogNext->resize(408, 126);
        buttonBox = new QDialogButtonBox(DialogNext);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(180, 80, 201, 32));
        buttonBox->setLocale(QLocale(QLocale::English, QLocale::Australia));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        retranslateUi(DialogNext);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogNext, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogNext, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogNext);
    } // setupUi

    void retranslateUi(QDialog *DialogNext)
    {
        DialogNext->setWindowTitle(QApplication::translate("DialogNext", "Input next Reel?", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogNext: public Ui_DialogNext {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEXTREELDLG_H

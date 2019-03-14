/********************************************************************************
** Form generated from reading UI file 'inputoutput.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTOUTPUT_H
#define UI_INPUTOUTPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormDev
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButtonCheck;
    QComboBox *comboBoxTape;
    QPushButton *pushButtonFile;
    QLineEdit *lineEditDisk;

    void setupUi(QWidget *FormDev)
    {
        if (FormDev->objectName().isEmpty())
            FormDev->setObjectName(QStringLiteral("FormDev"));
        FormDev->resize(350, 150);
        gridLayout_2 = new QGridLayout(FormDev);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButtonCheck = new QPushButton(FormDev);
        pushButtonCheck->setObjectName(QStringLiteral("pushButtonCheck"));

        gridLayout->addWidget(pushButtonCheck, 0, 0, 1, 2);

        comboBoxTape = new QComboBox(FormDev);
        comboBoxTape->setObjectName(QStringLiteral("comboBoxTape"));

        gridLayout->addWidget(comboBoxTape, 1, 0, 1, 2);

        pushButtonFile = new QPushButton(FormDev);
        pushButtonFile->setObjectName(QStringLiteral("pushButtonFile"));

        gridLayout->addWidget(pushButtonFile, 2, 0, 1, 1);

        lineEditDisk = new QLineEdit(FormDev);
        lineEditDisk->setObjectName(QStringLiteral("lineEditDisk"));

        gridLayout->addWidget(lineEditDisk, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(FormDev);

        QMetaObject::connectSlotsByName(FormDev);
    } // setupUi

    void retranslateUi(QWidget *FormDev)
    {
        FormDev->setWindowTitle(QApplication::translate("FormDev", "Form", 0));
        pushButtonCheck->setText(QApplication::translate("FormDev", "Input Device", 0));
        pushButtonFile->setText(QApplication::translate("FormDev", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class FormDev: public Ui_FormDev {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTOUTPUT_H

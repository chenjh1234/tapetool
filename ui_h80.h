/********************************************************************************
** Form generated from reading UI file 'h80.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_H80_H
#define UI_H80_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_H80Form
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *checkBoxH80;
    QCheckBox *checkBoxRemoveTail;

    void setupUi(QWidget *H80Form)
    {
        if (H80Form->objectName().isEmpty())
            H80Form->setObjectName(QStringLiteral("H80Form"));
        H80Form->resize(400, 106);
        gridLayout_2 = new QGridLayout(H80Form);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(H80Form);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        checkBoxH80 = new QCheckBox(groupBox);
        checkBoxH80->setObjectName(QStringLiteral("checkBoxH80"));

        gridLayout->addWidget(checkBoxH80, 0, 0, 1, 1);

        checkBoxRemoveTail = new QCheckBox(groupBox);
        checkBoxRemoveTail->setObjectName(QStringLiteral("checkBoxRemoveTail"));

        gridLayout->addWidget(checkBoxRemoveTail, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(H80Form);

        QMetaObject::connectSlotsByName(H80Form);
    } // setupUi

    void retranslateUi(QWidget *H80Form)
    {
        H80Form->setWindowTitle(QApplication::translate("H80Form", "H80Param", 0));
        groupBox->setTitle(QApplication::translate("H80Form", "H80 Param", 0));
        checkBoxH80->setText(QApplication::translate("H80Form", "H80 tape copy", 0));
        checkBoxRemoveTail->setText(QApplication::translate("H80Form", "Remove the last option tail block", 0));
    } // retranslateUi

};

namespace Ui {
    class H80Form: public Ui_H80Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_H80_H

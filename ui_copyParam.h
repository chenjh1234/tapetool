/********************************************************************************
** Form generated from reading UI file 'copyParam.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COPYPARAM_H
#define UI_COPYPARAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_copyParam
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *labelFrom;
    QLineEdit *lineEditFrom;
    QLabel *labelCopy;
    QLineEdit *lineEditCopy;
    QLabel *labelAppend;
    QLineEdit *lineEditAppend;

    void setupUi(QWidget *copyParam)
    {
        if (copyParam->objectName().isEmpty())
            copyParam->setObjectName(QStringLiteral("copyParam"));
        copyParam->resize(388, 158);
        gridLayout_3 = new QGridLayout(copyParam);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(copyParam);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelFrom = new QLabel(groupBox);
        labelFrom->setObjectName(QStringLiteral("labelFrom"));
        labelFrom->setFrameShadow(QFrame::Raised);
        labelFrom->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelFrom, 0, 0, 1, 1);

        lineEditFrom = new QLineEdit(groupBox);
        lineEditFrom->setObjectName(QStringLiteral("lineEditFrom"));

        gridLayout->addWidget(lineEditFrom, 0, 1, 1, 1);

        labelCopy = new QLabel(groupBox);
        labelCopy->setObjectName(QStringLiteral("labelCopy"));
        labelCopy->setFrameShadow(QFrame::Raised);
        labelCopy->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelCopy, 1, 0, 1, 1);

        lineEditCopy = new QLineEdit(groupBox);
        lineEditCopy->setObjectName(QStringLiteral("lineEditCopy"));

        gridLayout->addWidget(lineEditCopy, 1, 1, 1, 1);

        labelAppend = new QLabel(groupBox);
        labelAppend->setObjectName(QStringLiteral("labelAppend"));
        labelAppend->setFrameShadow(QFrame::Raised);
        labelAppend->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelAppend, 2, 0, 1, 1);

        lineEditAppend = new QLineEdit(groupBox);
        lineEditAppend->setObjectName(QStringLiteral("lineEditAppend"));

        gridLayout->addWidget(lineEditAppend, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(copyParam);

        QMetaObject::connectSlotsByName(copyParam);
    } // setupUi

    void retranslateUi(QWidget *copyParam)
    {
        copyParam->setWindowTitle(QApplication::translate("copyParam", "Form", 0));
        groupBox->setTitle(QApplication::translate("copyParam", "CopyParam:", 0));
        labelFrom->setText(QApplication::translate("copyParam", "Copy From Reel:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditFrom->setToolTip(QApplication::translate("copyParam", "Copy start from which reel in input device", 0));
#endif // QT_NO_TOOLTIP
        lineEditFrom->setText(QApplication::translate("copyParam", "1", 0));
        labelCopy->setText(QApplication::translate("copyParam", "Copy Reels:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditCopy->setToolTip(QApplication::translate("copyParam", "Copy Number of reels", 0));
#endif // QT_NO_TOOLTIP
        lineEditCopy->setText(QApplication::translate("copyParam", "1", 0));
#ifndef QT_NO_TOOLTIP
        labelAppend->setToolTip(QApplication::translate("copyParam", "Append To", 0));
#endif // QT_NO_TOOLTIP
        labelAppend->setText(QApplication::translate("copyParam", "Append To:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditAppend->setToolTip(QApplication::translate("copyParam", "Append to (override which reel)", 0));
#endif // QT_NO_TOOLTIP
        lineEditAppend->setText(QApplication::translate("copyParam", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class copyParam: public Ui_copyParam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COPYPARAM_H

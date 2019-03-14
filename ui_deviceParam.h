/********************************************************************************
** Form generated from reading UI file 'deviceParam.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICEPARAM_H
#define UI_DEVICEPARAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deviceParam
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBoxDev;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBoxStart;
    QGridLayout *gridLayout;
    QRadioButton *radioButtonNotRewind;
    QRadioButton *radioButtonRewind;
    QGroupBox *groupBoxEnd;
    QGridLayout *gridLayout_2;
    QRadioButton *radioButtonRewindUnloadEnd;
    QRadioButton *radioButtonRewindEnd;
    QRadioButton *radioButtonNotRewindEnd;

    void setupUi(QWidget *deviceParam)
    {
        if (deviceParam->objectName().isEmpty())
            deviceParam->setObjectName(QStringLiteral("deviceParam"));
        deviceParam->setWindowModality(Qt::NonModal);
        deviceParam->resize(529, 212);
        gridLayout_4 = new QGridLayout(deviceParam);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBoxDev = new QGroupBox(deviceParam);
        groupBoxDev->setObjectName(QStringLiteral("groupBoxDev"));
        groupBoxDev->setFlat(false);
        groupBoxDev->setCheckable(false);
        gridLayout_3 = new QGridLayout(groupBoxDev);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBoxStart = new QGroupBox(groupBoxDev);
        groupBoxStart->setObjectName(QStringLiteral("groupBoxStart"));
        groupBoxStart->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gridLayout = new QGridLayout(groupBoxStart);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        radioButtonNotRewind = new QRadioButton(groupBoxStart);
        radioButtonNotRewind->setObjectName(QStringLiteral("radioButtonNotRewind"));
        radioButtonNotRewind->setChecked(false);

        gridLayout->addWidget(radioButtonNotRewind, 0, 1, 1, 1);

        radioButtonRewind = new QRadioButton(groupBoxStart);
        radioButtonRewind->setObjectName(QStringLiteral("radioButtonRewind"));
        radioButtonRewind->setChecked(true);

        gridLayout->addWidget(radioButtonRewind, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBoxStart, 0, 0, 1, 1);

        groupBoxEnd = new QGroupBox(groupBoxDev);
        groupBoxEnd->setObjectName(QStringLiteral("groupBoxEnd"));
        groupBoxEnd->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gridLayout_2 = new QGridLayout(groupBoxEnd);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        radioButtonRewindUnloadEnd = new QRadioButton(groupBoxEnd);
        radioButtonRewindUnloadEnd->setObjectName(QStringLiteral("radioButtonRewindUnloadEnd"));
        radioButtonRewindUnloadEnd->setChecked(true);

        gridLayout_2->addWidget(radioButtonRewindUnloadEnd, 0, 0, 1, 1);

        radioButtonRewindEnd = new QRadioButton(groupBoxEnd);
        radioButtonRewindEnd->setObjectName(QStringLiteral("radioButtonRewindEnd"));
        radioButtonRewindEnd->setChecked(false);

        gridLayout_2->addWidget(radioButtonRewindEnd, 0, 1, 1, 1);

        radioButtonNotRewindEnd = new QRadioButton(groupBoxEnd);
        radioButtonNotRewindEnd->setObjectName(QStringLiteral("radioButtonNotRewindEnd"));
        radioButtonNotRewindEnd->setChecked(false);

        gridLayout_2->addWidget(radioButtonNotRewindEnd, 0, 2, 1, 1);


        gridLayout_3->addWidget(groupBoxEnd, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupBoxDev, 0, 0, 1, 1);


        retranslateUi(deviceParam);

        QMetaObject::connectSlotsByName(deviceParam);
    } // setupUi

    void retranslateUi(QWidget *deviceParam)
    {
        deviceParam->setWindowTitle(QApplication::translate("deviceParam", "Form", 0));
        groupBoxDev->setTitle(QApplication::translate("deviceParam", "Input Device:", 0));
        groupBoxStart->setTitle(QApplication::translate("deviceParam", "When Start Copy", 0));
#ifndef QT_NO_TOOLTIP
        radioButtonNotRewind->setToolTip(QApplication::translate("deviceParam", "NotRewind", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        radioButtonNotRewind->setStatusTip(QApplication::translate("deviceParam", "NotRewind", 0));
#endif // QT_NO_STATUSTIP
        radioButtonNotRewind->setText(QApplication::translate("deviceParam", "None", 0));
#ifndef QT_NO_STATUSTIP
        radioButtonRewind->setStatusTip(QApplication::translate("deviceParam", "rewind", 0));
#endif // QT_NO_STATUSTIP
        radioButtonRewind->setText(QApplication::translate("deviceParam", "Rewind", 0));
        groupBoxEnd->setTitle(QApplication::translate("deviceParam", "When Finished Copy", 0));
#ifndef QT_NO_TOOLTIP
        radioButtonRewindUnloadEnd->setToolTip(QApplication::translate("deviceParam", "NotRewind", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        radioButtonRewindUnloadEnd->setStatusTip(QApplication::translate("deviceParam", "NotRewind", 0));
#endif // QT_NO_STATUSTIP
        radioButtonRewindUnloadEnd->setText(QApplication::translate("deviceParam", "Unload", 0));
#ifndef QT_NO_STATUSTIP
        radioButtonRewindEnd->setStatusTip(QApplication::translate("deviceParam", "rewind", 0));
#endif // QT_NO_STATUSTIP
        radioButtonRewindEnd->setText(QApplication::translate("deviceParam", "Rewind", 0));
#ifndef QT_NO_STATUSTIP
        radioButtonNotRewindEnd->setStatusTip(QApplication::translate("deviceParam", "Rewind&Unload", 0));
#endif // QT_NO_STATUSTIP
        radioButtonNotRewindEnd->setText(QApplication::translate("deviceParam", "None", 0));
    } // retranslateUi

};

namespace Ui {
    class deviceParam: public Ui_deviceParam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICEPARAM_H

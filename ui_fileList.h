/********************************************************************************
** Form generated from reading UI file 'fileList.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILELIST_H
#define UI_FILELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogFileList
{
public:
    QGridLayout *gridLayout_2;
    QTreeWidget *treeWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonUp;
    QPushButton *pushButtonDown;
    QPushButton *pushButtonClear;
    QFrame *line;
    QFrame *line_4;
    QPushButton *pushButtonRemove;
    QFrame *line_2;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonUnselect;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogFileList)
    {
        if (DialogFileList->objectName().isEmpty())
            DialogFileList->setObjectName(QStringLiteral("DialogFileList"));
        DialogFileList->resize(824, 750);
        gridLayout_2 = new QGridLayout(DialogFileList);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        treeWidget = new QTreeWidget(DialogFileList);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        gridLayout_2->addWidget(treeWidget, 0, 0, 1, 2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButtonUp = new QPushButton(DialogFileList);
        pushButtonUp->setObjectName(QStringLiteral("pushButtonUp"));

        gridLayout->addWidget(pushButtonUp, 2, 1, 1, 1);

        pushButtonDown = new QPushButton(DialogFileList);
        pushButtonDown->setObjectName(QStringLiteral("pushButtonDown"));

        gridLayout->addWidget(pushButtonDown, 3, 1, 1, 1);

        pushButtonClear = new QPushButton(DialogFileList);
        pushButtonClear->setObjectName(QStringLiteral("pushButtonClear"));

        gridLayout->addWidget(pushButtonClear, 9, 1, 1, 1);

        line = new QFrame(DialogFileList);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 4, 1, 1, 1);

        line_4 = new QFrame(DialogFileList);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 10, 1, 1, 1);

        pushButtonRemove = new QPushButton(DialogFileList);
        pushButtonRemove->setObjectName(QStringLiteral("pushButtonRemove"));

        gridLayout->addWidget(pushButtonRemove, 8, 1, 1, 1);

        line_2 = new QFrame(DialogFileList);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 1, 1, 1, 1);

        pushButtonAdd = new QPushButton(DialogFileList);
        pushButtonAdd->setObjectName(QStringLiteral("pushButtonAdd"));

        gridLayout->addWidget(pushButtonAdd, 0, 1, 1, 1);

        pushButtonUnselect = new QPushButton(DialogFileList);
        pushButtonUnselect->setObjectName(QStringLiteral("pushButtonUnselect"));

        gridLayout->addWidget(pushButtonUnselect, 11, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 2, 1, 1);

        label = new QLabel(DialogFileList);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DialogFileList);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 1, 1, 1);


        retranslateUi(DialogFileList);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogFileList, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogFileList, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogFileList);
    } // setupUi

    void retranslateUi(QDialog *DialogFileList)
    {
        DialogFileList->setWindowTitle(QApplication::translate("DialogFileList", "File List", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonUp->setToolTip(QApplication::translate("DialogFileList", "move selected items up", 0));
#endif // QT_NO_TOOLTIP
        pushButtonUp->setText(QApplication::translate("DialogFileList", "Up", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonDown->setToolTip(QApplication::translate("DialogFileList", "move selected items down", 0));
#endif // QT_NO_TOOLTIP
        pushButtonDown->setText(QApplication::translate("DialogFileList", "Down", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonClear->setToolTip(QApplication::translate("DialogFileList", "clear all items ", 0));
#endif // QT_NO_TOOLTIP
        pushButtonClear->setText(QApplication::translate("DialogFileList", "Clear", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonRemove->setToolTip(QApplication::translate("DialogFileList", "remove selected items ", 0));
#endif // QT_NO_TOOLTIP
        pushButtonRemove->setText(QApplication::translate("DialogFileList", "Remove", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonAdd->setToolTip(QApplication::translate("DialogFileList", "input files and add to view", 0));
#endif // QT_NO_TOOLTIP
        pushButtonAdd->setText(QApplication::translate("DialogFileList", "Add", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonUnselect->setToolTip(QApplication::translate("DialogFileList", "unselect and set sorting", 0));
#endif // QT_NO_TOOLTIP
        pushButtonUnselect->setText(QApplication::translate("DialogFileList", "Unselect", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogFileList: public Ui_DialogFileList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILELIST_H

/********************************************************************************
** Form generated from reading UI file 'QtMain.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTMAIN_H
#define UI_QTMAIN_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_QtMain
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinA;
    QLabel *label_2;
    QDoubleSpinBox *spinB;
    QProgressBar *progressBar;
    QPushButton *okBtn;

    void setupUi(QDialog *QtMain)
    {
        if (QtMain->objectName().isEmpty())
            QtMain->setObjectName(QStringLiteral("QtMain"));
        QtMain->resize(400, 162);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(10);
        QtMain->setFont(font);
        QtMain->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        gridLayout = new QGridLayout(QtMain);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(QtMain);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 42));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinA = new QSpinBox(QtMain);
        spinA->setObjectName(QStringLiteral("spinA"));
        spinA->setMinimumSize(QSize(0, 42));
        spinA->setMaximumSize(QSize(120, 16777215));
        spinA->setMaximum(1000);
        spinA->setValue(585);

        gridLayout->addWidget(spinA, 0, 1, 1, 1);

        label_2 = new QLabel(QtMain);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(0, 42));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinB = new QDoubleSpinBox(QtMain);
        spinB->setObjectName(QStringLiteral("spinB"));
        spinB->setMinimumSize(QSize(0, 42));
        spinB->setMaximumSize(QSize(120, 16777215));
        spinB->setDecimals(4);
        spinB->setValue(3.14);

        gridLayout->addWidget(spinB, 1, 1, 1, 1);

        progressBar = new QProgressBar(QtMain);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMinimumSize(QSize(0, 42));
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 2, 0, 1, 1);

        okBtn = new QPushButton(QtMain);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setMinimumSize(QSize(120, 42));
        okBtn->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(okBtn, 2, 1, 1, 1);


        retranslateUi(QtMain);

        QMetaObject::connectSlotsByName(QtMain);
    } // setupUi

    void retranslateUi(QDialog *QtMain)
    {
        QtMain->setWindowTitle(QApplication::translate("QtMain", "Qt-mix-with-Fortran-demo", Q_NULLPTR));
        label->setText(QApplication::translate("QtMain", "Please input parameter a:", Q_NULLPTR));
        label_2->setText(QApplication::translate("QtMain", "Please input parameter b:", Q_NULLPTR));
        okBtn->setText(QApplication::translate("QtMain", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtMain: public Ui_QtMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTMAIN_H

/********************************************************************************
** Form generated from reading UI file 'viewmain.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWMAIN_H
#define UI_VIEWMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewMain
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *btn_add;
    QPushButton *btn_update;
    QPushButton *btn_del;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *txt_libro;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QComboBox *cmb_year;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *txt_isbn;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *txt_autor;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QSpinBox *sp_ejemplar;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QCheckBox *cb_ciencias;
    QCheckBox *cb_tecnologia;
    QCheckBox *cb_medicina;
    QCheckBox *cb_social;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QRadioButton *rb_editorial1;
    QRadioButton *rb_editorial2;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *rb_editorial3;
    QLineEdit *txt_otro;
    QLabel *label_8;

    void setupUi(QWidget *viewMain)
    {
        if (viewMain->objectName().isEmpty())
            viewMain->setObjectName("viewMain");
        viewMain->resize(806, 257);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 0, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(212, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(85, 127, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(113, 170, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush6(QColor(170, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush8(QColor(0, 0, 0, 127));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(85, 127, 127, 127));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        QBrush brush10(QColor(246, 255, 255, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush10);
        viewMain->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Consolas")});
        font.setPointSize(10);
        font.setBold(true);
        viewMain->setFont(font);
        viewMain->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("applications-games")));
        viewMain->setWindowIcon(icon);
        gridLayoutWidget = new QWidget(viewMain);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 10, 311, 238));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        btn_add = new QPushButton(gridLayoutWidget);
        btn_add->setObjectName("btn_add");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/add/img/salvado.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_add->setIcon(icon1);
        btn_add->setIconSize(QSize(30, 30));
        btn_add->setFlat(true);

        horizontalLayout_8->addWidget(btn_add);

        btn_update = new QPushButton(gridLayoutWidget);
        btn_update->setObjectName("btn_update");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/update/img/editar.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_update->setIcon(icon2);
        btn_update->setIconSize(QSize(30, 30));
        btn_update->setFlat(true);

        horizontalLayout_8->addWidget(btn_update);

        btn_del = new QPushButton(gridLayoutWidget);
        btn_del->setObjectName("btn_del");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/delete/img/eliminar.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_del->setIcon(icon3);
        btn_del->setIconSize(QSize(30, 30));
        btn_del->setFlat(true);

        horizontalLayout_8->addWidget(btn_del);


        gridLayout->addLayout(horizontalLayout_8, 5, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        txt_libro = new QLineEdit(gridLayoutWidget);
        txt_libro->setObjectName("txt_libro");

        horizontalLayout_3->addWidget(txt_libro);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_6->addWidget(label_4);

        cmb_year = new QComboBox(gridLayoutWidget);
        cmb_year->setObjectName("cmb_year");

        horizontalLayout_6->addWidget(cmb_year);


        gridLayout->addLayout(horizontalLayout_6, 4, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_4->addWidget(label_2);

        txt_isbn = new QLineEdit(gridLayoutWidget);
        txt_isbn->setObjectName("txt_isbn");

        horizontalLayout_4->addWidget(txt_isbn);


        gridLayout->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout_7->addWidget(label_5);

        txt_autor = new QLineEdit(gridLayoutWidget);
        txt_autor->setObjectName("txt_autor");

        horizontalLayout_7->addWidget(txt_autor);


        gridLayout->addLayout(horizontalLayout_7, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_5->addWidget(label_3);

        sp_ejemplar = new QSpinBox(gridLayoutWidget);
        sp_ejemplar->setObjectName("sp_ejemplar");

        horizontalLayout_5->addWidget(sp_ejemplar);


        gridLayout->addLayout(horizontalLayout_5, 3, 0, 1, 1);

        verticalLayoutWidget = new QWidget(viewMain);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(330, 10, 211, 101));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);

        cb_ciencias = new QCheckBox(verticalLayoutWidget);
        cb_ciencias->setObjectName("cb_ciencias");

        verticalLayout->addWidget(cb_ciencias);

        cb_tecnologia = new QCheckBox(verticalLayoutWidget);
        cb_tecnologia->setObjectName("cb_tecnologia");

        verticalLayout->addWidget(cb_tecnologia);

        cb_medicina = new QCheckBox(verticalLayoutWidget);
        cb_medicina->setObjectName("cb_medicina");

        verticalLayout->addWidget(cb_medicina);

        cb_social = new QCheckBox(verticalLayoutWidget);
        cb_social->setObjectName("cb_social");

        verticalLayout->addWidget(cb_social);

        verticalLayoutWidget_2 = new QWidget(viewMain);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(330, 110, 211, 119));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName("label_7");

        verticalLayout_2->addWidget(label_7);

        rb_editorial1 = new QRadioButton(verticalLayoutWidget_2);
        rb_editorial1->setObjectName("rb_editorial1");

        verticalLayout_2->addWidget(rb_editorial1);

        rb_editorial2 = new QRadioButton(verticalLayoutWidget_2);
        rb_editorial2->setObjectName("rb_editorial2");

        verticalLayout_2->addWidget(rb_editorial2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        rb_editorial3 = new QRadioButton(verticalLayoutWidget_2);
        rb_editorial3->setObjectName("rb_editorial3");

        horizontalLayout_9->addWidget(rb_editorial3);

        txt_otro = new QLineEdit(verticalLayoutWidget_2);
        txt_otro->setObjectName("txt_otro");

        horizontalLayout_9->addWidget(txt_otro);


        verticalLayout_2->addLayout(horizontalLayout_9);

        label_8 = new QLabel(viewMain);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(550, 10, 221, 221));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/libros/img/libros.jpg")));
        label_8->setScaledContents(true);

        retranslateUi(viewMain);

        QMetaObject::connectSlotsByName(viewMain);
    } // setupUi

    void retranslateUi(QWidget *viewMain)
    {
        viewMain->setWindowTitle(QCoreApplication::translate("viewMain", "Registro de Libros", nullptr));
        btn_add->setText(QString());
        btn_update->setText(QString());
        btn_del->setText(QString());
        label->setText(QCoreApplication::translate("viewMain", "LIBRO:", nullptr));
        label_4->setText(QCoreApplication::translate("viewMain", "A\303\221O:", nullptr));
        label_2->setText(QCoreApplication::translate("viewMain", "ISBN:", nullptr));
        label_5->setText(QCoreApplication::translate("viewMain", "AUTOR:", nullptr));
        label_3->setText(QCoreApplication::translate("viewMain", "EJEMPLARES:", nullptr));
        label_6->setText(QCoreApplication::translate("viewMain", "\303\201rea del conocimiento:", nullptr));
        cb_ciencias->setText(QCoreApplication::translate("viewMain", "Ciencias", nullptr));
        cb_tecnologia->setText(QCoreApplication::translate("viewMain", "Tecnolog\303\255a", nullptr));
        cb_medicina->setText(QCoreApplication::translate("viewMain", "Medicina", nullptr));
        cb_social->setText(QCoreApplication::translate("viewMain", "Social", nullptr));
        label_7->setText(QCoreApplication::translate("viewMain", "Editorial", nullptr));
        rb_editorial1->setText(QCoreApplication::translate("viewMain", "PEARSON", nullptr));
        rb_editorial2->setText(QCoreApplication::translate("viewMain", "MCGRILL", nullptr));
        rb_editorial3->setText(QCoreApplication::translate("viewMain", "Otro:", nullptr));
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class viewMain: public Ui_viewMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWMAIN_H

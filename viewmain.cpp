#include "viewmain.h"
#include "ui_viewmain.h"
#include <QMessageBox>

viewMain::viewMain(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::viewMain)
{
    ui->setupUi(this);
    loadYears();
    connect(ui->btn_add,SIGNAL(clicked()),this,SLOT(saveData()));
}

viewMain::~viewMain()
{
    delete ui;
}
void viewMain::saveData(){
    QMessageBox::information(this,"Registro","Registro exitoso");
}
void viewMain::loadYears(){
    for(int year=2025;year>=1920;year--){
        ui->cmb_year->addItem(QString::fromStdString(to_string(year)));
    }
}

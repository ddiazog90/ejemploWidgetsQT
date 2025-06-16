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
    connect(ui->btn_add,SIGNAL(clicked()),this,
            SLOT(clear()));

}

viewMain::~viewMain()
{
    delete ui;
}
void viewMain::saveData(){
    vector<string> area;
    string n=ui->txt_libro->text().toStdString(),
           a=ui->txt_autor->text().toStdString(),
           e;
    int i=stoi(ui->txt_isbn->text().toStdString());
    int an=stoi(ui->cmb_year->
                  currentText().toStdString());
    int ej=ui->sp_ejemplar->value();
    if(ui->cb_ciencias->checkState())
        area.push_back(ui->cb_ciencias->text().toStdString());
    if(ui->cb_medicina->checkState())
        area.push_back(ui->cb_medicina->text().toStdString());
    if(ui->cb_social->checkState())
        area.push_back(ui->cb_social->text().toStdString());
    if(ui->cb_tecnologia->checkState())
        area.push_back(ui->cb_tecnologia->text().toStdString());
    bl.save(n,a,e,i,ej,an,area);



    QMessageBox::information(this,"Registro","Registro exitoso");
}
void viewMain::loadYears(){
    for(int year=2025;year>=1920;year--){
        ui->cmb_year->addItem(QString::fromStdString(to_string(year)));
    }
}
void viewMain::clear(){
    ui->txt_libro->clear();
    ui->txt_autor->clear();
    ui->txt_isbn->clear();
    ui->txt_otro->clear();
    ui->sp_ejemplar->clear();
    ui->cmb_year->setCurrentIndex(0);
    ui->cb_ciencias->setChecked(false);
    ui->cb_medicina->setChecked(false);
    ui->cb_social->setChecked(false);
    ui->cb_tecnologia->setChecked(false);
    ui->rb_editorial1->setCheckable(false);
    ui->rb_editorial2->setCheckable(false);
    ui->rb_editorial3->setCheckable(false);
}


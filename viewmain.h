#ifndef VIEWMAIN_H
#define VIEWMAIN_H

#include <QWidget>
#include <iostream>
#include <headers/biblioteca.h>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class viewMain;
}
QT_END_NAMESPACE

class viewMain : public QWidget
{
    Q_OBJECT

public:
    viewMain(QWidget *parent = nullptr);
    ~viewMain();

private:
    Ui::viewMain *ui;
    biblioteca bl;//gestionar los libros
    void loadYears();//cargar los años en el comboBox

private slots:
    void saveData();
    void clear();


};
#endif // VIEWMAIN_H

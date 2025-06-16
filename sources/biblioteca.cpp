#include <headers/biblioteca.h>
#include <QMessageBox>
void biblioteca::save(
    string&n,string&a,string&e,
    int&i,int&ej,int&an,
    vector<string>&ar){
    libros.push_back(new libro(
        n,a,e,i,ej,an,ar
        ));
}

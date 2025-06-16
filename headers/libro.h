#ifndef LIBRO_H
#define LIBRO_H
#include <iostream>
#include <vector>
using namespace std;
class libro{
private:
    string nombre,autor,editorial;
    int isbn,ejemplares,anio;
    vector<string>area;
public:
    libro();
    libro(string&,string&,string&,int&,int&,
          int&,vector<string>);
    string getNombre()const;
    string getAutor()const;
    string getEditorial()const;
    int getIsbn()const;
    int getEjemplares()const;
    int getAnio()const;
    vector<string> getArea()const;
    string info()const;
};

#endif // LIBRO_H

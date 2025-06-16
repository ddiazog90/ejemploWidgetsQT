#include <headers/libro.h>

libro::libro(){};

libro::libro(string&n,string&a,string&e,
             int&i,int&ej,int&an,
             vector<string>ar):
    nombre(n),autor(a),editorial(e),
    isbn(i),ejemplares(ej),anio(an),
    area(ar){};
string libro::getNombre()const{
    return nombre;
}
string libro::getEditorial()const{
    return editorial;
}
string libro::getAutor()const{
    return autor;
}
int libro::getIsbn()const{
    return isbn;
}
int libro::getEjemplares()const{
    return ejemplares;
}
int libro::getAnio()const{
    return anio;
}
vector<string> libro::getArea()const{
    return area;
}
string libro::info()const{
    return autor+";"+nombre+";"+editorial;
}

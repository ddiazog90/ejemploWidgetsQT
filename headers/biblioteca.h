#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include <headers/libro.h>

class biblioteca{
private:
    vector<libro*>libros;
public:
    void save(string&,string&,string&,
              int&,int&,int&,vector<string>&);

};

#endif // BIBLIOTECA_H

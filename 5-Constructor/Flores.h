#ifndef FLORES_H_
#define FLORES_H_

#include <string>
using std::string;

class Flores
{
private:
    string nombre;
    string color;

public:
    string get_nombre();
    void set_nombre(string nom);
    string get_color();
    void set_color(string col);
    string toString();
};
#endif
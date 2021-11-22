#include <fstream> //ifstream y ofstream
#include <iostream>
#include <string>
#include <sstream>

using std::cout;
using std::endl;
using std::ifstream;
using std::string;
using std::stringstream;

int main()
{
    ifstream archivo;
    string linea;
    string id, prod, precio, stock;

    archivo.open("/home/avmejia/TEC/AGO-DIC-21/TC1033/GitHub/AD21TC1033/6-Archivos/inventario.csv");

    while (getline(archivo, linea))
    {
        cout << linea << endl;

        stringstream flujo(linea);
        getline(flujo, id, ',');
        cout << id << endl;
        getline(flujo, prod, ',');
        cout << prod << endl;
        getline(flujo, precio, ',');
        cout << precio << endl;
        getline(flujo, stock, ',');
        cout << stock << endl;
    }

    archivo.close();
    return 0;
}
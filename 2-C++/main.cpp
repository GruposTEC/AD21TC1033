#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int metodo(int a[], int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma = suma + a[i];
    }

    return suma;
}

int main()
{
    int narr = 3;
    int arr[3];

    int narr2 = 5;
    int arr2[] = {0, 1, 2, 3, 4};

    int res = metodo(arr2, narr2);

    cout << res << endl;

    vector<string> v;

    cout << " El tamanio del vector es : " << v.size() << endl;

    v.push_back("Primer elemento");
    v.push_back("Segundo elemento");

    cout << " El tamanio del vector es : " << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << "Elemento :" << v[i] << endl;
    }

    return 0;
}
#ifndef SIMBOLO_H
#define SIMBOLO_H

#include <string>
using std::string;

class Simbolo
{
private:
    string tiro;

public:
    void setTiro(string t);
    string getTiro();
};

#endif
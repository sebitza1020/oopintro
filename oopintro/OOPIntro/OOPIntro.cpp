// polimorfism
#include <iostream>
#include "Entities.h"
#include "OOPIntro.h"
using namespace std;

int main()
{
    Profesor p;
    Elev e;
    Student s;

    Persoana* P[3] = { &p, &e, &s };

    P[0]->ConsoleWrite();
    P[1]->ConsoleWrite();
    P[2]->ConsoleWrite();

}

    


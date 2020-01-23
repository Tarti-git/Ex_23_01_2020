// EX_23_01_2020.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "Pcoul.h"

using namespace std;

int main()
{
    Point p1(3, 9);
    Point p2;
    Point p3(p1);
    Pcoul pc1(4, 6, Color::yellow);
    Pcoul pc2(p3, Color::red);
    Pcoul pc3;

    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;
    cout << pc1 << endl;
    cout << pc2 << endl;
    cout << pc3 << endl;
    return 0;
}


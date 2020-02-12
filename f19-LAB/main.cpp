/*
=== F19 =======================================

Izveidot programmu valodā C++, kas apstrādā teksta failu secīgā režīmā.
Dati no faila jānolasa pa vienai rindiņai. Nedrīkst dublēt visa faila saturu operatīvajā atmiņā.
Sīkākas prasības sk. Laboratorijas darbu noteikumos.

F19. Izvadīt dotajā teksta failā f sastapto latīņu alfabēta burtu un ciparu lietojuma biežuma tabulu (šķirojot lielos un mazos burtus) failā f1. Tabulai jābūt sakārtotai pēc burtu lietojuma biežuma.

*/


#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main()
{
    string line;
    char symbol;
    ifstream input ("f.txt");
    ofstream output ("out.txt")
    if(input.is_open()){
        while (input.get(symbol)) {
            cout << symbol << endl;

        }
        input.close();
    }
    else {
        cout << "unable to open file" << endl;
    }
}

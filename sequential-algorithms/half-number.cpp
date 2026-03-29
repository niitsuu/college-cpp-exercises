#include <iostream>
using namespace std;

int main()
{
    float numero, metade;
    
    cout << "Digite um número para saber sua metade: ";
    cin >> numero;
    
    metade = numero / 2.0;
    
    cout << "\nA metade de " << numero << " é " << metade;
    
    return 0;
}
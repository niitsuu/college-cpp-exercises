#include <iostream>
using namespace std;

int main(){
    int numero;
    
    cout << "Digite um número: ";
    cin >> numero;
    
    if (numero < 0) {
        numero = numero * -1;
    } 
        cout << numero;
    return 0;
}
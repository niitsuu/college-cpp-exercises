#include <iostream>
using namespace std;

int main(){
    int numero;
    
    cout << "Digite um número: ";
    cin >> numero;
    if (numero % 2 == 0){
        cout <<endl<< numero << " é par";
    } else {
        cout <<endl<< numero << " é impar";
    }
    return 0;
}
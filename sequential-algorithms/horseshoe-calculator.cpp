#include <iostream>
using namespace std; 

int main(){
    int cavalos, ferraduras;
    
    cout << "Quantos cavalos há no seu haras? ";
    cin >> cavalos;
    
    ferraduras = cavalos * 4;
    
    cout << "\nA quantidade de ferraduras que você precisa é " << ferraduras;
    
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    float valorQuilo, quiloConsumido, valorFinal;
    
    cout << "Digite o valor do quilo do produto: ";
    cin >> valorQuilo;
    
    cout << "Quantos quilos você comprou? ";
    cin >> quiloConsumido;
    
    valorFinal = quiloConsumido * valorQuilo;
    
    cout << "\nO valor de " << quiloConsumido << "Kg é R$" << valorFinal;

    return 0;
}
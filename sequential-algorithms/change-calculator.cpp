#include <iostream>
using namespace std;

int main() {
    float valorPago, valorProduto, troco;
    
    cout << "Digite o valor do produto: ";
    cin >> valorProduto;
    
    cout << "Digite o valor pago: ";
    cin >> valorPago;
    
    troco = valorPago - valorProduto;
    
    cout << "\nSeu troco é de R$" << troco;
    
    return 0;
}
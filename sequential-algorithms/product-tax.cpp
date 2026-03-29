#include <iostream>
using namespace std;

int main(){
    float valorProduto, produtoTaxado;
    
    cout << "Digite o valor do produto: ";
    cin >> valorProduto;
    
    produtoTaxado = valorProduto * 1.15;
    
    cout << "\nO valor do produto com taxa de 15% é de R$" << produtoTaxado;
    
    return 0;
}
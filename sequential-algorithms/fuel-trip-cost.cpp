#include <iostream>
using namespace std;

int main(){
    float distancia, consumo, valorCombustivel, valorTotal;
    
    cout << "Qual a distância que você quer percorrer em Km? ";
    cin >> distancia;
    
    cout << "Quantos Km seu carro percorre por litro? ";
    cin >> consumo;
    
    cout << "Quanto custa o litro do combustível? ";
    cin >> valorCombustivel;
    
    valorTotal = distancia / consumo * valorCombustivel;
    
    cout << "Você gastará R$" << valorTotal;
    
    return 0;
}
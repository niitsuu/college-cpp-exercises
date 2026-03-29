#include <iostream>
using namespace std;

int main(){
    int hora, minuto;
    
    cout << "Entre com um número para as horas: ";
    cin >> hora;
    
    cout << "Entre com um número para as minutos: ";
    cin >> minuto;
    
    if (hora >= 0 and hora < 24 and  minuto < 60 and minuto >= 0) {
        cout << "A hora é válida";
    } else {
        cout << "A hora é inválida.";
    }
    return 0;
}
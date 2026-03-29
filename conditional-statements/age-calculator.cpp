#include <iostream>
using namespace std;

int main(){
    int diaNascimento, mesNascimento, anoNascimento, diaAtual, mesAtual, anoAtual, idadeD, idadeM, idadeA;
    
    cout << "\nDigite sua data de nascimento, coloque dia, mes e ano, um de cada vez: ";
    cin >> diaNascimento >> mesNascimento >> anoNascimento;
    
    cout << "\nQue dia é hoje? coloque dia, mes e ano, um de cada vez: ";
    cin >> diaAtual >> mesAtual >> anoAtual;
    
    idadeD = diaAtual - diaNascimento;
    idadeM = mesAtual - mesNascimento;
    idadeA = anoAtual - anoNascimento;
    
    if (idadeD < 0){
        idadeD += 30;
        idadeM--;
    }
    if (idadeM < 0){
        idadeA--;
    }
    cout << "\nVocê tem " << idadeA << " anos " << idadeM << " meses e aproximadamente " << idadeD << " dias de idade.";
        
    return 0;
}
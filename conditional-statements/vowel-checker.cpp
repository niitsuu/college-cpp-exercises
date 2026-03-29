#include <iostream>
using namespace std;

int main(){
    char letra;
    cout << "Digite uma letra: ";
    cin >> letra;
    if (letra == 'a' or letra == 'e' or letra == 'i' or letra == 'o' or letra == 'u'){
        cout << "É uma vogal";
    } else {
        cout << "Não é vogal";
    }
    return 0;
}
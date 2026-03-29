#include <iostream>
using namespace std;

int main(){
    float s1, c1, c2;
    
    cout << "Quanto é seu salário? ";
    cin >> s1;
    
    cout << "Quanto é o valor das duas contas? ";
    cin >> c1 >> c2;
    
    c1 = c1 * 1.02;
    c2 = c2 * 1.02;
   
    s1 = s1 - c1 - c2;
    
    cout << "Após o pagamento das contas nos valores de R$" << c1 << " e R$" << c2 << " lhe restou R$" << s1 << " do seu salário.";
    
    return 0;
}
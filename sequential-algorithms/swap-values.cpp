#include <iostream>
using namespace std;

int main(){
    float A, B, C;
    cout << "Digite o número de A e B: ";
    cin >> A >> B;
    

    C = A;
    A = B;
    B = C;
   
    cout << "O número A é " << A << " e o B é " << B;
    
    return 0;
}
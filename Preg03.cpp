#include <iostream>
using namespace std;

int main (){
    int cobro, horas;
    cout << "Ingresa el valor de horas: ", cin >> horas;
    cin.get();
    cobro=0;
    if(horas<=4)
        cobro=6;
    else{
    cobro=6+(horas-4)*2;
	}
    
    cout << "Importe a pagar: " << cobro << endl;
  
    return 0;
}

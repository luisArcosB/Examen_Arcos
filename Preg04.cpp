#include <iostream>
using namespace std;

int main (){
    int donativo, ganancias;
    cout << "Ingresa sus ganancias: ", cin >> ganancias;
    if(0<=ganancias&&ganancias<=1000)
        donativo= 0.05*ganancias;
    if(1000<ganancias&&ganancias<=1500)
        donativo= 0.07*ganancias;
    if(1500<ganancias&&ganancias<=2000)
        donativo= 0.08*ganancias;
    if(2000<ganancias&&ganancias<=5000)
	    donativo= 0.10*ganancias;
    if(5000<ganancias)
	    donativo= 0.15*ganancias;
    
    cout << "El donativo es: " << donativo << endl;
  
    return 0;
}

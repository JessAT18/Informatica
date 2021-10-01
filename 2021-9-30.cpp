#include <iostream>

using namespace std;

int main() {
    //Indicar si el numero ingresado es positivo, negativo o cero.
    /*
        a > 0 Es positivo
        a = 0 Es cero
        a < 0 Es negativo
    */
    int a;
    cin >> a;
    if(a > 0){
        cout << a << " es positivo" << endl;
    }
    if(a < 0) {
        cout << a << " es negativo" << endl;
    }
    if(a == 0){
        cout << a << " es cero" << endl;
    }
    return 0;
}

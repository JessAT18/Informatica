#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num, num1;
    float num2;
    char c1;
    string s1;
    
    int suma = 0;
    int resta, mult, div_, mod_;
    int operacion;
    
    cin >> num >> num1;
    
    suma = num + num1;
    resta = num - num1;
    mult = num * num1;
    div_ = num / num1;
    mod_ = num % num1;
    
    operacion = (suma * (resta - div_)) * mult;
    
    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Mult: " << mult << endl;
    cout << "Div: " << div_ << endl;
    cout << "Mod: " << mod_ << endl;
    
    cout << "(suma * (resta - div_)) * mult " << operacion << endl;
    
    /*
    int raiz, a;
    cin >> a;
    raiz = sqrt(a); //raiz cuadrada
    cout << raiz << endl;
    int potencia, b, exponente;
    cin >> b >> exponente;
    potencia = pow(b, exponente);
    cout << potencia;*/
    
    //cin >> s1;
    /*
    getline(cin, s1);
    cout << s1;
    */
    return 0;
}

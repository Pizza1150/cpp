#include <iostream>



using namespace std;



int power(int base, int exponent) {
    int result = 1;

    for (int i = 0; i < exponent; i++) { result *= base; } 
    
    return result; }



int main() {
    int base, exponent, result;

    cout << "Base = " << endl; cin >> base;
    cout << "Exponent = " << endl; cin >> exponent;

    result = power(base, exponent);

    cout << base << " ^ " << exponent << " = " << result << endl;

    return 0; }
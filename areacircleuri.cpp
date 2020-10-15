#include <iostream>
#include<iomanip>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double n = 3.14159;
    double r;
    cin >> r;
    cout << "A="<< fixed << setprecision(4) << n*r*r << endl;

    return 0;
}

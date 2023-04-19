#include <iostream>
using namespace std;

bool esTriPitago(int a, int b, int c) {
    return (a * a + b * b == c * c);
}


int encontrarProducto(int n) {
    for (int a = 1; a < n / 3; a++) { 
        for (int b = a + 1; b < n / 2; b++) { 
            int c = n - a - b; 
            if (esTriPitago(a, b, c)) { 
                return a * b * c;
            }
        }
    }
    return 0; 
}

int main() {
    int n = 1000; 
    int producto = encontrarProducto(n);
    if (producto != 0) {
        cout << "El producto abc es: " << producto << endl;
    } else {
        cout << "No se encontro ningun triplete pitagorico cuya suma sea " << n << endl;
    }
    return 0;
}

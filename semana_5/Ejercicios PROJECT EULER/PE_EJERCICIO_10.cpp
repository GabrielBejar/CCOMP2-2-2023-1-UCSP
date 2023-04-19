#include <iostream>
using namespace std;

bool esPrimo(long long n) {
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

long long sumPrimos(long long n) {
    long long sum = 0;
    for (long long i = 2; i <= n; i++) {
        if (esPrimo(i)) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    long long l = 2000000;
    long long sum = sumPrimos(l);
    cout << "La suma de todos los primos por debajo de " << l << " es: " << sum << endl;
    return 0;
}

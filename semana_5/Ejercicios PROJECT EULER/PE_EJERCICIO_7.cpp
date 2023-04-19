#include <iostream>
using namespace std;



bool esPrimo(int n) {
    if (n <= 1) {
		return false;
	}
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
			return false;
		}
    }
    return true;
}

int hallarNprimo(int n) {
    int c = 0;
    int i = 2;
    while (c < n) {
        if (esPrimo(i)) {
            c++;
        }
        i++;
    }
    return i - 1;
}

int main() {

    int n = 10001;
   
    cout << "El " << n << " numero primo es: " << hallarNprimo(n) << endl;
    return 0;
}

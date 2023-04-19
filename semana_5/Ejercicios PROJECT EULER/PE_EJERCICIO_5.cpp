#include <iostream>
using namespace std;

int mdiv() {
    int a = 20;
    int x = a;
    int num = 1;

    while (num <= a) {
        if (x % num == 0) {
            num++;
        }else {
            num = 1;
            x += a;
        }
    }

    return x;
}

int main() {
    cout << mdiv();
    return 0;
}


#include <iostream>

using namespace std;


void swaps(int &q, int &r){
    int tmp = q;
    q = r;
    r = tmp;
    cout << "El valor de q en swap " << q << endl;
    cout << "El valor de r en swap " << r << endl;
}


int main(){

int q = 3;
int r = 5;
swaps(q, r);
cout << "El valor de q es " << q << endl;
cout << "El valor de r es " << r << endl;
}
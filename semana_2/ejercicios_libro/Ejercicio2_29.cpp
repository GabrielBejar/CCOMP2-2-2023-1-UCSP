#include <iostream>

using namespace std;


int main(){

    int l0 = 0;
    int l1 = 1;
    int l2 = 2;
    int l3 = 3;
    int l4 = 4;


    int s0 = 6 *(l0 * l0);
    int s1 = 6 *(l1 * l1);
    int s2 = 6 *(l2 * l2);
    int s3 = 6 *(l3 * l3);
    int s4 = 6 *(l4 * l4);


    int v0 = l0 * l0 * l0;
    int v1 = l1 * l1 * l1;
    int v2 = l2 * l2 * l2;
    int v3 = l3 * l3 * l3;
    int v4 = l4 * l4 * l4;


    cout << "Lado(cm)\tSuperficie(cm^2)\tVolumen(cm^3)\n";
    cout << l0 << "\t\t" << s0 << "\t\t\t" << v0 << endl;
    cout << l1 << "\t\t" << s1 << "\t\t\t" << v1 << endl;
    cout << l2 << "\t\t" << s2 << "\t\t\t" << v2 << endl;
    cout << l3 << "\t\t" << s3 << "\t\t\t" << v3 << endl;
    cout << l4 << "\t\t" << s4 << "\t\t\t" << v4 << endl;


    return 0;
}
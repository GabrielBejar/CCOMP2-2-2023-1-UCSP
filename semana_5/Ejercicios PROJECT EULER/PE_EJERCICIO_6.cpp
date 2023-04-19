#include <iostream>
using namespace std;

int cuad(int a){
    int sum = 0;
    for(int x = 1; x <= a; x++){
        sum += (x * x);
    }
    return sum;
}

int sumcuad(int a){
    int sum = 0;
    for(int x = 1; x <= a; x++){
        sum += x;
    }
    return sum*sum;
}

int main(){
    int sum_cuad = cuad(100);
    int cuad_sum = sumcuad(100);
    int diff = cuad_sum - sum_cuad;
    cout << "La diferencia entre la suma de los cuadrados y el cuadrado de la suma de los primeros 100 numeros naturales es: " << diff << endl;
    return 0;
}

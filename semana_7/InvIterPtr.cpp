#include <iostream>
using namespace std;


void swaparr2(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swaparr(int &pri, int &fin){
    int temp = pri;
    pri = fin;
    fin = temp;            
}

void invertirArr(int* arr, int tam) {
    int* fin = arr + tam - 1;
    while(arr < fin){
        swaparr(*arr++, *fin--);
    }
    

}

void invertirArrRec(int* arr, int* fin){
    if (arr >= fin){
        return;
    }
    swaparr(*arr, *fin);
    invertirArrRec(++arr, --fin);
}



int main(){


    int arr1[] = {1, 2, 3, 4, 5, 6};
    int tamarr = sizeof(arr1)/sizeof(arr1[0]);

    invertirArr(arr1, tamarr);

    
    for (int i = 0; i < tamarr; i++) {
        cout << arr1[i] << " " ;
    }
    cout << endl;
   
    invertirArrRec(arr1, );

    
    for (int i = 0; i < tamarr; i++) {
        cout << arr1[i] << " " ;
    }
    cout << endl;
   
    return 0;
}
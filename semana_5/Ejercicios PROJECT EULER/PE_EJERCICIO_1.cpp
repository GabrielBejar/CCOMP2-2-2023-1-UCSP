

#include <iostream>
using namespace std;



int multiplos(int a){

	int sum = 0;
	for (int i = 1; i < a ; i++){
		if (i % 3 == 0 || i % 5 == 0){
			sum += i;
		}
	}
	return sum;
}	



int main(){
	cout << multiplos(1000) << endl;
	return 0;
}

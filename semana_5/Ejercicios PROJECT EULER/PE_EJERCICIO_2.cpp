


#include <iostream>
using namespace std;



void fibonacci(int a){

	long long sum = 0;
	long long fib = 1;
	long long num1 = 1;
	long long num2 = 1;


	for (long long i = 1; i < a; i++){
			fib = num1 + num2;
			num1 = num2;
			num2 = fib;
			if ((num2 % 2 == 0) && (num2 <= 4000000)){
				sum += fib;
			}
	}	
	
	cout << sum << endl;
}


int main() {
	fibonacci(50);
	
	return 0;
}


#include <iostream>
#include <typeinfo>
using namespace std;

int* max_subarray(int* arr){
	int *A = new int[3];
	A[0] = 10;
	return A;
}

int main(){	
	int* B = max_subarray(arr);
	for (int i=0; i<3; i++){
		cout << *(B+i) << endl;
	}	
}

#include <iostream>
using namespace std;

class DynamicArray{
public:
	int *arr;
	
	DynamicArray(int arraySize){
		arr = new int [arraySize];
	}
	
	~DynamicArray(){
		delete[] arr;
		arr = NULL;
	}
};

int main(){
	int size;
	int i;
	cout << "정수 개수 입력: ";
	cin >> size;
	
	DynamicArray da(size);
	
	cout << size << "개의 정수를 입력해라" << endl;
	for (i=0; i<size; i++){
		cin >> da.arr[i];
	}
	
	for (i=0; i<size; i++){
		cout << da.arr[i] << " ";
	}
}

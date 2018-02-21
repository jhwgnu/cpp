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
	cout << "���� ���� �Է�: ";
	cin >> size;
	
	DynamicArray da(size);
	
	cout << size << "���� ������ �Է��ض�" << endl;
	for (i=0; i<size; i++){
		cin >> da.arr[i];
	}
	
	for (i=0; i<size; i++){
		cout << da.arr[i] << " ";
	}
}

#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<int> arr){
	vector<int>::iterator ptr;
	for(ptr=arr.begin(); ptr<arr.end(); ptr++){
		cout << *ptr << " ";
	}
	cout << endl;
}

int main(){
	vector<int> arr = {1,2,3,4,5};
	int mid = arr.size()/2;
	
	vector<int> left(arr.begin(), arr.begin() + mid);
	vector<int> right(arr.begin()+mid, arr.end());
	
	right.insert(right.end(), left.begin(), left.end());	
	print_vector(right);
}

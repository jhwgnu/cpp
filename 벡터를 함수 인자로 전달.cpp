#include <iostream>
#include <vector>
using namespace std;


int foo(vector<int> v){
	cout << "<foo>" << endl;	
	for (auto i: v){
		i++;
		cout << i << " ";
	}
	cout << endl;
}

int main(){
	vector<int> vec = {12,23,31};
	cout << "before foo" << endl;
	for (auto e: vec){
		cout << e << " ";
	}
	cout << endl;
	
	foo(vec);
	
	cout << "after foo" << endl;
	for (auto e: vec){
		cout << e << " ";
	}
	cout << endl;
	
	
}

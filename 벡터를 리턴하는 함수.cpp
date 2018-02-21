#include <iostream>
#include <vector>

using namespace std;

vector<int> foo(){
	return {1, 3};
}

int main(){
	vector<int> vec = foo;
	cout << vec[1];
}

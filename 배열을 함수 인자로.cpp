#include <iostream>

using namespace std;

void foo(int**, int);

int main(){
	int ** routes = NULL;
	int n, i ,j;
	cin >> n;
	routes = new int*[n];
	
	for(i=0; i<n; i++){
		routes[i] = new int[n];
	}	
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			routes[i][j] = i*j+1;
//			cin >> routes[i][j];
		}
	}
	
	foo(routes, n);
	
	delete [] routes;
	routes = NULL;
}

void foo(int** arr, int n){	
	int i,j;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			cout << arr[i][j] << "\t";
		} cout << endl;
	}
}

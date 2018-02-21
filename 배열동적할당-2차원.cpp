#include <iostream>

using namespace std;

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
			cin >> routes[i][j];
		}
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			cout << routes[i][j] << "\t";
		} cout << endl;
	}
	
	
	
	delete [] routes;
	routes = NULL;
}

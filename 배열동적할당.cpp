//http://www.fredosaurus.com/notes-cpp/newdelete/50dynamalloc.html
#include <iostream>

using namespace std;

int main(){
	int* a = NULL;   // Pointer to int, initialize to nothing.
	int n;           // Size needed for array
	cin >> n;        // Read in the size
	a = new int[n];  // Allocate n ints and save ptr in a.
	for (int i=0; i<n; i++) {
	    a[i] = i*2;    // Initialize all elements to zero.
	}
	
	for (int i=0; i<n; i++) {
	    cout << a[i] << endl;
	}
	
	delete [] a;  // When done, free memory pointed to by a.
	a = NULL;     // Clear a to prevent using invalid memory reference.
}

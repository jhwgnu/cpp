//Computer Programming 2016 lab1 ex3
#include <iostream>
#include <set>
using namespace std;


int main(){
	string str;
	cin >> str;
	
	set<char> punc = {'_', '.', '-'};
	set<char>::iterator it = punc.find('_');
	for(auto &c : str){
		if(punc.find(c)) continue;
		cout << c;			
	}
}

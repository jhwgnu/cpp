#include <iostream>
#include <bitset>

using namespace std;
int main()
{
    string binary = bitset<8>(128).to_string(); //to binary
    cout<<binary<<"\n";

//    unsigned long decimal = bitset<8>(binary).to_ulong();
//    cout<<decimal<<"\n";
    return 0;
}

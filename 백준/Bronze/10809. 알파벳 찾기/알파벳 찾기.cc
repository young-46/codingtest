#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1;
    char pos = 'a';
    cin >> str1;
    while(pos != ('z' + 1)){
        if(str1.find(pos) != string::npos){
            cout << str1.find(pos) << " ";
        }
        else{
            cout << -1 << " ";
        }
        pos++;
    }
}
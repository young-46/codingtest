#include <iostream>

using namespace std;

int main()
{
    char al[8] = {'C', 'F', 'I', 'L', 'O', 'S', 'V', 'Z'};
    string num;
    cin >> num;
    int hap = 0;
    for(int i = 0; i < num.size(); i++){
        if(num[i] == 1){
            hap += 2;
        }
        else{
            for(int j = 0; j < 8; j++){
                if(num[i] <= al[j]){
                    hap += j+3;
                    break;
                }
            }
        }
    }
    cout << hap;
}
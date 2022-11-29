#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> ml;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        ml.push_back(a);
    }
    sort(ml.begin(), ml.end());
    int pf = 0;
    long long pl = 2147483647;
    //int pl = ml[0]; // 왜 최대를 굳이 2^31 - 1로?
    long long pk;
    long long result;
    
    while(pf <= pl){ // 이분 탐색에 관한 생각 오류... 까먹은 거
        int cnt = 0;
        pk = (pf+pl) / 2;
        for(int i = 0; i < n; i++){
            cnt += ml[i]/pk; // 전혀 생각하지 못한 코드
        }
        if(cnt < k){
            pl = pk - 1;
            // 너무 크다
        }
        else{
            result = pk;
            pf = pk + 1;
            // 너무 작다
        }
    }
    cout << result;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n;

    unordered_map<int, int> mapa;

    while(cin >> m)
        mapa[m]++;
    
    for(int i = 1; i <= n; i++){
        if(mapa[i] == 0){
            cout << i << endl;
            break;
        }
    }
}
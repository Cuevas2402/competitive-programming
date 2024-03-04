#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, c, i = 1;
    bool flag = true;
    cin >> n >> x;
    map<int, int> m;

    while(i <= n){

        cin >> c;
        if (m[x-c]){
            cout << m[x-c] << " " << i << endl;
            !flag;
            break;
        }else{
            m[c] = i;
        }

        i++;
    }

    if (flag){
        cout << "IMPOSSIBLE" << endl;
    }
}
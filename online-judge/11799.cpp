#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t, max, b;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> t;
        max = 0;
        while(t--){
            cin >> b;
            if(b > max)
                max = b;
        }
        cout << "Case " << i << ": " << max << endl;;
    }
}
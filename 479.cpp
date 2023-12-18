#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    string s;
    cin >> n >> k;
    while(k--){
        s = to_string(n);
        if (s[s.size()-1] != '0')
            n--;
        else
            n/=10;
    }
    cout << n << endl;
}
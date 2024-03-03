#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, l;
    long long int acum = 0;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> m;
        if(i == 0){
            l = m;
        }else{
            if(m < l){
                acum += (l - m);
            }else{
                l = m;
            }

        }
    }

    cout << acum << endl;
}
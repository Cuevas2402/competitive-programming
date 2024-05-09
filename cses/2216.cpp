#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, acum = 0;
    long long int b;

    cin >> n;

    map<long long int, int> m;

    while (n--){
 
        cin >> b;

        if(!m[b-1]){
            acum++;
        }

        m[b]++;

    }

    cout << acum << endl;
}
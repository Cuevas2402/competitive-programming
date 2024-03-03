
#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    
    cin >> n;

    map<int, char> m;
    while(n--){
        int l, s;
        cin >> l >> s;
        m[l] = 'L';
        m[s] = 'S';
        
    }
    int acum = 0, max = 0;
    for (auto it = m.begin(); it != m.end(); it++){
        if (it->second == 'L')
            acum += 1;
        else
            acum -= 1;

        if (acum > max)
            max = acum;
    }

    cout << max << endl;
}



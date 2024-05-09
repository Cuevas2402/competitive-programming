#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, b, maximo = 0, pointer = 1, acum = 1;
    vector<int> v;

    cin >> n; 

    while(n--){
        cin >> b;

        v.push_back(b);

    }

    map<int, int> m;


    for(int i = 0; i < v.size(); i++){

        if(m[v[i]] > 0 && m[v[i]] >= pointer){

            pointer = m[v[i]] + 1;

        }

        m[v[i]] = i+1;

        acum = i + 2 - pointer;

        maximo = max(maximo, acum);

    }

    cout << maximo << endl;
        
    return 0;
}
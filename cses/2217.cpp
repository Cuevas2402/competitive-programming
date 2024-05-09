#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, h,i = 0, j, aux, acum = 0;
    long long int b;

    cin >> n >> h;

    vector<long long int> v;
    unordered_map<long long int, int> m;

    v.push_back(-1);
    m[0] = i;

    while (n--){
 
        i++;
        cin >> b;

        if(!m[b-1]){
            acum++;
        }

        m[b] = i;
        v.push_back(b);

    }

    while(h--){

        cin >> i >> j;

        aux = m[v[j]];
        m[v[j]] = m[v[i]];
        m[v[i]] = aux;

        aux = v[j];
        v[j] = v[i];
        v[i] = aux;

        if(m[v[i]-1] > m[v[i]])
            acum++;
        else if(m[v[i]-1] < m[v[i]] && m[v[j]] < m[v[i]-1])
            acum--;

        if(m[v[j]-1] > m[v[j]])
            acum++;
        else if(m[v[j]-1] < m[v[j]] && m[v[i]] < m[v[j]-1])
            acum--;
        cout << acum << endl;

    }
}
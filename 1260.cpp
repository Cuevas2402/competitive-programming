#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, c, b;
    cin >> n;
    while(n--){
        vector <int> v;
        cin >> c;
        while(c--){
            cin >> b;
            v.push_back(b);
        }
        int acum = 0;
        for(int i = 0 ; i < v.size(); i++){
            int cont = 0;
            for(int j = 0; j < i; j++){
                if(v[i] >= v[j]  && j != i){
                    cont++;
                }
            }
            acum+=cont;
        }
        cout  << acum << endl;
    }
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    int m,n, e, h, aux1;
    float k, d , p, aux2;
    while(cin >> m >> d >> p >> n && m >= 0 ){
        aux1 = 0;
        aux2 = 0.0;
        map <int, float> mapa;
        h = d;
        d += m;
        while(n--){
            cin >> e >> k;
            mapa[e] = k;
        }
        int mes = 0;
        while( d > (h - (p/m) * e) ){
            if(mapa[mes]){
                d = (d*(1-mapa[mes]));
                aux1 = mes;
                aux2 = mapa[mes];
            }else{
                d = (d*(1-aux2));
            }
            mes++;
        }
        cout << mes << " months" << endl;
    } 
}
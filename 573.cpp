#include <bits/stdc++.h>

using namespace std;

int main(){
    float h, u, d, f, dec, in;
    int cont;
    while(cin >> h >> u >> d >> f && h != 0 && u != 0 && d != 0 && f != 0){
        cont = 1;
        in = 0 ;
        dec = (u*f)/100.0;
        while(in >= 0){
            in = u + in;
            u = u - dec;
            cont++;
            if(in >= h)
                break;
            in-=d;
        }
        if(in >= 0){
            cout << "Success on day " << in << endl;
        }else{
            cout << "Failure on day " << in << endl;
        }
    }
}
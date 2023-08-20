#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, b, h, w, p, s, g, acum;
    while(cin >> n >> b >> h >> w){
        acum = b+1;
        for(int i = 0; i < h; i++){
            cin >> p;  
            for(int j = 0; j < w; j++){
                cin >> g;
                if(p*n <= b && g >= n && p*n<acum)
                    acum = p*n; 
            }
        }
        if(acum < b+1){
            cout << acum << endl;
        }else{
            cout << "stay home" << endl;
        }
    }
}
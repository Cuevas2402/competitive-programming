#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d, n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if(a < b){
            cout << "impossible" << endl;
        }else{
            c = ceil(a/2.0) + floor(b/2.0);
            d = floor(a/2.0) - floor(b/2.0);
            if((c+d) == a && abs(c-d) == b){
                cout << c << " " << d << endl;
            }else{
                cout << "impossible" << endl;
            }    
        }
        
    }
}
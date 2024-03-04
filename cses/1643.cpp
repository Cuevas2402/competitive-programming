#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    long int s, l, a, m;

    for(int i = 0; i < n; i++){
        
        cin >> a;

        if (!i){
            l = a;
            m = a; 
        }else{

            l = max(a, a + l);

            if (l > m){
                m = l;
            }

        }

    }

    cout << m << endl;
        
}
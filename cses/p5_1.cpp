#include <bits/stdc++.h>

using namespace std;


int main(){
    int n, last;
    cin >> n;
    if(n > 3 || n == 1 ){
        for(int i = 1; i <= n; i++)
            if(i%2 == 0){
                cout << i << " ";
                last = i;
            }
        
        for(int i = 1; i <= n; i++)
            if(!(i%2 == 0))
                cout << i << " ";
    } else {

        cout << "NO SOLUTION";

    }

}
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    cin >> n;
    while( n != 1){
    //for (int i = 0; i <200; i++){
        cout << n << " ";
        if (n%2 == 0){
            n = n / 2;
        }else{
            n = n * 3 + 1;
        }
    }
    cout << n << " ";
}
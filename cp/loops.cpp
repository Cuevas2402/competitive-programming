#include <bits/stdc++.h>


using namespace std;
const int MAX = 100001;

bool isPrime[MAX];
void cribaeratostenet(int n){
    for (int i = 0; i < n; i++)
        isPrime[i] = true;
    int i, j;
    for(int i = 0; i < n/2; i++)
        if(isPrime[i])
            for(int j = (i*2); j < n; j+=i)
                !isPrime[j];
}

int main(){
    return 0;
}
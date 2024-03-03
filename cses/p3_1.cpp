#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    
    int max = 0;
    for (int i = 0; i < s.size(); i++){

        int acum = 1;
        while(s[i] == s[i+1]){
            acum++;
            i++;
        }

        if (acum > max)
            max = acum;
    }
    
    cout << max << endl;
    
}
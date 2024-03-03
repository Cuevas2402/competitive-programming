#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, err, cant;
    string s, g;
    bool flag;
    while(cin >> n && n != -1){
        cin >> s >> g;
        flag = false;
        err = 0;
        cant = s.size();

        map <char, int> m;
        for(int i = 0; i < s.size(); i++)
            m[s[i]]++;
        cout << "Round " << n << endl;
        for(int i = 0; i < g.size(); i++ ){

            if(err == 7){
                cout << "You lose." << endl;
                flag = true;
                break;
            }

            if(cant == 0){
                cout << "You win." << endl;
                flag = true;
                break;
            }

            if(m[g[i]] > 0){
                cant -= m[g[i]];
                m[g[i]] = 0;
            }else
                err++;
            
        }

        if(!flag)
            cout << "You chickend out." << endl;
              
    }
}
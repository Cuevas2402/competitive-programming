#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,c, max, cont = 1;
    float p;
    string s, g, smax;
    while(cin >> n >> m && n!=0 && m!=0){
        cin.ignore();
        for(int i = 0; i < n; i++){
            getline(cin , s);
        }

        max = 0;

        for(int i = 0; i < m; i++){
        
            cin >> s >> p >> c;
            for(int j = 0; j < c; j++)
                cin >> g;

            if(c > max){
                max = 0;
                smax = s;
            }

        }
        
        cout << "RFP #"<< cont << endl <<  smax << endl;
        cont++;
    }
}
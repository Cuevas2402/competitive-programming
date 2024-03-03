#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int m, actual = 0, anterior = actual, len = 1;
        cin >> m;
        bool flag = true;
        while(flag){

            if (m < actual) {
                string s = "";
                int limite = m - (actual-anterior);
                for(int i = 1; i <= len; i++){

                    s += to_string(i);
                    if (s.size() >= limite)){
                        cout << s[limite-1] << endl;
                        flag = false;
                        break;    
                    }

                }

            }

            actual =  actual + anterior + to_string(len).size();
            anterior += to_string(len).size();
            len++;

        }
    }
}
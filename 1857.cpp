#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    bool r;
    cin >> n;
    while (n--) {
        cin >> s;
        r = false;
        queue<int> q;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] >= '5' || (1 + s[i] >= '5' && r)) {

                if (i == 0) {
                    s[i] = '0';
                    s = '1' + s;
                } else {
                    s[i] = '0';
                }

                r = true;

                while (!q.empty()) {
                    if(i == 0)
                        s[q.front() + 1] = '0';
                    else
                        s[q.front()] = '0';
                    q.pop();
                }
            } else {
                if(r){
                    s[i] = 1 + s[i];
                    r = false;
                } 
                
                q.push(i);
            }
        }
        cout << s << endl;
    }
}
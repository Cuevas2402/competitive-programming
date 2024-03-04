#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;

    cin >> n;
    vector<pair<int, int>> v;
    while(n--){
        int s, f;
        cin >> s >> f;
        v.push_back({f, s});
    }
    sort(v.begin(), v.end());
    int acum = 0, last = 0;
    for (int i = 0; i < v.size(); i++){
        if(last <= v[i].second){
            acum++;
            last = v[i].first;
        }
    }
    cout << acum << endl;
}
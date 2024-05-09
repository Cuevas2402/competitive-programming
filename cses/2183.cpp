#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n;

    vector <long long int> v;

    long long int b, acum;

    while(n--){
        cin >> b;
        v.push_back(b);
    }

    sort(v.begin(), v.end());

    acum = 1;


    for(int i = 0; i < v.size(); i++){
        if (acum < v[i]){
            break;
        }
        acum+=v[i];
    }

    cout << acum << endl;

}
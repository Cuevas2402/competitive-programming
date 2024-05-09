#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n;

    vector <int> v;

    long long int b;

    while(n--){
        cin >> b;
        v.push_back(b);
    }

    sort(v.begin(), v.end());

    b = 0;

    for(int i = 0 ; i < v.size(); i++)
        b += abs(v[i] - v[(v.size()-1)/2]);

    cout << b << endl;

}
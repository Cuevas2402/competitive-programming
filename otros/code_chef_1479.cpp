#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	int n, m, h;
	while(t--){
	    cin >> n >> m >> h;
	    vector <int> a;
	    vector<long long int> b;
	    long long int s;
	    while(n--){
	        cin >> s;
	        a.push_back(s);
	    }
	    while(m--){
	        cin >> s;
	        b.push_back(s*h);
	    }
	    s = 0;
	    sort(a.rbegin(), a.rend());
	    sort(b.rbegin(), b.rend());
	    for(int i = 0; i < b.size() && i < a.size(); i++){
	       if(b[i] > a[i]){
	           s += a[i];
	       }else {
	           s += b[i];
	       }
	    }
	    cout << s << endl;
	    
	    
	}

}

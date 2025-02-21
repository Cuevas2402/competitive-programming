#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n, i = 0;
	cin >> n;
	vector<int> v(n,0);
	while(n--){
		cin >> v[i];
		i++;
	}

	sort(v.begin(), v.end());

	for(int j : v){
		cout << j << " ";
	}
	cout << endl;
	return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main(){

	int n;
	string s;
	int cont = 0;
	vector<string> v;

	cin >> n ;

	while(n--){
		cin >> s;
		v.push_back(s);
	}

	for(int i = 0; i < v.size(); i++){
		cont++;
		int j = i;
		while(j < v.size() && v[i] == v[j]){
			j++;
		}
		i = j - 1;
	}

	cout << cont << endl;

	return 0;
}
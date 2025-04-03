#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){

	string s;
	int n, count = 0;
	map<char, char> m;

	cin >> n;
	cin >> s;

	for(int i = 0; i < n - 1 ; i++) {
		while(s[i] == s[i+1]){
			count++;
			i++;
		}
	}

	cout << count << endl;

	return 0;
}
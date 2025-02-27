#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

	string s1, s2;
	cin >> s1 >> s2;
	for(int i = 0; i < s1.size(); i++){
		if( tolower(s1[i]) > tolower(s2[i])){
			cout << 1 << endl;
			break;
		}

		if( tolower(s1[i]) < tolower(s2[i])){
			cout << -1 << endl;
			break;
		}

		if(i == s1.size() - 1){
			cout << 0 << endl;
		}
	}
	return 0;
}
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	string s;
	cin >> s;

	string may, minu;
	int diff1 = 0, diff2 = 0;

	for(int i = 0; i < s.size(); i++){
		may += (char) toupper(s[i]);
		minu += (char) tolower(s[i]);

		if(may[i] != s[i]){
			diff1++;
		}

		if(minu[i] != s[i]){
			diff2++;
		}

	}

	if(diff2 <= diff1){
		cout << minu << endl;	
	}else{
		cout << may << endl;
	}

	return 0;
}
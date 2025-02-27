#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
	string s;

	int cont = 0;

	cin >> s;

	map<char, int> m;

	for(char aux : s){
		m[aux]++;
		if(m[aux] == 1)
			cont++;
	}

	if (cont % 2 == 0){
		cout << "CHAT WITH HER!" << endl;
	}else{
		cout << "IGNORE HIM!" << endl;
	}


	return 0;
}
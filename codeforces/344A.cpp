#include <iostream>

using namespace std;

int main(){

	int n;
	string s, prev;

	cin >> n;
	cin >> prev;
	n--;

	int cont = 1;
	int maximum = -1;

	while(n--){
		cin >> s;
		if(s == prev){
			cont++;
			maximum = max(maximum, cont);
		}else{
			cont = 1;
		}
		prev = s;
	}

	cout << maximum << endl;

	return 0;
}
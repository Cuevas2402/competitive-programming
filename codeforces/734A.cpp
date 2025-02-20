#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	string s;

	cin >> n >> s;

	int d = 0 , a =0;


	for(int i = 0 ; i < s.size(); i++)
		s[i] == 'A' ? a++ : d++;

	if(a == d)
		cout << "Friendship" << endl;
	else if(a > d)
		cout << "Anton" << endl;
	else
		cout << "Danik" << endl;


	return 0;
}
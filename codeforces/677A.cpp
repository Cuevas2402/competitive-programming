#include <iostream>

using namespace std;

int main(){

	int n , k;

	cin >> n >> k;

	int cont = 0 ;

	int b;

	while(cin >> b)
		cont = b > k ? cont+2 : cont+1;

	cout << cont << endl;

	return 0;
}
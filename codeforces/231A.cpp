#include <iostream>

using namespace std;

int main(){

	int n;

	cin >> n;
	int cont = 0;
	for(int i = 0; i < n; i++){

		int acum = 0;
		
		int b;

		for(int j = 0; j < 3; j++){
			cin >> b;
			acum += b;
		}

		cont = acum >= 2 ? cont + 1 : cont;

	}

	cout << cont << endl;

	return 0;
}
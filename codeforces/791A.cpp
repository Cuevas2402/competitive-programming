#include <iostream>

using namespace std;

int main(){
	int n, m;
	int cont = 0;
	cin >> n >> m;
	while(true){
		if( n > m)
			break;
		n = n * 3;
		m = m * 2;
		cont++;
	}
	cout << cont << endl;

	return 0;
}
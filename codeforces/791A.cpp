#include <iostream>

using namespace std;

int main(){
	int n, m;
	int cont = 1;
	while(true){
		if( n > m)
			break;
		n *= 3;
		m *= 2;
		cont++;
	}
	cout << cont << endl;

	return 0;
}
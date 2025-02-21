#include <iostream>

using namespace std;

int main(){
	int i,j;
	int n;
	bool flag = false;
	for(i = 0 ; i < 5 ; i++){
		for(j = 0 ; j < 5 ; j++){
			cin >> n;
			if(n){
				flag = true;
				break;
			}
		}
		if(flag)
			break;
	}

	int res = abs(2 - i) + abs(2 - j);

	cout << res << endl;

	return 0;
}
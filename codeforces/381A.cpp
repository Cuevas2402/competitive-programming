#include <iostream>
#include <deque>

using namespace std;

int main(){

	int n;
	int s = 0, d = 0;
	int round = 1;	
	int res;

	cin >> n;

	deque<int>v (n,0);

	for(int i = 0; i < n; i++)
		cin >> v[i];

	while(!v.empty()){

		if(v.front() >= v.back()){
			res = v.front();
			v.pop_front();	
		}else{
			res = v.back();
			v.pop_back();
		}

		if(round % 2 != 0){
			s += res;
		}else{
			d += res;
		}

		round++;

	}

	cout << s << " " << d << endl;
	
	return 0;
}
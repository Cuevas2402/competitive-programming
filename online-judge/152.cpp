#include <iostream>
#include <vector>
#include <math.h>
#include <float.h>
#include <algorithm>
#include <map>
#include <iomanip>
using namespace std;

int main(){

	int x, y, z;
	vector<vector<double> > v;	
	map<int, int>m;
	map<int, int>::iterator it;

	while(cin >> x >> y >> z){

		if( x == 0 && z == 0 && y == 0)
			break;
		
		vector<double> aux;
		aux.push_back(x);
		aux.push_back(y);
		aux.push_back(z);
		v.push_back(aux);
	}

	for(int i = 0; i < v.size(); i++){
		double mini = DBL_MAX;
		for(int j = 0; j < v.size(); j++){
			if(j != i){
				double diff = sqrt(pow(v[j][0] - v[i][0], 2) + pow(v[j][1] - v[i][1], 2) + pow(v[j][2] - v[i][2], 2));
				mini = min(mini, diff);
			}
		}
		int res = (int) floor(mini);
		m[res]++;
	}

	for(it = m.begin(); it != m.end(); it++){

		if( it == m.begin()) {
			cout << it->second;
		}else{
			cout << setw(4) << setfill(' ') << it->second;
		}
	}

	return 0;
}
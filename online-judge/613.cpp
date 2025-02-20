#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

// n1 -> n2 -> n3 -> n2

int main(){

	string s ;

	while(cin >> s && s != "-1"){

		string n = s;

		int iteration = 1;

		map <string, int> loop;

		string prev = s;

		while(true){

			map <char, int> m;

			for(int i = 0; i < prev.size(); i++)
				m[prev[i]]++;

			string res = "";

			for(auto it = m.begin(); it != m.end(); it++){
				
				res += to_string(it->second);
				res += it->first;

			}

			if (iteration == 16 ){

				cout << n <<  " can not be classified after 15 iterations" << endl;
				break;

			}

			if(loop[res]){

				if(res == prev){

					cout << n <<  " is self-inventorying";

					if(loop[res] == 1)
					
						cout << endl;
					
					else

						cout << " after " << iteration - 1 << " steps" << endl;

				}else{

					int k = iteration - loop[res];
					cout << n << " enters an inventory loop of length " << k << endl;
					
				}

				break;

			}



			prev = res;
			loop[res] = iteration;
			iteration++;

		}

	}

	return 0;
}
#include <stack>
#include <string>
#include <iostream>

using namespace std;

int main(){

	string s;

	cin >> s;

	stack <char> stc;
	int cont = 0;

	while(cont <= s.size()-1){
		if(!stc.empty() && stc.top() == '(' && s[cont] == ')'){
			stc.pop();
		}else{
			stc.push(s[cont]);
		}
		cont++;
	}

	if(stc.empty())
		cout << "Si" << endl;
	else
		cout << "No" << endl;

	return 0;
}
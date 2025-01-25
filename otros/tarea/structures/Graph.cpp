#include "Graph.h"
#include <vector>
#include <iostream>

using namespace std;

void Graph::add(char from , char to){

	this->adj[from].push_back(to);

}


bool find(){

}


int main(){
	int n;
	int from, to;

	cin >> n;
	vector<vector<int>> g (n+1, vector<int>(n+1,0))	;

	while(cin >> from >> to)
		g[from][to] = 1;







	return 0;
}
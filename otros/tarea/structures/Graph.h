#include <map>
#include <vector>
#ifndef GRAPH_H
#define GRAPH_H

class Graph {

	public :
		std::map<char, std::vector<char>> adj;
		void add(char from , char to);

};

#endif
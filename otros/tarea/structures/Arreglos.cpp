#include <iostream>
#include <vector>

using namespace std;


int findMax(int arr[]){

	int len = sizeof(arr) / sizeof(arr[0]);

	int maximo = arr[0];


	for(int i = 0; i < len; i++){
		maximo = max(maximo, arr[i]);
	}

	return maximo;

}
void move(int k, vector<int> &arr){

	int len = arr.size();

	vector<int> aux(arr.begin(), arr.end());

	k = len % k;

	for(int i = 0; i < len; i++){

		
	}

}

int main(){

	return 0;
}
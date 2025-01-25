#include <iostream>
#include <vector>
using namespace std;


void merge(vector<int> &arr, int inicio, int pivote, int fin){

	vector<int> izq;
	vector<int> der;

	for(int i = inicio; i < pivote; i++)
		izq.push_back(arr[i]);

	for(int i = pivote; i <= fin; i++)
		der.push_back(arr[i]);

	int i = inicio;
	int j = pivote;
	int index = inicio;

	while(index <= fin){
		
		if(izq[i] < der[j]){
			arr[index] = izq[i];
			i++;
		}else{
			arr[index] = der[j];
			j++;
		}

		index++;

	}

}

void mergesort(vector<int> &arr, int inicio, int fin){

	if(inicio >= fin)
		return;

	int pivote = (inicio + fin) / 2;
	mergesort(arr, inicio, pivote);
	mergesort(arr, fin, pivote);
	merge(arr, inicio, pivote, fin);

}


int main(){

	cout << 1 << endl;

	return 0;
}
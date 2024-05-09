#include <bits/stdc++.h>
using namespace std;

class Compare{
    public:
        bool operator()(int a, int b){
            return a < b;
        }
};

int main(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);

    vector<int> art(arr, arr+5);

    priority_queue<int, vector<int>, Compare> heap;
    priority_queue<int, vector<int>, greater<int>> heap;




}
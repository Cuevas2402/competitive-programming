#include <bits/stdc++.h>

using namespace std;


int main(){
    int n, b;

    cin >> n;

    vector<int> v;

    while(n--){

        int change = false;

        cin >> b;

        int i;

        for(i = 0; i < v.size(); i++){

            if(v[i] > b){

                cout << v[i] << " " << b << endl;

                v[i] = b;
                break;

            }

        }




        if(i == v.size()-1){
            v.push_back(b);
        }



    }

    cout << v.size() << endl;

    return 0;
}
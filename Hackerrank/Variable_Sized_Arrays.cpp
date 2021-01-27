#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,q,k,value,a,index;
    cin >> n>>q;
    vector<vector<int>> nvec;
    for (int i=0;i<n;i++){
        cin>> k;
        vector<int> ivec;
        for (int j=0;j<k;j++){
            cin>> value;
            ivec.push_back(value);
            }
        nvec.push_back(ivec);
    }
    for (int l=0; l<q;l++){
        cin >> a>>index;
        cout<<nvec[a][index]<<"\n";
    }
    return 0;
}
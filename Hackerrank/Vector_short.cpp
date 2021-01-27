#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    int value;
    cin>>N;
    vector<int> vec;
    for (int i=0;i<N;i++){
        cin>>value;
        vec.push_back(value);
    }
    std::sort(vec.begin(),vec.end());
    for (int j=0;j<N;j++){
        cout<< vec[j]<<" ";
    }
    return 0;
}

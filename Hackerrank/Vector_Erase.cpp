#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N,m,a,b;
    int ele;
    cin>> N;
    vector<int> vec;
    for (int i=0;i<N;i++){
        cin>> ele;
        vec.push_back(ele);
    }
    cin >> m;
    vec.erase(vec.begin()+(m-1));
    cin >> a>>b;
    vec.erase(vec.begin()+(a-1),vec.begin()+(b-1));
    cout << vec.size()<<"\n";
    for (auto x:vec){
        cout << x<< " ";
    }
    return 0;
}

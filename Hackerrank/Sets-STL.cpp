#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int Q,x,y;
    set<int> s;
    set<int>::iterator itr;
    cin>>Q;
    for (int q=0; q<Q ;++q){
        cin >>x>>y;
        if (x==1){
            s.insert(y);
        }
        if (x==2 && s.find(y)!=s.end()){
            s.erase(y);
        }
        if (x==3 && s.find(y)!=s.end()){
            cout<<"Yes"<<"\n";
        }
        if (x==3 && s.find(y)==s.end()){
            cout<<"No"<<"\n";
        }
    }
    return 0;
}


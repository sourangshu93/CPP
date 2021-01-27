#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int Q,y,p;
    string x;
    map<string, int> m;
    map<string, int>::iterator it;
    cin>>Q;
    for (int q=0;q<Q;++q){
        cin >>p>>x;
        it=m.find(x);
        if (p==1 && it==m.end()){
            cin>>y;
            m.insert(pair<string, int>(x,y));
        }
        if (p==1 && it!=m.end()){
            cin>>y;
            m.at(x)=(it->second+y);
        }
        if (p==2 && it!=m.end()){
            m.at(x)=0;
        }
        if (p==3 && it!=m.end()){
            int k=it->second;
            cout << k <<"\n";
        }
        if (p==3 && it==m.end()){
            cout << "0"<<"\n";
        }
    }
    return 0;
}
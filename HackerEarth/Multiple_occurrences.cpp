#include <iostream>
#include <vector>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <set>
using namespace std;
bool Pred (int a, int b) 
{ 
    return (a == b); 
} 

int main(){
    int T,N,e,sum=0;
    vector<int> A,B;
    vector<int>::iterator it1,it2;
    cin >> T;
    for (int i=0;i<T;++i){
        cin >> N;
        for (int j=0;j<N;++j){
            cin >> e;
            A.push_back(e);
        }
    set <int> s(A.begin(),A.end());
    B.assign(s.begin(),s.end());
    for (int k=0;k<B.size();++k){
        it1=find_end(A.begin(),A.end(),B[k]);
        it2=find(A.begin(),A.end(),B[k]);
        cout<<(it1-A.begin())<<"\n";
        cout<<(it2-A.begin())<<"\n";
    }
    }
    return 0;
}

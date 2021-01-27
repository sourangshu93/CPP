#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N,n,Q,Y,min;
    vector<int> data,diff;
    vector<int>:: iterator it,it1;
    cin >> N;
    for (int i=0;i<N;++i){
        cin>>n;
        data.push_back(n);
    }
    cin >> Q;
    for (int j=0;j<Q;++j){
        cin >>Y;
        it=find(data.begin(),data.end(),Y);
        if (it !=data.end()){
            cout<< "Yes"<< " " <<(it-data.begin()+1)<<"\n";
        }
        if (it ==data.end()){
            for (int k=0;k<N;++k){
                if (data[k]-Y>0){
                    diff.push_back(data[k]-Y);
                }
            }
            min=*min_element(diff.begin(),diff.end());
            it1=find(data.begin(),data.end(),(Y+min));
            diff.clear();
            cout<<"No"<< " "<<(it1-data.begin()+1)<<"\n";
        }
    }
    return 0;
}

#include <iostream>
using namespace std;
main(){
    int v1=10;
    int *p1;
    p1=&v1;
    cout<< v1<<" is the data and the pointer is "<<*p1<<endl;
    *p1=22;
    cout<< v1<<" is the data and the pointer is "<<*p1<<endl;
}
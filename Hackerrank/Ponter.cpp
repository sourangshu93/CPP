#include <iostream>
using namespace std;
int update(int *a,int *b) {
    if(*a>*b){
    *b = *a-*b;
    *a = *a -*b +*a;
    }
    else {
    *b = *b-*a;
    *a = *a + *b + *a;
    }
    return 0;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    cin >> a >> b;
    update(pa, pb);
    cout<< a<< endl;
    cout<< b<< endl;
    return 0;
}

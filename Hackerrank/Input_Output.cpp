#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[3],i;
    int sum=0;
    for (i=0;i<3;i++){
        cin >> arr[i];
    }
    for (i=0;i<3;i++){
        sum=sum+arr[i];
    }
    cout << sum<<"\n";
    return 0;
}

#include <iostream>
#include <conio.h>
using namespace std;

constexpr int fibonaci(int n){
    switch (n)
    {
    case 0: return 0;
    case 1: return 1;
    default: return fibonaci(n-1)+fibonaci(n-2);
    }
}

int main(){
    cout<<fibonaci(10);
}
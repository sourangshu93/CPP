#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b,c;
    char e,f;
    cin >> a;
    cin >> b;
    int len_a=a.size();
    int len_b= b.size();
    c=a+b;
    cout<< len_a<< " "<<len_b<<"\n";
    cout<<c<<"\n";
    e=b[0];
    cout<< e;
    for (int i=1;i<len_a;i++){
        cout <<a[i];
    }
    cout << " ";
    f=a[0];
    cout<< f;
    for (int j=1;j<len_b;j++){
        cout <<b[j];
    }
    cout << "\n";
    return 0;
}
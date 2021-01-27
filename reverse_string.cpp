#include <iostream>
#include <cstdio>
#include <istream>
using namespace std;
int main(){
    string word;
    cout << "Enter a word: ";
    cin >>  word;
    int l= word.length();
    cout << "The reversed string is: ";
    for (int i=l-1;i>=0;i--){
        cout<<word[i];
    }
}
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    string name;
    string food;
    cout <<"Please enter your name :";
    cin >> name ;
    cout <<"Hello "<<name<<", nice to see you, What is your favourite food? ";
    cin >> food;
    cout << "Great "<< name<<"!! "<< food<<" is also my favourite food.\n"<< endl ;
    return 0;
}

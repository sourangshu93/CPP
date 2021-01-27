#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream inputFileA;
    inputFileA.open("newfileA.txt");
    string newfileA;
    if (!inputFileA.fail())
        {
            while(inputFileA >> newfileA)
            {
                cout << newfileA<<" ";
            }
        }
}
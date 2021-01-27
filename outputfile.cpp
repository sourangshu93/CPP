#include <iostream>
#include <fstream>
using namespace std;
 
int main(){
    ofstream outputfileB;
    outputfileB.open("NewfileB.txt");//,ios::app);
    for (int i=1;i<11;i++){
        outputfileB<<"This is line "<< i << endl;
    }
    outputfileB.close();
}
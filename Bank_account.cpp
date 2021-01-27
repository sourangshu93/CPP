#include <iostream>
#include<ctime>
using namespace std;
#include "Account.h"

Account::Account() : balance(0)
{

};
int main(){
    time_t current_time=time(NULL);
    cout<<ctime(&current_time);
}
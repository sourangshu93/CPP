#include <iostream> 

using namespace std; 
 
class BankAccount
{
  private: 
	float balance;
  public:    
  BankAccount();  
	void Deposit(float);
  void WithDrawl();
  float getbalance();
};
BankAccount::BankAccount()
{
  balance=0;
}
float BankAccount::getbalance()
{
  return balance;
}
void BankAccount::Deposit(float bal)
{
  balance=balance+bal;

}
int main() 
{
  BankAccount checking;
  BankAccount savings;
  cout <<"Checking account initial balance is :"<< checking.getbalance()<<"$"<<endl;
  cout <<"Savings account initial balance is :"<< savings.getbalance()<<"$"<<endl;
  checking.Deposit(100);
  savings.Deposit(200);
  cout <<"The checking account balance post deposit is :"<< checking.getbalance()<<"$"<<endl;
  cout <<"The savings account balance post deposit is :"<< savings.getbalance()<<"$"<<endl;
}




#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
  Account account1(1000);
  Account account2(25000);

  account1.credit(15000);
  account2.debit(1000);

  cout << account1.getBalance();
  cout << account2.getBalance();
}

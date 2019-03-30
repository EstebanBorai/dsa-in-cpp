#include <iostream>
#include "Account.h"

using namespace std;

Account::Account(int initialBalance) {
  balance = initialBalance;
}

int Account::notifyError(int ammount) {
  cout << "Ammount must be over 0 current ammount: " << ammount << endl;
  return ammount;
}

int Account::credit(int ammount) {
  if (ammount > 0) {
    balance += ammount;
    return balance;
  } else {
    return notifyError(ammount);
  }
}

int Account::debit(int ammount) {
  if (ammount > 0 && balance - ammount > 0) {
    balance -= ammount;
    return balance;
  } else {
    return notifyError(ammount); 
  }
}

int Account::getBalance() {
  return balance;
}

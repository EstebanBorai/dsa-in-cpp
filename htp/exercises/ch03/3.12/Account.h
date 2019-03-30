#include <string>
using namespace std;

class Account {
  public:
    Account(int);
    int credit(int ammount);
    int debit(int ammount);
    int getBalance();

  private:
    int balance;
    int notifyError(int ammount);
};

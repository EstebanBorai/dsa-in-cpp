#ifndef CREDIT_CARD_H
#define CREDIT_CARD_H

#include <string>
#include <iostream>

class CreditCard {
  public:
    CreditCard(const std::string& no, const std::string& nm, int lim, double bal = 0);
    
    std::string getNumber() const { return number; }
    std::string getName() const { return name; }
    double getBalance() const { return balance; }
    int getLimit() const { return limit; }

    void setNumber(std::string number) { number = number; }
    void setName(std::string name) { name = name; }
    void setBalance(double balance) { balance = balance; }
    void setLimit(int limit) {
      if (limit < 0) {
        limit = 0;
      }

      limit = limit;
    }

    bool chargelt(double price);
    void makePayment(double payment, bool isPastDueDate);

  private:
    std::string number;
    std::string name;
    int limit;
    double balance;
};

std::ostream& operator<<(std::ostream& out, const CreditCard& c);

#endif

#include "CreditCard.h"

CreditCard::CreditCard(const std::string& no, const std::string& nm, int lim, double bal) {
  number = no;
  name = nm;
  balance = bal;
  limit = lim;
}

bool CreditCard::chargelt(double price) {
  if (price < 0) {
    return false;
  }

  if (price + balance > double(limit)) {
    return false;
  }

  balance += price;
  return true;
}

void CreditCard::makePayment(double payment, double interest) {
  if (payment > 0) {
    balance -= (payment * interest);
  }
}

std::ostream& operator<<(std::ostream& out, const CreditCard& c) {
  out << "Number: " << c.getNumber() << "\n"
      << "Name: " << c.getName() << "\n"
      << "Balance: " << c.getBalance() << "\n"
      << "Limit: " << c.getLimit() << "\n";

  return out;
}
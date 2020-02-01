#include <vector>
#include "CreditCard.h"

typedef std::vector<CreditCard*> Wallet;

void testCreditCard() {
  Wallet wallet(10);

  wallet[0] = new CreditCard("5673 8725 9387 4362", "John Bowman", 2500);
  wallet[1] = new CreditCard("7363 8836 2938 3372", "John Bowman", 3500);
  wallet[2] = new CreditCard("2672 3982 2928 3272", "John Bowman", 5000);

  for (int j = 1; j <= 16; j++) {
    wallet[0] -> chargelt(double(j));
    wallet[1] -> chargelt(2 * j);
    wallet[2] -> chargelt(double(3 * j));
  }

  std::cout << "Card Payments" << std::endl;

  for (int i = 0; i < 3; i++) {
    std::cout << *wallet[i] << std::endl;

    while (wallet[i] -> getBalance() > 100.0) {
      wallet[i] -> makePayment(100.0, 1.20);

      std::cout << "Card: " << wallet[i] -> getNumber() << " Balance: " << wallet[i] -> getBalance() << std::endl; 
    }

    std::cout << "\n";
    delete wallet[i];
  }
}

int main() {
  testCreditCard();

  return 0;
}

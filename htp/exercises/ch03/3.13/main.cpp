#include <iostream>
#include "Invoice.h"

using namespace std;

int main()
{
  Invoice invoice1("A-123-123", "Something copado", 5, 15);

  invoice1.getInvoiceAmmount();
}

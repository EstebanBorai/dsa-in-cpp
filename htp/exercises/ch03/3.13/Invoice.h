#include <string>

using namespace std;

class Invoice {
  public:
    Invoice(string, string, int, int);
    string getPartNumber();
    void setPartNumber(string);
    string getDescription();
    void setDescription(string);
    int getQuantity();
    void setQuantity(int);
    int getUnitPrice();
    void setUnitPrice(int);
    int getInvoiceAmmount();

  private:
    string partNumber;
    string description;
    int quantity;
    int unitPrice;
};

#include <string>
#include <iostream>
#include "Invoice.h"

using namespace std;

Invoice::Invoice(string partNumber, string description, int quantity, int pricePerUnit) {
  Invoice::partNumber = partNumber;
  Invoice::description = description;
  Invoice::quantity = quantity;
  Invoice::unitPrice = pricePerUnit;
}

string Invoice::getPartNumber() {
  return Invoice::partNumber;
}

void Invoice::setPartNumber(string partNumber) {
  Invoice::partNumber = partNumber;
}

string Invoice::getDescription() {
  return Invoice::description;
}

void Invoice::setDescription(string description) {
  Invoice::description = description;
}

int Invoice::getQuantity() {
  return Invoice::quantity;
}

void Invoice::setQuantity(int quantity) {
  Invoice::quantity = quantity;
}

int Invoice::getUnitPrice() {
  return Invoice::unitPrice;
}

void Invoice::setUnitPrice(int unitPrice) {
  Invoice::unitPrice = unitPrice;
}

int Invoice::getInvoiceAmmount() {
  int total = Invoice::unitPrice * Invoice::quantity;
  cout << Invoice::partNumber << " - " << Invoice::description << " - " << Invoice::unitPrice << " $ - " << Invoice::quantity << " - " << total << " $" << endl;
  return total;
}

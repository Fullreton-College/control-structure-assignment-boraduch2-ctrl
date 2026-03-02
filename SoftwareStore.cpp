#include <iostream>

using namespace std;

int main()
{
  const double price = 199.0;
  int quantity;
  double discount = 0.0;
  double totalcost;

  cout << "Enter number of units purchased: ";
  cin >> quantity;

  if (quantity >= 100)
      discount = 0.50;
  else if (quantity >= 50)
      discount =0.40;
  else if (quantity >= 20)
      discount = 0.30;
  else if (quantity >= 10)
      discount = 0.20;
  else 
      discount = 0.0;
  
  totalcost = quantity * price * (1 - discount);

  cout << "Total cost: $" << totalcost << endl;

  return 0;
}
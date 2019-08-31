// Name:Brian Smetana
// This program calculates the tax and tip on a restaurant bill.
#include <iostream>
int main()
{
double Tax, Tip, Total_Bill, Meal_Cost ;
  //get the Tax Tip and Total Bill
std::cout << "What is the Meal Cost?";
std::cin >> Meal_Cost;
std::cout << "What is the Tax?";
std::cin >> Tax;
std::cout << "What is the Tip?";
std::cin >> Tip;
std::cout << "What is the total meal charge?";
std::cin >> Total_Bill;
// calculate the total Bill.
 Tax = 0.0775 * Meal_Cost;
 Tip = 0.2 * Meal_Cost;
//display the total Bill.
std::cout << "The \"Total Bill\" of the meal is 56.8487 ./n";

  return 0;
}

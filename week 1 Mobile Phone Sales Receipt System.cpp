/* Program to compute Mobile Phone Sales Receipt System
   Frashiah Wamuhu
   BCS-05-0007/2025
*/

#include <iostream>
using namespace std;

int main() {
    // Variable declaration
    string Customername;
    string Phone_model_purchased;
    int Quantity_bought;
    double Price_per_phone;
    double Total_Sales_Amount;

    // Prompt user to enter details
    cout << "Enter Customer Name: ";
    cin >> Customername;

    cout << "Enter Phone Model Purchased: ";
    cin >> Phone_model_purchased;

    cout << "Enter Quantity Bought: ";
    cin >> Quantity_bought;

    cout << "Enter Price Per Phone: ";
    cin >> Price_per_phone;

    // Calculation
    Total_Sales_Amount = Quantity_bought * Price_per_phone;

    // Display receipt
    cout << "MOBILE PHONE SALES RECEIPT\n";
    cout << "Customer Name: " << Customername << endl;
    cout << "Phone Model Purchased: " << Phone_model_purchased << endl;
    cout << "Quantity Bought: " << Quantity_bought << endl;
    cout << "Price Per Phone: " << Price_per_phone << endl;
    cout << "Total Sales Amount: " << Total_Sales_Amount << endl;

    return 0;
}

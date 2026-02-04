/**
 Write a program to enter the code and price of the prodcut the user must feed the quantity in which he wants a product
 name of class Store
 private memenbers int product code , float price
 public functions void  getdata is used to enter the prodcut code and price
                 void displaydata is used to display product code and price
                 void calculatebill is used to calculate the total amount
 **/
#include <iostream>
using namespace std;
class Store
{
private:
    int product_code[50];
    int quantity[50];
    float price[50];
    int n;

public:
    void getdata()
    {
        cout << "Enter the number of products \n";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the product code for " << i + 1 << " item ";
            cin >> product_code[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the price for " << i + 1 << " item ";
            cin >> price[i];
        }
        for (int i = 0; i < n; i++){
        cout << "Enter quantity for item " << i + 1 << ": ";
            cin >> quantity[i];
        }
    }
    void displaydata()
    {
        cout << "\nProduct Details:\n";
        for (int i = 0; i < n; i++)
        {
            cout << "\nItem " << i + 1 << endl;
            cout << "Product Code: " << product_code[i] << endl;
            cout << "Price: " << price[i] << endl;
            cout << "Quantity: " << quantity[i] << endl;
        }
    }
    void calculatebill()
    {
        float total = 0;
        for (int i = 0; i < n; i++)
        {
            total += price[i] * quantity[i];
        }
         cout << "\nThe total bill amount is: " << total << endl;
    }
};
    int main()
    {
        Store s;
        s.getdata();
        s.displaydata();
        s.calculatebill();
}
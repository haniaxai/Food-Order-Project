#include <iostream>
using namespace std;

class Order
{
public:
    int total = 0;

    void menu()
    {
    int choice;

    do
    {
    cout << "- - - FOOD MENU - - -" << endl;
    cout << "1. Burger - Rs.500" << endl;
    cout << "2. Pizza - Rs.1200" << endl;
    cout << "3. Fries - Rs.300" << endl;
    cout << "4. Exit" << endl;

    cout << "Enter Choice: ";
    cin >> choice;

    if(choice == 1)
    {
    total = total + 500;
    cout << "Burger Added." << endl;
    }

   else if(choice == 2)
    {
    total = total + 1200;
    cout << "Pizza Added." << endl;
    }

    else if(choice == 3)
  {
  	
   total = total + 300;
    cout << "Fries Added." << endl;
    }

    else if(choice == 4)
   {
   	
    cout << "Order Finished!" << endl;
    
    }

    else
    {
    cout << "Invalid Choice." << endl;
    }

    cout << "Current Bill is = RS " << total << endl;

    } while(choice != 4);
    }

    void bill()
    {
    cout << " - - - FINAL BILL - - -" << endl;
    cout << "Total Amount = RS " << total << endl;
    cout << "Thank You for Ordering." << endl;
    }
};

int main()
{
    Order customer;

    customer.menu();
    customer.bill();

    return 0;
}

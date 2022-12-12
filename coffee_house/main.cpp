#include <bits/stdc++.h>
using namespace std;

class MyOrders
{
public:
  map<string, int> order_list;
  float total_price = 0;
  float discount = 0;
  float final_price = 0;

  void show_orders()
  {
    cout << "MyOrders : \n";
    for (auto x : order_list)
    {
      cout << x.first << "\t:\t" << x.second << endl;
    }
    cout << "Total Price\t:\t" << total_price << endl;
    cout << "Discount\t:\t" << discount << endl;
    cout << "----------------------------\n";
    cout << "Final Price\t:\t" << final_price << endl;
  }
};

class TeaBase
{
public:
  int tea_leaves;
  int sugar;
  int milk;
  int cardemon;
  int ginger;
  float price;
};

class RegularTea : public TeaBase
{
public:
  void make_regular_tea()
  {
    cout << "Adding Regular Tea to orders\n";
    tea_leaves = 2;
    sugar = 2;
    milk = 2;
    cardemon = 2;
    ginger = 2;
    price = 39.99;
  }

  void get_regular_tea()
  {
    cout << "Tea Leaves : 2 (Medium)" << endl;
    cout << "Sugar : 2 Tablespoons" << endl;
    cout << "Milk : Medium Qty" << endl;
    cout << "Cardemon : 2 Qty" << endl;
    cout << "Ginger : 2 Medium Qty" << endl;
    cout << "Price : Rs. 39.99" << endl;
  }
};

void runner(MyOrders &);
void show_menu(MyOrders &);
bool confirm_order();

bool confirm_order()
{
  cout << "-------------------\n";
  cout << "1. Confirm Order\n";
  cout << "2. return\n";
  int confirm;
  cin >> confirm;

  cout << endl;

  switch (confirm)
  {
  case 1:
    return true;
  case 2:
    return false;
  case 3:
    cout << "Oooooo, You choose something wrong, You can try again\n";
    confirm_order();
  }
  return false;
}

void regular_tea(MyOrders &myorders)
{
  RegularTea regular_tea_obj;
  cout << endl;
  regular_tea_obj.get_regular_tea();
  if (confirm_order())
  {
    cout << "-------------------------------\n";
    cout << "Order Confirmed!!" << endl;
    cout << "-------------------------------\n";
    regular_tea_obj.make_regular_tea();
    myorders.order_list["Regular Tea"]++;
    myorders.total_price += regular_tea_obj.price;
    myorders.final_price = myorders.total_price - myorders.discount;
    cout << "-------------------------------\n";
    myorders.show_orders();
  }
}

void runner(MyOrders &myorders)
{
  cout << "\nHello, This is CH Coffee House\n";
  cout << "How May I help You!!\n";
  cout << "--------------------------------------------\n";
  cout << "Choose Any option from below (numeric) 1-3\n";
  cout << "--------------------------------------------\n";
  cout << "1. Menu\n";
  cout << "2. My Orders\n";
  cout << "3. Exit\n";

  int choice;
  cin >> choice;

  cout << endl;

  switch (choice)
  {
  case 1:
    show_menu(myorders);
    break;
  case 2:
    myorders.show_orders();
    runner(myorders);
  case 3:
    cout << "Bye, Have a Nice Day\n";
    break;
  default:
    cout << "Oooooo, You choose something wrong, You can try again\n";
    runner(myorders);
  }
}

void show_menu(MyOrders &myorders)
{
  cout << "Here is Your Menu\n";
  cout << "-------------------------------\n";
  cout << "Select Your Order (numeric) 1-2\n";
  cout << "-------------------------------\n";
  cout << "1. Regular Tea\n";
  cout << "2. Exit\n";

  int choice;
  cin >> choice;

  cout << endl;

  switch (choice)
  {
  case 1:
    regular_tea(myorders);
    runner(myorders);
  case 2:
    cout << "Bye, Have a Nice Day\n";
    break;
  default:
    cout << "Oooooo, You choose something wrong, You can try again\n";
    show_menu(myorders);
    break;
  }
}

int main()
{
  MyOrders myorders;
  runner(myorders);
  return 0;
}
// a store maintains a list of prices for items in its inventory. write a program that allows the user to search for a specific price using a linera search. if the price is found, diapay its index in the list, otherwise, diaplay that the price was not found.

#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 20, 20, 30, 40, 50};
    int index = -1;
    cout << "enter the element you want to search" << endl;
    int item;
    cin >> item;

    for (int j = 0; j < 6; j++)
    {
        if (arr[j] == item)
        {
            cout << j << " " << arr[j] << endl;
            index = j;
            break;
        }
    }
    if (index == -1)
    {
        cout << "item not found" << endl;
    }

    return 0;
}

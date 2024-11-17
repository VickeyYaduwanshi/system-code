1st

#include <iostream>
using namespace std;
int main()
{

    int arr[4], i, pos, num, b, del;

    cout << "enter the element in array" << endl;
    cin >> b;

    cout << "enter element" << endl;
    for (i = 1; i <= b; i++)
    {
        cin >> arr[i];
    }
    cout << "enter new position" << endl;
    cin >> pos;
    cout << "enter new number" << endl;
    cin >> num;
    for (i = b; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = num;
    cout << "new array is " << endl;
    for (i = 1; i <= b + 1; i++)
    {
        cout << "\n"
             << arr[i];
    }
    cout << "\n enter the position to be deleted " << endl;
    cin >> del;
    for (i = del; i <= b + 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (i = 1; i <= b; i++)
    {
        cout << "\n"
             << arr[i];
    }
    return 0;
}
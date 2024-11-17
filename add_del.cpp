#include <iostream>
using namespace std;
int main()
{

    int arr[4], n, pos, num, d, del;
     cout << "NAME : VICKEY YADUWANSHI" << endl;
    cout << "ENROLLMENT NO. : 0832CS231219" << endl;

    cout << "\n 4enter How big should Arya be?" << endl;
    cin >> n;

    cout << "enter arry element " << endl;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    cout << "enter new position" << endl;
    cin >> pos;
    cout << "enter new number" << endl;
    cin >> num;
    for (int i = n; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = num;
    cout << "new array is " << endl;
    for (int i = 1; i <= n + 1; i++)
    {
        cout << "\n"
             << arr[i];
    }
    cout << "\n enter the position to be deleted " << endl;
    cin >> del;
    for (int i = del; i <= n + 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "\n"
             << arr[i];
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    cout << "NAME : VICKEY YADUWANSHI" << endl;
    cout << "ENROLLMENT NO. : 0832CS231219" << endl;

    int a[3][3], b[3][3], c[3][3] , d[3][3];
    int i, j;

    cout << "\nEnter the elements in the first matrix:" << endl;
    for (i = 0; i < 3; i++) {     
        for (j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    cout << "\nEnter the elements in the second matrix:" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cin >> b[i][j];
        }
    }

    cout << "\nSum of the matrices is:" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << "\t";
        }
        cout << "\n";
    }

cout << "\ndiffderence of the matrices is:" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            d[i][j] = a[i][j] - b[i][j];
            cout << d[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}
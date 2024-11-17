#include <iostream>
using namespace std;

int main() {
    int n,m;
       cout << "NAME : VICKEY YADUWANSHI" << endl;
    cout << "ENROLLMENT NO. : 0832CS231219" << endl;
   

    cout << "\n Enter dimensions "<<endl;
    cin >> n >> m;

    int arr[n][m];
    cout << "\n Enter elements for the first matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Element at index [" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }
    cout << "\n Your first matrix is:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int arr2[n][m];
    cout << "\nEnter elements for the second matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Element at index [" << i << "][" << j << "] = ";
            cin >> arr2[i][j];
        }
    }
    cout << "\nYour second matrix is:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    int result[n][m] = {0};
    cout << "\n Product of the matrices with steps is:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            result[i][j] = 0;
            cout << "result[" << i << "][" << j << "] = ";
            for (int k = 0; k < m; k++) {
                cout << arr[i][k] << " * " << arr2[k][j];
                result[i][j] += arr[i][k] * arr2[k][j];
                if (k < m - 1) {
                    cout << " + ";
                }
            }
            cout << " = " << result[i][j] << endl;
        }
    }
    cout << "\nFinal Product Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << result[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}

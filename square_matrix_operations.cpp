#include <iostream>
using namespace std;

int main() {
    int A[10][10];
    int n;

    // Read matrix size n and its elements
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    // 1. Print primary and secondary diagonal elements
    cout << "primary diagonal : ";
    for (int i = 0; i < n; i++) {
        cout << A[i][i] << " ";
    }
    cout << endl;

    cout << "secondary diagonal : ";
    for (int i = 0; i < n; i++) {
        cout << A[i][n - i - 1] << " ";
    }
    cout << endl;

    // 2. Calculate sum above primary diagonal and product below primary diagonal
    int sum = 0;
    int prod = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > i) {
                sum += A[i][j];
            } else if (j < i) {
                prod *= A[i][j];
            }
        }
    }
    cout << "sum above diagonal = " << sum << endl;
    cout << "prod under diagonal = " << prod << endl;

    // 3. Check if matrix is symmetric / diagonal dominant
    bool t = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && A[i][j] != A[j][i]) {
                t = false;
                break;
            }
        }
    }

    if (t)
        cout << "Symmetric" << endl;
    else
        cout << "Not symmetric" << endl;

    // 4. Calculate sum of elements on the boundary/sides
    int S = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                S += A[i][j];
            }
        }
    }
    cout << "sum of elements on sides = " << S << endl;

    return 0;
}

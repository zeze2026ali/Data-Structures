#include <iostream>
using namespace std;

// Function to count occurrences of x in a 1D array
int count1(int A[], int n, int x) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] == x) {
            c++;
        }
    }
    return c;
}

// Function to count occurrences of x in a 2D array using count1
int count2(int A[][10], int m, int n, int x) {
    int c = 0;
    for (int i = 0; i < m; i++) {
        c += count1(A[i], n, x);
    }
    return c;
}

int main() {
    int A[5];
    int B[5][10];

    // Input elements for 1D array A
    for (int i = 0; i < 5; i++) {
        cin >> A[i];
    }

    // Input elements for 2D array B (5x3)
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> B[i][j];
        }
    }

    // Print repetitions of element 4 in A and B
    cout << "repetition in A = " << count1(A, 5, 4) << endl;
    cout << "repetition in B = " << count2(B, 5, 3, 4) << endl;

    return 0;
}

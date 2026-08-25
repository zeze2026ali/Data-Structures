#include <iostream>
using namespace std;

int main() {
    int A[10];

    for (int i = 0; i < 10; i++)
        cin >> A[i];

    int max = A[0];
    int order = 0;

    for (int i = 1; i < 10; i++) {
        if (A[i] > max) {
            max = A[i];
            order = i;
        }
    }

    cout << "max = " << max << endl;
    cout << "order = " << order << endl;

    return 0;
}

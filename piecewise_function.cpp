#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;
    cin >> x;

    if (x > 0)
        cout << pow(x, 2) << endl;
    else if (x < 0)
        cout << pow(x, 2) - 5 << endl;
    else
        cout << 5 << endl;

    return 0;
}


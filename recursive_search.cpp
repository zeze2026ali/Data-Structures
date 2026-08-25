#include <iostream>
using namespace std;

// Recursive function to search for a number in an array
int search_in_array(int arr[], int n, int num, int index)
{
    // Base case: element not found
    if (index == n)
        return -1;

    // Base case: element found at current index
    if (arr[index] == num)
        return index;

    // Recursive call: search in the rest of the array
    return search_in_array(arr, n, num, index + 1);
}

int main() {
    int A[100], n, num;

    // Input array size
    cout << "insert array size : ";
    cin >> n;

    // Input array elements
    cout << "insert the array : ";
    for (int i = 0; i < n; i++)
        cin >> A[i];

    // Input number to search for
    cout << "insert the number : ";
    cin >> num;

    // Call recursive function starting from index 0
    int result = search_in_array(A, n, num, 0);

    // Print search results
    if (result == -1)
        cout << "Number not found" << endl;
    else
        cout << "Number found at index " << result << endl;

    return 0;
}

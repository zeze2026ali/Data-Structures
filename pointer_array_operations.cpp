#include <iostream>
using namespace std;

// 1. Find value using pointers
int* findValue(int* arr, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == target) {
            return (arr + i);
        }
    }
    return nullptr;
}

// 2. Swap minimum and maximum values using pointers
void swapMinMax(int* arr, int size) {
    if (size <= 1) return;

    int* minPtr = arr;
    int* maxPtr = arr;

    for (int i = 1; i < size; ++i) {
        if (*(arr + i) < *minPtr) minPtr = arr + i;
        if (*(arr + i) > *maxPtr) maxPtr = arr + i;
    }

    int temp = *minPtr;
    *minPtr = *maxPtr;
    *maxPtr = temp;
}

// 3. Check if array is palindrome using pointers
bool isPalindrome(int* arr, int size) {
    int* left = arr;
    int* right = arr + size - 1;

    while (left < right) {
        if (*left != *right) return false;
        left++;
        right--;
    }
    return true;
}

// Helper function to print array elements using pointers
void printArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> *(arr + i);
    }

    printArray(arr, SIZE);

    cout << "Enter a value to search for: ";
    int target;
    cin >> target;

    int* result = findValue(arr, SIZE, target);
    if (result != nullptr) {
        cout << "found at position " << (result - arr) << endl;
    } else {
        cout << "not found in the array !!!" << endl;
    }

    swapMinMax(arr, SIZE);
    cout << "Array after swapping smallest with largest: ";
    printArray(arr, SIZE);

    if (isPalindrome(arr, SIZE)) {
        cout << "it's palindrome" << endl;
    } else {
        cout << "not a palindrom" << endl;
    }

    return 0;
}

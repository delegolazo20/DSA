#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int l = 0;
    int h = n - 1;
    int mid;

    while (l <= h) {
        mid = (l + h) / 2;

        if (arr[mid] == key) {
            cout << "Element found at position " << mid+1<<" of your array";
            return 0;
        }
        else if (key < arr[mid]) {
            h = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    cout << "Element not found.";

    return 0;
}
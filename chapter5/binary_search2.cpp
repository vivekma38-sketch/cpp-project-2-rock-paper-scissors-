#include<iostream>
#include<vector>
using namespace std;
int binarySearch(const vector<int>& arr, int target) {//iterative binary search function
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Target found
        }
        else if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        }
        else {
            right = mid - 1; // Search in the left half
        }
    }
    return -1; // Target not found
}
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cout << "Enter key to be searched: ";
    cin >> key;

    int result = binarySearch(arr, key);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if(arr[mid] == target) {
            return mid;
        }
        if(arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {5, 8, 34, 76, 89};
    int target = 76;
    int result = binarySearch(arr, target);

    if (result == -1) cout << "Element not found";
    else cout << result;
    return 0;
}
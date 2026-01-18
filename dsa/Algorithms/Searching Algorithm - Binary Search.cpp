#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int x) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return mid;
        
        if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main() {
    vector<int> arr = {21, 43, 45, 76, 78};
    int x = 78;

    int result = binarySearch(arr, x);
    cout << result;

    return 0;
}
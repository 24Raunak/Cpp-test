#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr) {
    int n = arr.size();

    for(int i = 0; i < n - 1; i++) {
        int min_idx = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

void printArray(vector<int> &arr) {
    for (int &val: arr) {
        cout << val << " ";
    }
}

int main() {
    vector<int> arr = {64, 25, 34, 76};
    selectionSort(arr);
    printArray(arr);
    return 0;
}
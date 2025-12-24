#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int target) {
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {2, 4, 6, 7, 10, 34, 56};
    int target = 34;
    int result = search(arr, target);

    if(result == -1) {
        cout << "Element not found";
    } else {
        cout << result;
    }

    return 0;
}
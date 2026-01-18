#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& arr, int x) {
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == x)
            return i;
    }

    return -1;
}

int main() {
    vector<int> arr = {23, 35, 48, 564, 46, 3, 22};
    int x = 48;

    int result = search(arr, x);
    cout << result;

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr) {
    int n = arr.size();
    
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
            
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
            
        swap(arr[i], arr[min_idx]);
    }
}

int main() {
    vector<int> arr = {32, 32, 32, 31, 321};
    
    selectionSort(arr);
    for (int i : arr)
        cout << i << " ";
    
    return 0;
}
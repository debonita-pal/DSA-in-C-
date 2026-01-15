// Problem: Find maximum and minimum element in array
// Input: User-defined array
// Approach: Linear traversal
// Time Complexity: O(n)
// Space Complexity: O(1)
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[100];
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_element = INT_MIN;
    int min_element = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(arr[i] > max_element) {
            max_element = arr[i];
        }
        if(arr[i] < min_element) {
            min_element = arr[i];
        }
    }

    cout << "The maximum element is: " << max_element << endl;
    cout << "The minimum element is: " << min_element << endl;

    return 0;
}

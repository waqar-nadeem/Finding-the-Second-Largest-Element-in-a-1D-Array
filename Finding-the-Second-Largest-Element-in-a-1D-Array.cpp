#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if(n < 2) {
        cout << "At least two elements are required." << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int secondLargest = -1e9;

    for(int i = 1; i < n; ++i) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == -1e9)
        cout << "There is no distinct second largest element." << endl;
    else
        cout << "The second largest element is: " << secondLargest << endl;

    return 0;
}

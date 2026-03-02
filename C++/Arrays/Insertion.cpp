#include <iostream>
using namespace std;
#include <vector> // Compiler recognises vector, which is a dynamic array, i.e., it can shrink or expand


// vector_name.push_back(value) - adds the element at the end of the vector and increases its size by 1

vector<int> beginning(vector<int> &arr, int x);
vector<int> position(vector<int> &arr, int x, int pos);
vector<int> end(vector<int> &arr, int x);
vector<int> display(vector<int> &arr);

int main() {
    vector<int> arr = {10,20,30,40,50};  // Initializing an array

    cout << "Before Insertion: ";
    display(arr);

    int x;
    cout << "\nEnter the element to insert: ";
    cin >> x;

    beginning(arr, x);
    display(arr);

    end(arr, x);
    display(arr);

    int pos;
    cout << "\nEnter the position: ";
    cin >> pos;

    position(arr, x, pos);
    display(arr);

    return 0;
}

vector<int> beginning(vector<int> &arr, int x) {
    cout << "\nAfter inserting at the beginning: ";

    arr.push_back(0);

    for (int i = arr.size() - 1; i > 0; i--) {      // Each element moves right to make space at index 0.
        arr[i] = arr[i-1];
    }

    arr[0] = x;    // Insert new element at index 0
    return arr;
}

vector<int> end(vector<int> &arr, int x) {
    cout << "\nAfter inserting at the end: ";

    arr.push_back(x);     // No shifting needed because end already has free expandable space

    return arr;
}

vector<int> position(vector<int> &arr, int x, int pos) {
    cout << "\nAfter inserting by position: ";

    arr.push_back(0);

    for (int i = arr.size() - 1; i > pos; i--) {    // Shift elements right from the position
        arr[i] = arr[i-1];
    }

    arr[pos] = x;
    return arr;
}

vector<int> display(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return arr;
}

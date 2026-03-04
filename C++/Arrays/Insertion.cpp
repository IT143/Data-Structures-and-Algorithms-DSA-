#include <iostream>
using namespace std;
#include <vector>

vector<int> beginning (vector<int> &arr, int x);
vector<int> position (vector<int> &arr, int x, int pos);
vector<int> end (vector<int> &arr, int x);
vector<int> display (vector<int> &arr);

int main() {
    int x, ch;
    vector<int> arr = {10,20,30,40,50,60};
    cout << "\n1.At the beginning\n2.At a specific position\n3.At the end" << endl;
    cout << "Enter the choice: ";
    cin >> ch;

    switch (ch) {
        case 1: 
        cout << "Enter the number to insert: ";
        cin >> x;
        beginning (arr, x);
        display(arr);
        break;

        case 2:
        int pos;
        cout << "Enter the number to insert: ";
        cin >> x;
        cout << "Enter the position: ";
        cin >> pos;
        position(arr, x, pos);
        display(arr);
        break;

        case 3: 
        cout << "Enter the number to insert: ";
        cin >> x;
        end (arr, x);
        display(arr);
        break;
    }
}

vector<int> beginning (vector<int> &arr, int x) {
    arr.push_back(0);                                   // Adds zero to the end of the vector
    for (int i = arr.size() - 1; i >= 0; i--) {
        arr[i] = arr[i-1];                        // All the elements shift to the right, creating space at index 0
    }
    arr[0] = x;         // Inserts element x at index 0
    return arr;
}

vector<int> position (vector<int> &arr, int x, int pos) {
    arr.push_back(0);
    for (int i = arr.size() - 1; i >= pos; i--) {        // Shifts to the right from the position we want to insert in
        arr[i] = arr[i-1];    
    }
    arr[pos-1] = x;                // Inserts element at x at the position, not the index, therefore we reduce by 1
    return arr
}

vector<int> end (vector<int> &arr, int x) {
    arr.push_back(x);
    return arr;
}


vector<int> display (vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
}

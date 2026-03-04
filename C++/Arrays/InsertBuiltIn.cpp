#include <iostream>
using namespace std;
#include <vector>

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
        arr.insert(arr.begin(),x);
        display(arr);
        break;

        case 2:
        int pos;
        cout << "Enter the number to insert: ";
        cin >> x;
        cout << "Enter the position: ";
        cin >> pos;
        arr.insert(arr.begin() + pos - 1, x); 
        display(arr);
        break;

        case 3: 
        cout << "Enter the number to insert: ";
        cin >> x;
        arr.insert(arr.end(), x);
        display(arr);
        break;
    }
}

vector<int> display (vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
}

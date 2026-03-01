#include <iostream>
using namespace std;
#include <vector>

vector<int> beginning(vector<int> &arr, int x);
vector<int> position(vector<int> &arr, int x, int pos);
vector<int> end(vector<int> &arr, int x);

int main() {
  vector<int> arr = {10,20,30,40,50};
  cout << "Before Insertion: ";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }

  int x;
  cout << "\nEnter the element to insert: ";
  cin >> x;
  beginning(arr, x);
  cout << "After insertion at beginning: ";
  for (int i = 0; i < arr.size()+1; i++) {
    cout << arr[i] << " ";
  }

  int pos;
  cout << "\nEnter the positon before which you want to insert: ";
  cin >> pos;
  position(arr,x,pos);
  cout << "\nAfter insertion at given postion: ";
  for (int i = 0; i < arr.size()+1; i++) {
    cout << arr[i] << " ";
  }
  
  end(arr, x);
  cout << "\nAfter insertion at end: ";
  for (int i = 0; i < arr.size()+1; i++) {
    cout << arr[i] << " ";
  }
}

vector<int> beginning(vector<int> &arr, int x) {
  for (int i = arr.size() - 1; i >= 0; i--) {
    arr[i+1] = arr[i];
  }
  arr[0] = x;
  return arr;
}

vector<int> position(vector<int> &arr, int x, int pos) {
  for (int i = arr.size()-1; i >= pos; i--) {
    arr[i] = arr[i-1];
  }
  arr[pos-1] = x;
  return arr;
}

vector<int> end(vector<int> &arr, int x) {
  for (int i = arr.size() - 1; i >= 0; i--) {
    arr[i+1] = arr[i];
  }
  arr[arr.size()] = x;
  return arr;
}

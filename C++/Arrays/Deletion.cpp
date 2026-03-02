#include <iostream>
using namespace std;
#include <vector>

vector<int> beginning(vector<int> &arr);
vector<int> end(vector<int> &arr);
vector<int> position(vector<int> &arr, int pos);

int main() {
  vector<int> arr = {1,2,3,4,5,6};

  cout << "\nBefore deletion: ";
  for(int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }

  int ch;
  cout << "\n1.Beginning\n2,End\n3.Position";
  cout << "\nEnter the choice: ";
  cin >> ch;

  
  switch(ch) {
    case 1:
      beginning(arr);
    break;
    case 2: 
      end(arr);
      break;
    case 3:
      int pos;
      cout << "\nEnter the position: ";
      cin >> pos;
      position(arr,pos);
      break;
  }
  
}

vector<int> beginning(vector<int> &arr) {
  int N = arr.size();
  for(int i = 1; i < N; i++) {
    arr[i-1] = arr[i];
  }
  N--;
  cout << "\nAfter deletion from the beginning: ";
  for(int i = 0; i < N; i++) {
    cout << arr[i] << " ";
  }
}

vector<int> end(vector<int> &arr) {
  cout << "\nAfter deletion from end: ";
  int N = arr.size();
  N--;
  for(int i = 0; i < N; i++) {
    cout << arr[i] << " ";
  }
}

vector<int> position(vector<int> &arr, int pos) {
  int N = arr.size();
  for(int i = pos; i < N; i++) {
    arr[i-1] = arr[i];
  }
  if (pos <= N) {
    N--;
  }
  cout << "\nAfter deletion from the position: ";
  for(int i = 0; i < N; i++) {
    cout << arr[i] << " ";
  }
}


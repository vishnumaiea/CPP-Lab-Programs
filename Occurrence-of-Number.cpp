
//Finds the number of occurances of a number in an array

#include<iostream>
using namespace std;

int main() {
  int n, number=0, count=0, arr[50];

  cout << "Enter total number of elements :";
  cin >> n;
  cout << "Enter " << n << " numbers :";

  for(int i=0; i<n; i++)
    cin >> arr[i];

  cout << "Enter number to search : ";
  cin >> number;

  for(int i=0; i < n; i++)
    if(arr[i] == number) count++;

  cout << number << " appears " << count << " times.";
  return 0;
}


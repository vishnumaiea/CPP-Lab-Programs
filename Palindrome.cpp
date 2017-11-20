
#include <iostream>
#include <string.h>

using namespace std;

int main() {
  char inputString[20];
  int i, length;
  int flag = 0;

  cout << "Enter a string: ";
  cin >> inputString;

  length = strlen(inputString);

  for(i=0; i < length ; i++) {
    if(inputString[i] != inputString[length-i-1]) {
      flag = 1;
      break;
    }
  }

  if (flag) {
    cout << inputString << " is not a palindrome" << endl;
  }
  else {
    cout << inputString << " is a palindrome" << endl;
  }
  system("pause");
  return 0;
}

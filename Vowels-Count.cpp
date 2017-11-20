
//vowels count in a string

#include <iostream>
using namespace std;

int main() {
  char line[150];
  char vowelArray[] = "aeiouAEIOU";
  int vowelCount;
  bool ifVowel = false;

  vowelCount =  consonantCount = digitCount = spaceCount = 0;

  cout << "Enter a line of string: ";
  cin.getline(line, 150);

  for(int i=0; line[i]!='\0'; i++) {

    for(int k=0; k<10; k++) {
      if(line[i] == vowelArray[k]) {
        ifVowel = true;
        break;
      }
      else ifVowel = false;
    }

    if(ifVowel) vowelCount++;
  }

  cout<< "Vowels: " << vowelCount << endl;
  return 0;
}

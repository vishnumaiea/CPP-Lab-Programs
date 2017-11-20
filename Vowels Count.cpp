
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
    
//		else if((line[i]>='a' && line[i]<='z') || (line[i]>='A' && line[i]<='Z')) {
//      consonantCount++;
//    }
//    else if(line[i]>='0' && line[i]<='9') {
//      digitCount++;
//    }
//    else if (line[i]==' ') {
//      spaceCount++;
//    }
  }

  cout<< "Vowels: " << vowelCount << endl;
//  cout<< "Consonants: " << consonantCount << endl;
//  cout<< "Digits: " << digitCount << endl;
//  cout<< "White spaces: " << spaceCount << endl;

  return 0;
}

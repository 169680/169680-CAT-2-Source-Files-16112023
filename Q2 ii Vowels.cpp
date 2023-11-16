#include<iostream>
using namespace std;

int main(){

   //Initialize a character vowel variable
   char value;

   //key in the value vowel

   cin >> value;
    // list of vowels

    char vowels[] ={'a','b','c','d','e'};
    
   for (int i = 0; i < 5; i++) {
      if (vowels[i] == tolower(value) && isalpha(value)) {

         cout << value <<"is a vowel";//to output the vowel

      }
   }
    return 0;
}

    

    
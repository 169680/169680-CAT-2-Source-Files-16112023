#include<iostream>
using namespace std;

int main(){
    //Declare year variable
   int year;
    //Request the year from the user
    cout << "Enter a year to check if it is a leap year: \n";
    cin >> year;

   // find out if its a leap year. 

   bool leapYear = year % 4 == 0;

   
   if ( leapYear)
   {
    cout<<year<< "is a leap year\n";
    
   }
   else
   {
    cout << "it is not a leap year\n";
   }
   
   
    return 0;
}

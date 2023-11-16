#include <iostream>
#include <string>
using namespace std;

void showMenu() {
    cout << "\n\nChoose an option" << endl;
   cout << "1. Go to About us" << endl;
   cout << "2. Go to Services page" << endl;
   cout << "3. Go to Full Profile page" << endl;
   cout << "4. Logout" << endl;
}

int main() {

  string username = "username";
  string password = "password";
  string usernameInput, passwordInput;
   cout << "Enter the username " << endl;
   cin >> usernameInput;
   cout << "Enter the password " << endl;
   cin >> passwordInput;
   bool loggedIn = false;

   if (username == usernameInput && password == passwordInput) {
      loggedIn = true;
      while (loggedIn) {
         showMenu();
         int userSelection;
         cin >> userSelection;

         switch (userSelection)
         {
         case 1:
            /* code */
            cout << "My name is Catherine Nagonda. I like C++ because it sharpens my thinking. \n"; 
            break;
         case 2:
            /* code */
            cout << "I can offer web app development services for at a reasonable cost.\n"; 
            break;
         case 3:
            /* code */
            cout << "My name is Catherine Nagonda. \n"; 
            cout << "DOB: 16/05/1994. \n";
            cout << "Country: Kenya. \n";
            cout << "Citizenship: Kenyan. \n";
            cout << "City: Nairobi. \n";
            cout << "University: Strathmore. \n";
            cout << "Course: Bachelors of Business Information Technology. \n";
            cout << "Unit: Programmig. \n";
            cout << "Hobby: Hiking. \n";
            break;
         case 4:
            /* code */
            loggedIn = false;
            cout << "Logout Successfull \n"; 
            break;
         default:
            break;
         }
      }
   } else {
      cout << "Wrong username or password" << endl;
   }
   return 0;
}

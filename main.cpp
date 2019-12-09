//Income Calculator,  Kellie Henderson
// Dr_T, 10-29-19, COSC 
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
#include<algorithm> // for sort and reverse
#include<vector>
#include<iomanip>
#include<numeric>
using namespace std;
#include <iostream>
#include <vector>
#include <iomanip>
#include <numeric>
#include <string> 

using namespace std;

void print(vector<string> &printVector )
{
  

   for (int i=0; i<printVector.size(); i++) //print the vector
   cout << printVector[i] << " " <<endl ; 

}

int main()
{
  vector<string>registration;
  string name, email,lastName;
  char option;


  

  cout << "what class would you like to register for?" << endl;
  cout << "A: Programming I" << endl;
  cout << "B: Programming II" << endl;
  option= validateChar(option);

  if (option == 'a' || option == 'A')
  {
    cout << "Please enter your first name: " ;
     name= validateString(name);
    registration.push_back(name);
    cout << "What is your last name?"<< endl;
    lastName= validateString(lastName);
    registration.push_back(lastName);

    cout << "What is your email?" << endl;
    email= validateString(email);
    registration.push_back(email);
    cout <<""<< endl;
    
    print(registration);
    cout << "is registerd for programming I";
  }
   else if (option == 'b' || option == 'B')
  {
     cout << "Please enter your first name: " ;
     name= validateString(name);
    registration.push_back(name);
    cout << "What is your last name?"<< endl;
    lastName= validateString(lastName);
    registration.push_back(lastName);

    cout << "What is your email?" << endl;
    email= validateString(email);
    registration.push_back(email);
    cout <<""<< endl;
    
    print(registration);
    cout << "is registerd for programming II";
  }
 


  return 0;

}

//Name: NURSYAHIRA IMANA BINTI ROSLAN           Matric No: A25CS0332
//Name: NUR HANISAH HUSNA BINTI NOOR AZLIZAN    Matric No: A25CS0314 
//Assignment 2

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 50;
    string str;
    
do                                                        
{
  cout << "Enter string 50 characters or less (Type END if want to stop): " ;
  cin >> str;

  if (str == "END")
    break;
    
  int n = str.length(); 
  bool isPal= true;
  
  for (int i=0; i < n/2; i++ )                            //Pre-test to compare the reverse string is the same as the string entered.
    { 
      if ( str[i] != str[n-i-1] )
      {
       isPal = false;
       break;
      }
    }     
  
   if (isPal)                                                                  
     cout << "This string is a palindrome." << endl ;
   else
       cout << "This string is not a palindrome." << endl ;
} while (str.length() <= 50);

    
    return 0;
}

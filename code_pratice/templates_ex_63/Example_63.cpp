#include <iostream>
#include <string>
using namespace std;

template<class T>
int templatedSwap(T& a, T& b)
{
  T temp = a;
  a = b;
  b = temp;
  return 0;
}

int main()
{
  int a = 5;
  int b = 10;
  //Swap(a,b);
  string firstName("Vitthal");
  string lastName("Srinivasan");

  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Testing the int swap ~~~~~~~~~~~~~~~~~~~~~~~" << endl;

  cout << "Before the swap, inside main " 
       << "a = " << a
       <<" b = " << b
       << endl;

  templatedSwap(a,b);
  

  cout << "After the swap, inside main " 
       << "a = " << a
       <<" b = " << b
       << endl;

  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Testing the string swap ~~~~~~~~~~~~~~~~~~~~~~~" << endl;


  cout << "Before the swap, inside main " 
       << "a = " << firstName
       <<" b = " << lastName
       << endl;

  templatedSwap(firstName,lastName);
  

  cout << "After the swap, inside main " 
       << "a = " << firstName
       <<" b = " << lastName
       << endl;

}
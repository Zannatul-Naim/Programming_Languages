#include<iostream>

using namespace std;

int check_div(int, int);
int main()
{
   int numerator, denominator, res;
   cout << "Enter a Number (Numerator): ";
   cin >> numerator;
   cout << "Enter another Number (Denominator): ";
   cin >> denominator;

   res = check_div(numerator, denominator);
   if(res == 1)
      cout << endl << numerator << " is divisible by " << denominator;
   else
      cout << endl << numerator << " is not divisible by " << denominator;
   cout << endl;
   return 0;
}
int check_div(int a, int b)
{
   if(a%b == 0)
      return 1;
   else
      return 0;
}

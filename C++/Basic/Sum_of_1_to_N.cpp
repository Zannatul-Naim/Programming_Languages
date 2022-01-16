#include<iostream>
using namespace std;

int main()
{
   int n, sum = 0;
   cout << "Enter the Value of n: ";
   cin >> n;
   for(int i = 1; i <= n; i++)
   {
     sum = sum + i;
   }
   cout << "\nSum of First " << n << " Natural Numbers = " << sum;
   cout << endl;
   return 0;
}

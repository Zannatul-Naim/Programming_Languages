/*  C++ Program to Generate Random Numbers between 0 and 100  */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // This program will create different sequence of
    // random numbers on every program run
 
    // Use current time as seed for random generator

    srand(time(0));

    cout << "Generating Random Numbers Below : \n\n";
    
    for(int i = 1; i <= 10; i++)
    {
        
        cout << rand()%100 << " ";
    }
    
    cout << "\n";

    return 0;
}

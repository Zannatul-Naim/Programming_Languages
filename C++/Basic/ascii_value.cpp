#include <iostream>
using namespace std;

int main() {
 // ascii value of 'a' - 'z'
  for(char ch = 'a'; ch <= 'z'; ch++)
  {
      cout << int(ch) << " ";
  }
  cout << "\n";
  
  
  // ascii value of 'A' - 'Z'
  for(char ch = 'A'; ch <= 'Z'; ch++)
  {
      cout << int(ch) << " ";
  }
  cout << "\n";
  
  // ascii '0' - '9'
  for(char ch = '0'; ch <= '9'; ch++)
  {
      cout << int(ch) << " ";
  }
  cout << endl;
    
 return 0;
}

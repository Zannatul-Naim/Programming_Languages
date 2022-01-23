/*  C Program to check whether character is vowel or not using switch statement  */

#include<stdio.h>

int main()
{
  char ch;
  printf("Enter a character to check : \n");
  scanf("%c", &ch);
  
  if(ch == 'a' || ch == 'A')
        printf("The entered character %c is a vowel", ch);
  else if(ch == 'e' || ch == 'E')
        printf("The entered character %c is a vowel", ch);
  else if(ch == 'i' || ch == 'I')
        printf("The entered character %c is a vowel", ch);
  else if(ch == 'o' || ch == 'O')
        printf("The entered character %c is a vowel", ch);
  else if(ch == 'u' || ch == 'U')
        printf("The entered character %c is a vowel", ch);
  else
        printf("The entered character %c is a constant", ch);
    
  return 0;
}

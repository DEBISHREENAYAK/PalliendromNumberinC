#include<stdio.h>
 
 void main()
 
{
    int originalNumber,number,reverseNumber=0,reminder;
    printf("enter a number");
    scanf("%d",&originalNumber);
    originalNumber=number;
    while(number!=0)
    
    {
        reminder=number%10;
        reverseNumber=reverseNumber*10+reminder;
        number/=10;
    }    
        (originalNumber=reverseNumber)?printf("palindrome."):printf(" not palindrome.");
}
    

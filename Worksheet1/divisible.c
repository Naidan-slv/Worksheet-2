#include <stdio.h>

int main ()
{
    int a;

    printf("Enter a value to see if its divisible by both 5 and 4: ");
    scanf("%d",&a);

    if ((a % 4 == 0) && (a % 5 == 0))
    {
        printf("Your number is divisble by both 4 and 5");
    }
    else 
    {
        printf("your number is not divisble by 4 and 5 \n");
    }
        
    return 0;


}
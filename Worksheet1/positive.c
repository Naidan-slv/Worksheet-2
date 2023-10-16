#include <stdio.h>
int main(){

    int i;
    int value ;
    
    printf("Enter a number to check what it is: ");
    scanf("%d",&i);

    if (i > 0 )
    {
        printf("Your value is positive\n");
    }
     if (i < 0 )
    {
        printf("Your value is negative\n");
    }
     if (i == 0 )
    {
        printf("Your value is Zero\n");
    }

return 0;
}
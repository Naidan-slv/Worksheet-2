#include <stdio.h>
int main ()
{
    int temperature ;
    temperature = 100;

    while ((temperature < -30) || (temperature > 40))
    {
    printf("Enter a temperature to see if its in the given range: ");
    scanf("%d",&temperature);
    }

    if (temperature < 0){
    
        printf("Brrrr its cold and your value is correct\n" );
    }

    else (temperature > 0);{
    
        printf("Its getting hotter and your value is within the correct range\n ");
    }

return 0;
}
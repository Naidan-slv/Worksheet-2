#include <stdio.h>
// create a menu system using the switch function "Include an error message for invalid choices"

int main()
{
    int a ;
    a = -1;

    
    printf("MENU 1\nMENU 2\nMENU 3\nMENU 4\nMENU 5\n");

    while ((a < 0 )|| (a > 5))
    {
        printf("Enter a value between 1 and 5 inclusive to acces that menu: ");
            scanf("%d", &a);
    }

        switch (a){       
     case 1: 
        printf ("Option 1 has been selected\n");
        break;

     case 2: 
        printf ("Option 2 has been selected\n");
        break;

     case 3: 
        printf ("Option 3 has been selected\n");
        break;

     case 4: 
        printf ("Option 4 has been selected\n");
        break;

     case 5: 
        printf ("Option 5 has been selected\n");
        break;

    default: printf("Invalid option selected. Please try again.\n");
        }
}
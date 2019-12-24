#include <stdio.h>
#include <stdlib.h>

int main()
{


    int option;

    for(;;){
        printf("\nMenu : \n 1. Line Draw \n 2. Circle Draw \n 3. Line Clipping \n 4. Exit\n");
        printf("Enter your Option: ");
        scanf("%d",&option);

        if(option == 4){
            break;
        }

        switch(option){
            case 1:
                printf("pressed 1");
                break;
            case 2:
                printf("pressed 2");
                break;
            case 3:
                printf("pressed 3");
                break;
            default:
                printf("invalid input");
                break;

        }
    }




    return 0;
}

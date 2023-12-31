#include<stdio.h>
int main()
{
    char alphabet;

    printf("Enter an alphabet : ");
    scanf("%c",&alphabet);

    switch(alphabet){
    case 'a' :

        printf("The character is 'a'\n");
        break;

    case 'A' :

        printf("The character is 'A'\n");
        break;

    default :

        printf("The character is unknown\n");

    }

    return 0;
}

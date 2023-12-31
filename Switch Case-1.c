#include<stdio.h>
int main()
{
    int x ;

    printf("Enter the value of x : ");
    scanf("%d",&x);

    switch(x){
    case 1 :

        printf("Value is 1\n");
        break;

    case 2 :

        printf("Value is 2\n");
        break;

    case 3 :

        printf("Value is 3\n");

    default :

          printf("Value is unknown\n");
    }

    return 0;
}

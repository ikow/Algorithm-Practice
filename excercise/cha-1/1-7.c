#include<stdio.h>

int main()
{
    int year;
    scanf("%d", &year);
    if( year % 100 == 0 )
        if( year % 400 ==0 )
            printf("yes\n");
        else
            printf("no\n");
    else if(year % 4 == 0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}

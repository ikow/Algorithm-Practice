#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(95*n > 300)
        printf("%.2f\n", 0.85*95*n);
    else
        printf("%d\n",95*n);
    return 0;
}

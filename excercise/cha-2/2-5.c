#include<stdio.h>

int main()
{
    int a, b, c[100], i = 0, j;
    float s[100];
    while(1)
    {

        scanf("%d %d %d", &a, &b, &c[i]);
        if( a == 0 && b == 0 && c[i] == 0 ) break;
        s[i] = 1.0*a/b;
        i++;
    }
    for(j = 0; j < i; j++ )
    {
        printf("Case %d: %.*lf\n", j+1, c[j], s[j]);
    }
}

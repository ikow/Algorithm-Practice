#include<stdio.h>
#define MAX 100
int main()
{
    int a, b, c, x[100], n = 0, i;
    while(scanf("%d %d %d", &a, &b, &c) != EOF)
    {
       // scanf("%d %d %d", &a, &b, &c);
        x[n] = ( 70 * a + 21 * b + 15 * c) % 105;
        n++;
    }
    for(i = 0; i < n; i++)
    {
        if(x[i]<=100&&x[i]>=10)
        {
            printf("Case %d: %d\n",i+1,x[i]);
        }
        else
        {
            printf("Case %d: No answer\n",i+1,x[i]);
        }
    }
}

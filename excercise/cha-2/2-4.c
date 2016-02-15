#include<stdio.h>

int main()
{
    long long n, m, i, j = 0;
    double s[100];
    while(1)
    {
        s[j] = 0;
        scanf("%d %d",&n,&m);
        if(n == 0 && m == 0) break;
        for(i = 0; i <= m-n; i++)
        {
            s[j] += (float)1/((n+i)*(n+i));
        }
        //printf("Case %d: %.5f", j, s);
        j++;
    }
    for(i = 0; i < j; i++)
    {
         printf("Case %d: %.5f\n", i+1, s[i]);
    }
}

#include<stdio.h>

int main()
{
    int i, j, k, m, n = 0, a[10];
    for( i = 123; i < 333; i ++ )
    {
        for(m = 0; m<10; m++)
            a[m] = 0;
        a[i/100] = 1;
        a[i/10%10] = 1;
        a[i%10] = 1;
        j = i * 2;
        a[j/100] = 1;
        a[j/10%10] = 1;
        a[j%10] = 1;
        k = i * 3;
        a[k/100] = 1;
        a[k/10%10] = 1;
        a[k%10] = 1;
        for(m = 0; m<10; m++)
            n += a[m];
        if(n == 9)
            printf("%d %d %d\n", i, j, k);
        n = 0;
    }
    return 0;
}

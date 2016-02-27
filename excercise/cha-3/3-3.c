#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    int T;
    scanf("%d", &T);
    while(T--){
    int a[10];
    memset(a, 0, sizeof(a));
    scanf("%d", &n);
    for(int i = 0; i <= n; i ++)
    {
        int j;
        j = i;
        while(j)
        {
            a[j%10] ++;
            j /= 10;
        }
    }
    for(int i = 0; i < 9; i++)
        printf("%d ", a[i]);
    printf("%d\n", a[9]);
    }
    return 0;
}

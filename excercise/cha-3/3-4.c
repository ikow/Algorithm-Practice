#include<stdio.h>
#include<string.h>
int main()
{
    int T, count = 1;
    scanf("%d", &T);
    while(T--)
    {
        getchar();
        char c[83];
        int m = 0, l = 0;
        scanf("%s", c);
        l = strlen(c);
        for( m = 1; m <= l; m++)
        {
            int flag = 1;
            if(l%m == 0)
            {
                for(int j = m; j < l; j++)
                {
                    if(c[j] != c[j%m])
                    {
                        flag = 0;
                        break;
                    }
                }
                if(flag == 1)
                {
                    if(count != 1)
                        printf("\n");
                    printf("%d\n", m);
                    count++;
                    break;
                }
            }
        }
    }
}

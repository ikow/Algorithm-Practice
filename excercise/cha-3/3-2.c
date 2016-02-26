#include<stdio.h>
#include<string.h>

const int maxn = 100;
char s[maxn];
double ans[maxn];
int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        double S = 0;
        int flag = 0, temp = 0;
        scanf("%s", s);
        memset(ans, 0, sizeof(ans));
        for(int i = 0; i < strlen(s); i++)
        {
            if(s[i] == 'C') ans[i] = 12.01;
            else if(s[i] == 'H') ans[i] = 1.008;
            else if(s[i] == 'O') ans[i] = 16.00;
            else if(s[i] == 'N') ans[i] = 14.01;
            else if(s[i] >= '0' && s[i] <= '9' && flag == 0)
            {
                for(int j = i; j < strlen(s); j++)
                {
                    if(s[j] >= '0' && s[j] <= '9')
                        temp = j;
                    else break;
                }
                for(int j = i; j <= temp; j++)
                {
                    ans[i] = (s[j] - '0') + ans[i]*10;
                }
                ans[i] = ans[i] * ans[i-1];
                ans[i-1] = 0;
                flag = 1;
            }
            if(!(s[i] >= '0' && s[i] <= '9'))
            {
                 flag = 0;
            }
        }
        for(int i = 0; i < strlen(s); i++)
        {
             S += ans[i];
        }
        printf("%.3lf\n", S);
    }
    return 0;
}

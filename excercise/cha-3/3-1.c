#include<stdio.h>
#include<string.h>
#define maxn 100

int main()
{
    int T;
    char s[maxn];
    scanf("%d", &T);
    while(T--)
    {
        scanf("%s", s);
        int ans = 0, S = 0;
        int n = strlen(s);
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'O')
            {
                ++ans;
                S += ans;
            }
            if(s[i] == 'X') ans = 0;
        }
        printf("%d\n", S);
    }
    return 0;
}

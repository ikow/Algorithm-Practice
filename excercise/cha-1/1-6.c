#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(a+b <= c || a+c <= b || b+c <= a || fabs(a-b) >= c || fabs(a-c) >= b || fabs(b-c) >= a )
        printf("not a triangle\n");
    else if (a*a + b*b == c*c || a*a + c*c == b*b|| b*b + c*c == a*a)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}

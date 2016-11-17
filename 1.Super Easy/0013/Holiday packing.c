#include<stdio.h>

int main()
{
    int L,H,W,tc,i;

    scanf("%d", &tc);

    for(i=1; i<=tc; i++)
    {
    scanf("%d %d %d", &L, &H, &W);

    if((L<=20)&&(H<=20)&&(W<=20))
        printf("Case %d: good\n", i);
    else
        printf("Case %d: bad\n", i);

    }
}

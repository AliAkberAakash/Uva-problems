#include<stdio.h>

int main()
{
    int v,t,s;

   while(scanf("%d %d", &v,&t)!=EOF)
   {
    s=v*t*2;

    printf("%d\n", s);
   }

    return 0;
}


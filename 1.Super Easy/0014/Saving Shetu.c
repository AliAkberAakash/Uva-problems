#include<stdio.h>
#include<string.h>

int main()
{
    char a[7];
    int T,K,S=0;
    scanf("%d", &T);

    while(T)
    {

        gets(a);

        if(!strcmp(a,"donate"))
        {
            printf("Enter k\n");
            scanf("%d", &K);
            S=S+K;
        }

        gets(a);

        if(!strcmp(a,"report"))
            printf("%d\n", S);

        T--;

    }

    return 0;

}

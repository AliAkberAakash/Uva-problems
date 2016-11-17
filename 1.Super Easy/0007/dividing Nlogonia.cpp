#include<stdio.h>

int main()
{
    int K,N,M,X,Y;

    while(1)
    {
        scanf("%d", &K);

        if(!K)
            break;

        scanf("%d %d", &N, &M);

        while(K)
        {
            scanf("%d %d", &X, &Y);

            if((X-N==0)||(Y-M==0))
                printf("divisa\n");

            else if((X-N>0)&&(Y-M>N))
                printf("NE\n");

            else if((X-N<0)&&(Y-M>0))
                printf("NO\n");

            else if((X-N<0)&&(Y-M<0))
                printf("SO\n");

            else if((X-N>0)&&(Y-M<0))
                printf("SE\n");

            K--;
        }

    }

    return 0;
}

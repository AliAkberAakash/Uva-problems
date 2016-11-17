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

            if((X==N)||(Y==M))
                printf("divisa\n");

            else if((X>N)&&(Y>M))
                printf("NE\n");

            else if((X<N)&&(Y>M))
                printf("NO\n");

            else if((X<N)&&(Y<M))
                printf("SO\n");

            else if((X>N)&&(Y<M))
                printf("SE\n");

            K--;
        }

    }

    return 0;
}

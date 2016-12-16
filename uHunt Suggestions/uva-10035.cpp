/*
* Solution to uva-10035
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<stdio.h>

int main()
{
    unsigned long long a,b,s;

    while(1)
    {
        s=0;
        scanf("%llu %llu", &a,&b);

        if(!a&&!b)
        break;

        int k=0;

        while(a>0||b>0)
        {
            if(((a%10)+(b%10)+k)>=10)
                {
                    s++;
                    k=1;
                }
            else
                k=0;

            a=a/10;
            b=b/10;
        }

        if(!s)
            printf("No carry operation.\n");
        else if(s==1)
            printf("%llu carry operation.\n", s);
        else
            printf("%llu carry operations.\n", s);

    }

    return 0;
}

/* solution to uva 10055
by: Ali Akber Aakash
email: ali852609@gmail.com or cedward318@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>


int main()
{
    long long int a,b;

    while(scanf("%lld %lld", &a, &b)!=EOF)
    {
        if(a>b)
        printf("%lld\n", a-b);
        else
        printf("%lld\n", b-a);
    }

    return 0;
}

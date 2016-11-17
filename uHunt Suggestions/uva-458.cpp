/*
* Solution to uva- 458
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char s[100000],i;

    while(gets(s))
    {
        for(i=0; i<strlen(s); i++)
        {
            printf("%c", s[i]-7);
        }

        printf("\n");
    }

    return 0;
}

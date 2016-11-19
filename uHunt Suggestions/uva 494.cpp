#include<stdio.h>
#include<string.h>

int main()
{
    char s[20000],i,k,l;

    while(gets(s))
    {
        k=0;
        for(i=0; i<strlen(s); i++)
        {
            if(((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122)))
               {
                   if(!((s[i+1]>=65&&s[i+1]<=90)||(s[i+1]>=97&&s[i+1]<=122)))
                   {
                       k++;
                   }
               }
        }

        printf("%d\n", k);
    }


    return 0;
}

/*
* Solution to uva-621
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000];
    int n;

    scanf("%d", &n);

    while(n--)
    {
        gets(s);
        getchar();
        int l=strlen(s);

        if(!strcmp(s,"1")||!strcmp(s,"4")||!strcmp(s,"7835"))
            printf("+\n");
        else if(s[l-2]=='3'&&s[l-1]=='5')
            printf("-\n");
        else if(s[0]=='9'&&s[l-1]=='4')
            printf("*\n");
        else if(s[0]=='1'&&s[1]=='9'&&s[2]=='0')
            printf("?\n");
        //else


    }


    return 0;
}

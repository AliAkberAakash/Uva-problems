/*
* Solution to uva 11734
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>
#include<cstring>
#include<cstdlib>

int main()
{
    char* s = (char*) malloc(100);
    char* t = (char*) malloc(100);

    int n,o,j,k;

    scanf("%d",&n);
    getchar();

    for(int i=1; i<=n; i++)
    {
        scanf("%[^\n]s", s);
        getchar();
        scanf("%[^\n]s", t);
        getchar();

        printf("Case %d: ", i);
        if(!strcmp(s,t))
        printf("Yes\n");

        else
        {
            o=k=0;
            int l=strlen(s);

            for(j=0; j<l; j++)
            {
                if(s[j]!=' ')
                {
                    if(s[j]!=t[o])
                    {
                        printf("Wrong Answer\n");
                        k=1;
                        break;
                    }
                    o++;
                }
            }

            if(!k)
            {
                if(strlen(t)!=o)
                    printf("Wrong Answer\n");
                else if(j==l)
                printf("Output Format Error\n");
            }
        }
    }

    free(s);
    free(t);

    return 0;
}

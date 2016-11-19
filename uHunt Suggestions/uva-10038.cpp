/*
* Solution to uva-10038
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void ascend(int x[], int y)
{
    int i,j,temp;
    for(i=0; i<y; i++)
    {
        for(j=i+1; j<y; j++)
        {
            if(x[i]>x[j])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
}

int main()
{
    int i,n,j,a[3001],d[3000],e[3000];

    while(scanf("%d", &n)!=EOF)
    {

    for(i=0; i<n-1; i++)
        e[i]=i+1;

    for(i=0; i<n; i++)
    scanf("%d", &a[i]);

    for(i=0; i<n-1; i++)
       d[i]=abs(a[i]-a[i+1]);
    ascend(d,n-1);

    int k=1;

    for(i=0; i<n-1; i++)
    {
        if(d[i]!=e[i])
        {
            k=0;
            break;
        }
    }

    if(k)
        printf("Jolly\n");
    else
        printf("Not jolly\n");

    }
    return 0;
}

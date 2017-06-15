/*
* Solution to uva-11827
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int gcd(int a, int b)
{
    //if(b==0)  return a;
    if(a%b==0)  return b;
    return  gcd(b, a%b);
}

int main()
{
    int m,n,a[1000];
    char c;
    //vector <int> v;

    scanf("%d", &n);

    while(n--)
    {
        m=1;
        int i=0;
        do
        {
            scanf("%d", &a[i++]);
            c=getchar();

        }while(c==' ');

        for(int j=0; j<i-1; j++)
        {
            for(int k=j+1; k<i; k++)
            {
                if(a[j]>a[k])
                m=max(m,gcd(a[j],a[k]));
                else
                m=max(m,gcd(a[k],a[j]));
            }
        }

        printf("%d\n", m);

    }

    return 0;
}

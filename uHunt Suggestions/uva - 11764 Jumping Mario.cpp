#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v;

    int n,u,d,m,x;

    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d", &m);

        d=u=0;

        for(int j=0; j<m; j++)
        {
            scanf("%d", &x);
            v.push_back(x);
        }
        m--;
        for(int j=0; j<m; j++)
        {
            if(v[j]<v[j+1])
                u++;
            else if(v[j]>v[j+1])
                d++;

        }

        printf("Case %d: %d %d\n",i, u, d);

        v.clear();

    }


    return 0;
}

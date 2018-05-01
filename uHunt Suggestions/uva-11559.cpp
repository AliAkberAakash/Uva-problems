/*
* Solution to UVA-11559
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<bits/stdc++.h>
#define err "stay home"

using namespace std;

bool calculate(int x, int y)
{
    if(x<=y)
        return true;
    return false;
}

int main()
{
    int participants,budget,hotels,weekends,hotel_cost,week_vacancy, ans;

    while(scanf("%d", &participants)!=EOF)
    {
        scanf("%d %d %d", &budget, &hotels, &weekends);

    bool p=false,q=false;
    ans=INT_MAX;
    for(int i=0; i<hotels; i++)
    {
        scanf("%d", &hotel_cost);
        for(int j=0; j<weekends; j++)
        {
            scanf("%d", &week_vacancy);

            if(week_vacancy>=participants)
            {
                p=calculate((participants*hotel_cost),budget);
                if(p)
                {
                    ans=min(ans,(participants*hotel_cost));
                    q=true;
                }
            }
        }
    }

    if(q)
        printf("%d\n", ans);
    else
        printf("stay home\n");
    }

    return 0;
}

/*
Program Name: Lonesome car buyer
Details: UVA 10114
Solved By: Liverwort
Date: 11.6.16
*/

#include<stdio.h>


int main()
{
    int m,mc[100000], i,j,t; // m= months, mc= monthCounter i,j= loop control variable
    double dp, l, ndr, d[10000], cp; // dp= downPayment, l= loan, ndr= numberOfDepreciationRecords, d= depreciation, cp= carPrice

    while(1)
    {
        scanf("%d %lf %lf %lf", &m, &dp, &l, &ndr);

        for(i=0; i<ndr; i++)
            scanf("%d %lf", &mc[i], &d[i]);

        if(m<0)    break;

        cp= l+dp;
        t=0;
        for(i=0; i<ndr; i++)
        {
            for(j=t; j<=mc[i]; j++)
            {
                cp=cp-(cp*d[j]);
                l=l-dp;

                if(cp>l)
                   {
                      printf("%d\n", mc[i]);
                      break;
                   }
            }

            t=j;
        }

    }

    return 0;
}


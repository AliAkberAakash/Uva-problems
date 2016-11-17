/*
   Program Name: Lonesome Car Buyer
Details: UVA 10114
Solved By: Liverwort
Date: 17.6.16
 */

#include<iostream>
#include<stdio.h>


int main()
{
    using namespace std;

    int totalMonths,depreciationNo,i,j,k,t,month[100000];
    double downPayment, loan, depreciation[100000], carPrice,d,mthpay;

    while(scanf("%d %lf %lf %d", &totalMonths, &downPayment, &loan, &depreciationNo))
    {
        mthpay=loan*1.0/totalMonths;
        if(totalMonths<0)
            break;

        carPrice=(loan+downPayment);



        for(i=0; i<depreciationNo; i++)
            scanf("%d %lf", &month[i], &depreciation[i]);

        k=1;
        t=0;
        d=depreciation[0];





        for(i=0; i<=100;  i++)
        {

            if(i==month[k])
            {
                d=depreciation[k];
                k++;
            }

            carPrice-=carPrice*d;
            if(carPrice>loan)
            {
                t=i;
                break;
            }
            loan-=mthpay;




        }

        if(t==1)
            printf("%d month\n", t);
        else
            printf("%d months\n", t);

    }




    return

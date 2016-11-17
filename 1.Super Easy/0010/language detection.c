#include<stdio.h>
#include<string.h>

int main()
{
    char s[6][2][30]={"HELLO","ENGLISH",
                      "HOLA","SPANISH",
                      "HALLO","GERMAN",
                      "BONJOUR","FRENCH",
                      "CIAO","ITALIAN",
                      "ZDRAVSTVUJTE","RUSSIAN"};
    char a[30];

    while(gets(a)!='#')
    {
        if(!strcmp(a,s[1][1]))
            printf("%s", s[1][2]);
        else if(!strcmp(a,s[2][1]))
            printf("%s", s[2][2]);
    }

}

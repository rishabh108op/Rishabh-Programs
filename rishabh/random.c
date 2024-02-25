#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    printf("enter the first string\n");
    gets(s1);
    printf("Enter the second string\n");
    gets(s2);
    printf("length of first string %d\n",strlen(s1));
    printf("length of second string %d\n",strlen(s2));

    strcat(s1,s2);
    printf("the contanated string is %s",s1);
    strcpy(s1,s2);
    printf("\n\nstring copy %s\n\n",s1);
    return 0;
}
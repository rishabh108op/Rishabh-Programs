#include<stdio.h>
struct student
{
    char name[20];
    char usn[20];
    float s1,s2,s3;
    float avg;
};
int main()
{
    int n,i;
    printf("enter no of students");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++)
    {
        printf("enter student name\n");
        scanf("%s",&s[i].name);
        printf("enter student usn\n");
        scanf("%s",&s[i].usn);
        printf("marks in s1\n");
        scanf("%f",&s[i].s1);
        printf("marks in s2\n");
        scanf("%f",&s[i].s2);
        printf("marks in s3\n");
        scanf("%f",&s[i].s3);
        s[i].avg=(s[i].s1+s[i].s2+s[i].s3)/3;
    }
    printf("\nstudent scoring above avg marks\n");
    for(i=0;i<n;i++)
    {
        if(s[i].avg>35)
        {
            printf("name =%s\t USN =%s\t AVG =%f\t",s[i].name,s[i].usn,s[i].avg);
        }
    }
        printf("\nstudent scoring below avg marks\n");
    for(i=0;i<n;i++)
    {
        if(s[i].avg<=35)
        {
            printf("%s\t%s\t%f\t",s[i].name,s[i].usn,s[i].avg);
        }
    }
    return 0;
}
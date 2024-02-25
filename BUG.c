#include<stdio.h>
int main()
{
    FILE *ptr=NULL;
    char rishu[50]="Heloo rishabh how are you";
    // ptr=fopen("delete.txt","r");
    // fscanf(ptr,"%s",rishu);
    // printf("Contents are %s",rishu);
    ptr=fopen("delete.txt","a");
    fprintf(ptr,"%s",rishu);
}
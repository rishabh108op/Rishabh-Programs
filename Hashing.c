#include<stdio.h>
#define size 10
int hash[size];
int main()
{

}
void hashing(int value)
{
    int k;
    k=value%size;
    if(hash[k]=='\0')
    {
        hash[k]=value;
        return;
    }
    probe(value,k+1);
}
void probe(int value,int l)
{
    int c;
    c=l%size;
    if(hash[c]=='\0')
    {
        hash[c]=value;
    }
    probe(value,l+1);
}

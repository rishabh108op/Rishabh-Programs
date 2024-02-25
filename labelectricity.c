#include<stdio.h>
#define METER_CHARGE 100
int main()
{
    char name[20];
    float units,charge=0,total;
    printf("enter the name of custmer");
    gets(name);
    printf("enter units");
    scanf("%f",&units);
    if(units==0)
    {
        printf("units cant be zero");
        return 1;
    }
       if(units<200)
        {
            charge=0.8*units;
        }
        else if(units<300)
        {
            charge=(200*0.8) + 0.9*(units-200);
        }
        else
        {
            charge=(0.8*200)+(0.9*100)+(1*(units-300));
        }
        total=charge+METER_CHARGE;
        if(total>400)
        {
            total=total+0.15*total;
        }
        printf("total charge= %f",total);
        

    return 0;
}
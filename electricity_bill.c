#include<stdio.h>
int main()
{
    char name[20];
    float units,charge=0,total,meter_charge=100.00;
    printf("enter the custmer name:");
    gets(name);
    printf("Enter the units:");
    scanf("%f",&units);
    if(units<0)
    {
        printf("units must be positive.");
        return 1;
    }
    if(units<200)
    {
        charge=0.8*units;
    }
    else if(units<300)
    {
        charge=(0.8*200)+0.9*(units-200);
    }
    else
    {
        charge=(0.8*200)+(0.9*100)+(1.0*(units-300));
    }
    total=charge+ meter_charge;
    if(total>400)
    {
        total=total+0.15*total;
    }
    printf("\n*********************************\n");
    printf("charge you have to pay is rs %f",total);
    

return 0;
}
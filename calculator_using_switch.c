#include<stdio.h>
int main()
{
     int a,b,op;
     printf(" 1.addition\n 2.substraction\n 3.multiplication\n 4.division\n 5.reminder\n");
     printf("enter the two numbers");
     scanf("%d%d",&a,&b);
     printf("enter your choice");
     scanf("%d",&op);
     switch(op)
     {
        case 1:
        printf("sum of %d and %d is=%d\n",a,b,a+b);
        break;
        case 2:
         printf("sub of %d and %d is=%d\n",a,b,a-b);
        break;
         case 3:
          printf("mul of %d and %d is=%d\n",a,b,a*b);
        break;
          case 4:
           printf("div of %d and %d is=%d\n",a,b,a/b);
        break;
           case 5:
            printf("rem of %d and %d is=%d\n",a,b,a%b);
        break;
     }


return 0;

}
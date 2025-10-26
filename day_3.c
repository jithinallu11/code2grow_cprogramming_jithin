#include <stdio.h>
int main()
{
    float fixed_metre_charges = 50;
    float units_consumed,total_bill;
    printf("entre the units consumed\n");
    scanf("%f",&units_consumed);
    if(units_consumed<=100)
    {
        total_bill = (units_consumed)*3;
    }
    else if(units_consumed<=200)
    {
        total_bill = (100*3) + (units_consumed-100)*4.5;
    }
    else if(units_consumed<=300)
    {
        total_bill = (100*3) + (100*4.5) + (units_consumed-200)*6;
    }
    else
    {
        total_bill = (100*3) + (100*4.5) + (100*6) + (units_consumed - 300)*8;
    }
    total_bill += fixed_metre_charges;
    printf("the total current bill is %.0f",total_bill);
    return 0;
}

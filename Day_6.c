#include <stdio.h>
int main()
{
    float data_used,base_cost,extra_data,total,final_bill,extra_cost;
    int student,corporate,discount;
    printf("entre the data used:\n");
    scanf("%f",&data_used);
    printf("Are you a student(yes - 1, no - 0)\n");
    scanf("%d",&student);
    printf("Are you a corporate\n");
    scanf("%d",&corporate);
    if(data_used > 100)
    {
        printf("not eligible for the mobile plan\n");
    }
    else
    {
        printf("user plan:\n");
        printf("Data used by user\n:%d",data_used);
    }
    if(data_used < 30)
    {
        printf("suitable plan: silver\n");
        base_cost = 299;
        extra_cost = 50;
        extra_data = 0;
    }
    else if(data_used >= 30 && data_used <= 60)
    {
        printf("suitable plan: gold\n");
        base_cost = 499;
        extra_cost = 40;
        if(data_used > 60)
        extra_data = data_used - 60;
        else
        extra_data = 0;
    }
    else if(data_used > 60 && data_used <= 100)
    {
    printf("suitable plan: platinum\n");
    base_cost = 799;
    extra_cost = 30;
    if(data_used > 60)
    extra_data = data_used - 60;
    else
    extra_data = 0;
    }
    total = base_cost + (extra_data*extra_cost);
    if(student == 1 && corporate == 1)
    {
        discount = 15;
    }
    else if(student == 1)
    {
        discount = 15;
    }
    else if(corporate == 1)
    {
        discount = 10;
    }
    else
    {
        discount = 0;
    }
    final_bill = total - total*(discount/100.0);
    printf("Base cost:%.0f\n",base_cost);
    printf("Extra data:%.0f\n",extra_data);
    printf("Total cost before discount:%.0f\n",total);
    printf("final cost after discount:%.0f\n",final_bill);
    return 0;

}

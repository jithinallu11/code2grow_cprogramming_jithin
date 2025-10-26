#include <stdio.h>
int main()
{
    float s1,s2,s3,s4,s5;
    float attendence,total,percentage;
    char grade,remarks[10];
    printf("enter all the marks you scored in all the five subjects respectively\n");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    printf("enter your attendence percentage\n");
    scanf("%f",&attendence);
    total =  s1 + s2 + s3 + s4 + s5;
    percentage = total/5;
    if(attendence<75)
    {
        grade = 'F';
        printf("failed\n",grade);

    }
    else
    if(percentage >=90)
    {
        char grade[2] = "A+";
        printf("total percentage:  %.2f\n",percentage);
        printf("attendence: %.2f\n",attendence);
        printf("final grade: %c\n",grade);
        printf("remarks: excellent\n");
    }
    else if(percentage >=80)
    {
        grade = 'A';
        printf("total percentage: %.2f\n",percentage);
        printf("attendence: %.2f\n",attendence);
        printf("final grade %c\n",grade);
        printf("remark: very good\n");
    }
    else if(percentage >= 70)
    {
        grade = 'B';
        printf("total percentage: %.2f\n",percentage);
        printf("attendence: %.2f\n",attendence);
        printf("final grade: %c\n",grade);
        printf("remark:  good\n");
    }
    else if(percentage >= 60)
    {
        grade = 'C';
        printf("total percentage: %.2f\n",percentage);
        printf("attendence: %.2f",attendence);
        printf("final grade: %c\n",grade);
        printf("remarks is average\n");
    }
    else if(percentage >= 50)
    {
        grade = 'D';
        printf("total percentage: %.2f\n",percentage);
        printf("attendence: %.2f\n",attendence);
        printf("final grade:  %c\n",grade);
        printf("remark:just pass\n");
    }
    else {
        if(percentage > 45 && attendence > 90)
        {
            percentage += 5;
            grade = 'D';
            printf("total percentage: %.2f\n",percentage);
            printf("attendence: %.2f\n",attendence);
            printf("final grade is %c\n",grade);
            printf("remark:just pass\n");
        }
        else
        {
            grade = 'F';
            printf("total percentage: %.2.2f\n",percentage);
            printf("attendence: %f\n",attendence);
            printf("grade is %c\n",grade);
            printf("remarks is fail\n");
        }
    }
    return 0;
}

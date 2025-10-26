#include <stdio.h>
int main()
{
    float s1,s2,s3,s4,s5;
    float attendence,total,percentage;
    char grade,remarks[10];
    printf("entre all the marks you scored in all the five subjects respectively\n");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    printf("entre your attendence percentage\n");
    scanf("%f",&attendence);
    total =  s1 + s2 + s3 + s4 + s5;
    percentage = total/5;
    if(attendence<75)
    {
        grade = 'F';
        printf("failed\n",grade);
    }
    else
    if(attendence >=90)
    {
        grade = 'A';
        printf("grade is %c\n",grade);
        printf("remarks is excellent\n");
    }
    else if(attendence >=80)
    {
        grade = 'B';
        printf("grade is %c\n",grade);
        printf("remarks is very good\n");
    }
    else if(attendence >= 70)
    {
        grade = 'C';
        printf("grade is %c\n",grade);
        printf("remarks is good\n");
    }
    else if(percentage >= 60)
    {
        grade = 'D';
        printf("grade is %c\n",grade);
        printf("remarks is average\n");
    }
    else if(attendence >= 50)
    {
        grade = 'E';
        printf("grade is %c\n",grade);
        printf("remarks is just pass\n");
    }
    else {
        if(percentage > 45 && attendence > 90)
        {
            percentage += 5;
            grade = 'E';
            printf("grade is %c\n",grade);
            printf("remarks is just pass\n");
        }
        else
        {
            grade = 'F';
            printf("grade is %c\n",grade);
            printf("remarks is fail\n");
        }
    }
    return 0;
}

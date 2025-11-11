#include <stdio.h>
int main(){
    int n,i;
    int marks[10];
    int total = 0,pass = 0,fail = 0;
    int highest,lowest;
    int gradeAplus = 0,gradeA = 0,gradeB = 0;
    int gradeC = 0,gradeD = 0,gradeE = 0,gradeF = 0;
    float average;
    printf("======Student Perfomence Analyser======\n");
    printf("Enter Total no.of Students(max-10)\n");
    scanf("%d",&n);
    if(n < 1 || n > 10){
        printf("Invalied number of students, please enter from 1-10\n");
    }
    printf("Enter marks of each student\n");
    for(i = 0;i < n;i++){
        printf("student: %d\n",i + 1);
        scanf("%d",&marks[i]);
    if(marks[i] < 0 || marks[i] > 100){
        printf("Invalied marks entered, please enter from 1-100\n");
    }
    total += marks[i];
    if(i == 0){
        highest = lowest = marks[i];
    }
    if(marks[i] > highest)
    highest = marks[i];
    if(marks[i] < lowest)
    lowest = marks[i];
    if(marks[i] >= 90){
        gradeAplus++;
        pass++;
    }
    else if(marks[i] >= 80){
        gradeA++;
        pass++;
    }
    else if(marks[i] >= 70){
        gradeB++;
        pass++;
    }
    else if(marks[i] >= 60){
        gradeC++;
        pass++;
    }
    else if(marks[i] >= 50){
        gradeD++;
        pass++;
    }
    else{
        gradeF++;
        fail++;
    }
    }
    average = total/n;
    printf("======Result Summary======\n");
    printf("Average marks: %.0f\n",average);
    printf("Highest marks: %.0f\n",highest);
    printf("Lowest marks: %.0f\n",lowest);
    printf("Total Passed Students %.0f\n",pass);
    printf("Total failed students %.0f\n",fail);
    printf("Your Grade\n");
    printf("grade: A+\n",gradeAplus);
    printf("grade: A\n",gradeA);
    printf("grade: b\n",gradeB);
    printf("grade: c\n",gradeC);
    printf("grade: d\n",gradeD);
    printf("grade: f\n",gradeF);
    
    return 0;
}

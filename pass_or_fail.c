#include <stdio.h>
int main () {
float marks1, marks2, marks3;
/*To pass, a
student requires a total of 40% and at least 33% in each subject*/
printf ("Enter Marks1:\n");
scanf ("%f",&marks1);
printf ("Enter Marks2:\n");
scanf ("%f",&marks2);
printf ("Enter Marks3:\n");
scanf ("%f",&marks3);
printf ("The Marks are %f ,%f and %f\n",marks1,marks2,marks3);
if(marks1<33 || marks2<33 || marks3<33){
    printf ("Student is Failed due to less mark in indivisual subject\n");
}
else if ((marks1+marks2+marks3)/3 < 40){
    printf ("Student is failed due to total percentage\n");
}
else 
    printf ("The Student is passed with the percentage of %f",(marks1+marks2+marks3)/3);
    return 0;
}
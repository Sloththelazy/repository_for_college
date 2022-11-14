# include <stdio.h>
# include <math.h>
int main ()
{
    printf("Enter the  quadratic equation whose roots are to be found in the pattern a: b: c: \n");
    int a,b,c;
    scanf ("%d",&a);
    scanf ("%d",&b);
    scanf ("%d",&c);
    // the block where the process will happen
     double s = sqrt((b*b)-(4*a*c));
     double num1= (b*(-1))-s;
     double num2= (b*(-1))+s;
     double d = 2*a;
 printf("The roots of the quadratic eqaution is : %lf \n %lf", (num1/d),(num2/d));
 return 0;   
 


}
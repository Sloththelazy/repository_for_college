# include <stdio.h>
int main ()
{  // program starts
     printf("Enter the year to be checked for leap year : \n");
     int n;
     scanf("%d",&n);
    // control statements to check for leap year
         
         if (n%4==0 && n%100 != 0)
         {
             printf("The year : %d is a leap year ", n);
         }
         else if (n%400==0)
         {
             printf("The year : %d is a leap year ", n);
         }
          else
          {
            printf("The year : %d  is not a leap year ",n);
          }
    // control statements end
    
      return 0; 
 // program ends

}
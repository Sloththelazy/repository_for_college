# include <stdio.h>
int main ()
{
    printf("Enter the number to be checked : \n ");
    int n;
    scanf("%d",&n);
    
    // control statements to check for the even and odd numbers
      if(n%2==0)
         {
              printf("%d is an even number. Thank you ! \n " ,n);
          }
       else 
       {
         printf("%d is an odd number ", n);
       }
       return 0;
}
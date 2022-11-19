# include <stdio.h>
int main ()
{
   printf ("Enter the months till which the numbers of days are to be founded  ");
   int n;
   scanf ("%d",&n);
   for (int i=1;i<=n;i++)
   { int c =i%2 ;
      if ( i<=7)
      {
         if (i==1 || c!=0)
         { printf(" 31 days on the month %d \n",i);}
         else if (i == 2)
         {
            printf (" 29 or 28 days in the month 2 \n");
         }
         else { printf (" 30 days in the month %d \n",i);

         }
         
      }
      else if ( i>=8 && i<=12)
      { if (i==8 || c==0)
      {
         printf(" 31 days on the month %d \n" ,i);
      }
       else 
       {
     printf (" 30 days in the month %d \n",i);

       }

      }
      
   }
   return 0;
}
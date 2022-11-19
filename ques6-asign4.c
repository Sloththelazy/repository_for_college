# include <stdio.h>
int main ()
{
    printf("Enter the marks scored ");
    int n;
    scanf ("%d",&n);
    if (n<=10 && n>=9)
    {printf("A");}
    else if (n<=8 && n>=7)
    {
        printf ("B");
    }
      else if (n<=6 && n>=5)
        {
            printf ("C");
        }
        else if (n>=3 && n<=4)
        {
            printf("D");
        }
        else if (n<3)
        {
            printf ("F");
        }
        else 
        {
            printf ("Invalid Input");
        }
        return 0;
}
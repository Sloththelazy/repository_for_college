# include <stdio.h>
int main ()
{
    printf("Enter the two numbers to be checked  ");
    int n,m;
    scanf ("%d %d",&n,&m);
    if (n%m==0)
    {
        printf(" Number 1 is a multiple of Number 2");
    }
    else if (m%n==0)
    {
        printf("Number 2 is a multiple of Number 1");
    } 
    else 
    {
        printf ("No relation found");
    }
 return 0;
}

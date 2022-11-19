# include <stdio.h>
int main ()
{
    printf ("Enter the sides of the triangle : ");
    int a,b,c;
    scanf ("%d %d %d",&a,&b,&c);
    if (a+b>c && b+c>a && a+c>b)
    {
        printf("The area of the triangle with the side %d, %d and %d is : %f",a,b,c, ((a+b+c)/2.0));

    }
    else
    {
        printf ("Invalid Input");
    }
    return 0;
}
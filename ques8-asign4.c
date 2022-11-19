# include <stdio.h>
int main ()
{
    printf ("Enter the character to be checked for digit, vowel or consonant ");
    char ch;
    scanf ("%c",&ch);
     if (ch >= 48 && ch<=57)
     { ;
         printf("The entered character is a digit namely : %c",ch);
     }
     else if (ch =='A' || ch=='E' || ch =='I' || ch == 'O' || ch=='U'|| ch=='a'||ch =='e'||ch =='i'||ch=='o'||ch=='u' )
     {
        printf ("The character entered is a vowel namely : %c",ch);
     }
     else {
        printf ("The enetered character is a consonant namely :%c",ch);
}
     return 0;

}
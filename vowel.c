#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter an Alphabet: ");
    scanf("%c", &ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        printf("\nIt's a Vowel");
    else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
       printf("%c is a vowel.", ch);
    else
        printf("%c is not vowel.", ch);
    return 0;
}

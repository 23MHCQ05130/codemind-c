#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("VOWEL");
    }
    else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
        printf("CONSONANT");
    }
    else
    {
        printf("This is not a valid character");
    }
}

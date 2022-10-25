#include<stdio.h>
int main()
{
    char ch;
    scanf("%s",&ch);
    if(ch=='A'||ch=='E' || ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
      printf("Vowel");
    else
      printf("Consonant");
}
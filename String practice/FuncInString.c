#include<stdio.h>
int main(){
    //Printing a string ( array )
    char s[10],p[10];
    //Single word string...
    printf("Enter your name : ");
    scanf("%s",&s);
    printf("Name entered is : %s\n\n",s);
    //Multi word string...
    printf("Enter your full name : ");
    gets(p);
    puts(p);
    return 0;
}
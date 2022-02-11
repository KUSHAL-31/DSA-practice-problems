#include<stdio.h>
#include<string.h>
int length(char*ptr){
    int l=0;
    while (*ptr!='\0')
    {
        l++;
        ptr++;
    }
    return l;
}
int main(){
    char*ptr;
    printf("\nEnter your name : ");
    scanf("%s",ptr);
    int result = length(ptr);
    printf("\nLength of your name is %d\n",result);

    //Alternate way to calculate the length of the string 
    result=strlen(ptr);
    printf("Length of your name by the use of strlen is %d\n",result);
    return 0;
}
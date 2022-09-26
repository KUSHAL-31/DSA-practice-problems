#include <stdio.h>
#include <string.h>
int main()
{
    int hh, mm, ss;
    char a[3];
    printf("Enter the 12 hour format : \n");
    scanf("%d:%d:%d%s",&hh,&mm,&ss,a);
    /*
     * user is allowed to enter time only in 12-hour format 
     * so that 'hh' cannot be greater than 12.
     */
    if (hh <= 12 && mm <= 59 && ss <= 59)
    {
        if ((strcmp(a, "PM") == 0) || (strcmp(a, "pm") == 0) && (hh != 0) && (hh != 12))
        {
            hh = hh + 12;
        }
        if ((strcmp(a, "AM") == 0) || (strcmp(a, "am") == 0) && (hh == 12))
        {
            hh = 0;
        }
        printf("The obtained 24-hour format of input is :");
        printf("%02d:%02d:%02d", hh, mm, ss);
        printf("\n\n");
    }
    else
    {
        printf("Provide the correct inputs.");
    }
    return 0;
}
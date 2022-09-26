#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int hh, mm, ss;
    char a[3];
    printf("\nEnter the time in 12 hr format (hh:mm:ss)and also am and pm : \n");
    scanf("%d:%d:%d%s", &hh, &mm, &ss, a);
    //printf("\nEntered time is : %d:%d:%d %s",hh,mm,ss,a);
    if((strcmp(a,"PM") == 0) || (strcmp(a,"pm") == 0) && (hh != 0) && (hh != 12))
    {
        hh = hh + 12;
    }
    if ((strcmp(a, "AM") == 0) || (strcmp(a, "am") == 0) && (hh == 12))
    {
        hh = 0;
    }
    else
    {
     hh += 0;
    }
    
    printf("Thus the 24 hr format is : \n");
    printf("%02d:%02d:%02d", hh, mm, ss);
    printf("\n\n");  
}
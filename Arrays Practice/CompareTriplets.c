#include <stdio.h>

int marks[] = {0, 0};
void compareTriplet(int *a, int *b)
{
    int i;
    for (i = 0; i < 3; i++)
    {
        if (a[i] < b[i])
        {
            marks[1]++;
        }
        else if (a[i] > b[i])
        {
            marks[0]++;
        }
        else
        {
            return;
        }
    }
}
int main()
{
    int a[3], i;
    //Alice marks
    printf("\nEnter the marks for alice : \n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    //bob marks
    printf("Enter the marks for bob : \n");
    int b[3];
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &b[i]);
    }
    //comparing the marks of both the students;
    compareTriplet(a, b);
    printf("The final result is : \n");
    //printing the result(marks)of alice and bob
    for (i = 0; i < 2; i++)
    {
        printf("%d  ", marks[i]);
    }
    printf("\n");
}

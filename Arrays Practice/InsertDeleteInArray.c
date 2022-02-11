#include <stdio.h>
int a[] = {10, 20, 30, 40, 50};

void printArray(int a[], int n);
void insertion();
void deletion();

int main(int argc, char const *argv[])
{
    int opt;
    do
    {
        printf("\nYou want to perform which operation :\n");
        printf("1)Insertion in array\n2)Deletion in array\n");
        printf("Enter your choice : ");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            insertion();
            break;

        case 2:
            deletion();
            break;

        default:
            printf("Please select the correct option....\n");
            break;
        }

    } while (opt != 1 || opt != 2);
    return 0;
}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
void insertion()
{
    printf("\nArray before insertion :\n");
    printArray(a, 5);
    int num, pos;
    int i, j, n = 5;
    printf("\nEnter the element you want to insert : ");
    scanf("%d", &num);
    printf("\nEnter the position at which you want to insert the element : ");
    scanf("%d", &pos);
    printf("\nArray after insertion :\n");
    for (i = 0; i < n; i++)
    {
        if (i == pos)
        {
            for (j = n - 1; j >= i; j--)
            {
                a[j + 1] = a[j];
            }
        }
    }
    a[pos] = num;
    n = n + 1;
    printArray(a, 6);
}

void deletion()
{
    int i, j, n = 5;
    printf("\nArray before deletion :\n");
    printArray(a, 5);
    int num;
    printf("\nEnter the element you want to delete : ");
    scanf("%d", &num);
    printf("\nArray after deletion :\n");
    for (i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            for (j = i + 1; j < n; j++)
            {
                a[j - 1] = a[j];
            }
        }
    }
    n = n - 1;
    printArray(a, n);
}
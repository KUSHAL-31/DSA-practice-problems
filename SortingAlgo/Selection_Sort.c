#include <stdio.h>

int takeInput(int n, int a[])
{
    int i;
    printf("\nEnter the %d elements: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    return a[n];
}

void selection_sort(){
    
}

void algo_type(){
    printf("\n                          ________________________________________\n\n");
    printf("                          SELECTION SORT ALGORITHM IMPLEMENTATION ....\n");
    printf("                          ________________________________________\n\n");
 
}

int main()
{
    algo_type();
    int n, data;
    printf("\nEnter the length of the array : ");
    scanf("%d", &n);
    int a[n];
    a[n] = takeInput(n, a);
    bubble_sort(a, data, n);
    print_array(a, n);
    return 0;
}

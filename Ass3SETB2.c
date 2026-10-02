#include<stdio.h>
#include<string.h>

void merge(char a[][20], int low, int mid, int high)
{
    char b[10][20];
    int i, j, k;

    i = low;
    j = mid + 1;
    k = low;

    while(i <= mid && j <= high)
    {
        if(strcmp(a[i], a[j]) < 0)
        {
            strcpy(b[k], a[i]);
            i++;
        }
        else
        {
            strcpy(b[k], a[j]);
            j++;
        }
        k++;
    }

    while(i <= mid)
    {
        strcpy(b[k], a[i]);
        i++;
        k++;
    }

    while(j <= high)
    {
        strcpy(b[k], a[j]);
        j++;
        k++;
    }

    for(i = low; i <= high; i++)
        strcpy(a[i], b[i]);
}

void mergesort(char a[][20], int low, int high)
{
    int mid;

    if(low < high)
    {
        mid = (low + high) / 2;

        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);

        merge(a, low, mid, high);
    }
}

int main()
{
    char a[10][20];
    int n, i;

    printf("Enter number of words: ");
    scanf("%d", &n);

    printf("Enter words ending with at or an:\n");
    for(i = 0; i < n; i++)
        scanf("%s", a[i]);

    mergesort(a, 0, n - 1);

    printf("Sorted words:\n");
    for(i = 0; i < n; i++)
        printf("%s\n", a[i]);

    return 0;
}

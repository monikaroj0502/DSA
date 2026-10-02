#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[5][50], temp[50];
    int i, j, min;
    
    printf("Enter 5 words:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%s", a[i]);
    }

    // Selection Sort
    for(i = 0; i < 4; i++)
    {
        min = i;

        for(j = i + 1; j < 5; j++)
        {
            if(strcmp(a[j], a[min]) < 0)
            {
                min = j;
            }
        }

        strcpy(temp, a[i]);
        strcpy(a[i], a[min]);
        strcpy(a[min], temp);
    }

    printf("\nWords in alphabetical order:\n");

    for(i = 0; i < 5; i++)
    {
        if(a[i][0] == 'a' || a[i][0] == 'e' ||
           a[i][0] == 'i' || a[i][0] == 'o' ||
           a[i][0] == 'u' ||
           a[i][0] == 'A' || a[i][0] == 'E' ||
           a[i][0] == 'I' || a[i][0] == 'O' ||
           a[i][0] == 'U')
        {
        	
        for(i=0; i<5; i++)
          {
		  printf("%s\n", a[i]);
          }
	    }
    }

    return 0;
}

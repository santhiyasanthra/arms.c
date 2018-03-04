#include <stdio.h>
#include <string.h>
 
int main()
{
    char word[50];
    int count=1,i;
    scanf("%[^\n]s", &word);
    for (i = 0;word[i] != '\0';i++)
    {
        if (word[i] == ' ')
            count++;    
    }
    printf("%d\n", count);
    return 0;
}

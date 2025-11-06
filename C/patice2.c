#include <stdio.h>

void toggleCase(char * str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }

        i++;
    }
}


int main()
{
    char str[50];
    printf("Enter any string: ");
    gets(str);

    printf("String before toggling case: %s\n", str);

    toggleCase(str);

    printf("String after toggling case: %s\n", str);

    getch();
}





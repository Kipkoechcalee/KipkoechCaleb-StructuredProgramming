#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char Str[50];


    printf("Enter a string: ");
    scanf("%s", &Str);
    printf("%s", Str);
    printf("\nThe length is %zu",strlen(Str));

    return 0;
}

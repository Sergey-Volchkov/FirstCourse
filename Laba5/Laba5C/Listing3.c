#include <stdio.h>

#include <string.h>

int main(void)

{

    char mystring1[255];

    char mystring2[255];

    scanf("%s", &mystring1);

    scanf("%s", &mystring2);

    printf("%s\n", strcat(mystring1, mystring2)); /*складывает строки*/

    return 0;

}
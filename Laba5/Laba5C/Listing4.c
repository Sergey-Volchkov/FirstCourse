#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[255];
    printf("Введите какие-либо символы: ");
    scanf("%s", &str);
    printf("Обычная строка: %s\n", str);
    int i;
    for(i = 0; str[i]; i++)
    {
        str[i] = tolower(str[i]);
    }
    printf("Преобразование в строку с нижним регистром букв: %s\n", str);
    int j;
    for(j = 0; str[j]; j++)
    {
        str[j] = toupper(str[j]);
    }
    printf("Преобразование в строку с верхним регистром букв: %s\n", str);
    return 0;
}
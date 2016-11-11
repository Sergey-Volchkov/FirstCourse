
#include <stdio.h>
#include <string.h>
int main (void)
{

    char org [110]="345301234567893453000034530123";

    char dst [255];
    int i = 0,j;
    double distance_dst, difference,dst_and_dif;
    char *string;
    scanf("%s", &dst);
    string = strstr(org, dst);
    while (string != NULL) {
        string = strstr(org, dst); /* нашли совпадение, если нет то нулл*/
        distance_dst = strlen(dst); /* находим длину строки-шаблона*/
        difference = string - org;/*находим разницу между длинами количеством знаков в оставшейся строке и оригинальной */
        dst_and_dif = distance_dst + difference; /* сумма длин строки-шаблона и разницы*/
        for (j = 0; j <= dst_and_dif; ++j) {
            memset(org,'_',j);
            if (j == dst_and_dif){
                printf("Сам массив:%s\n Количество символов(длина) в строке-шаблоне:%.0lf\n Разница индексов(длина):%.0lf\n Сумма длин:%.0lf\n", org,distance_dst,difference,dst_and_dif);
                i +=1;
            }
        }


    }
    printf("Количество найденных совпадений:%i\n", i);
    if ( string == NULL)
        printf ("Строка не найдена\n");

    return 0;
}
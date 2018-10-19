
#include<stdio.h>
#include<stdlib.h>

int main(){

FILE *info;

char name1[]="info.txt";
    if((info = fopen(name1, "r"))!= NULL){
    }
    else
    {
    printf("Не удалось открыть файл Info!\n");
    }

FILE *cashe;

char name2[] = "cashe.txt";
    if((cashe = fopen(name2, "a"))!= NULL){
    }
    else
    {
        printf("Не удалось открыть файл Cashe!\n");
    }

    char s[50];
    char *q;


    char phrase[4];

    printf("Введите фразу\n");
    scanf("%s",phrase);
    printf("\nПеревод на азбуку Морзе:");

    for(int i=0;i<sizeof(phrase);i++){
        fopen(name1,"r");
        while (1)
        {
            q = fgets (s,sizeof(s),info);
            if (q == NULL)
            {
                if ( feof (info) != 0)
                {
                    fclose(info);
                    break;
                }
                else
                {
                    break;
                }
            }
            if(phrase[i] == q[0]) {
               //for(int j = 1;j < sizeof(q);j++)
                printf("%s",q);
                break;
            }
        }
        fclose(info);

    }


    fclose(cashe);


return 0;
}
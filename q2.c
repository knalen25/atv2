#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char time1[30], time2[30];
    char overT1[11][2][30];
    char overT2[11][2][30];

    char* token;

    float media1 = 0, media2 = 0;
    float valor1 = 0, valor2 = 0, valor5 = 0, valor6 = 0, valor8 = 0, valor10 = 0;
    float v1 = 0, v2 = 0, v5 = 0, v6 = 0, v8 = 0, v10 = 0;

    fgets(time1, 30, stdin);
    time1[strcspn(time1, "\n")] = 0;
    for (int i = 0; i < 11; i++) {
        fgets(overT1[i][0], 30, stdin);
        token = strtok(overT1[i][0], ";");
        for (int j = 0; j < 2; j++) {
            token = strtok(NULL, ";");
            //printf(" %s", token);
            strcpy(overT1[i][j], token);
        }

        if (strcmp(overT1[i][0], "G") == 0) {
            valor1 = 8 * atoi(overT1[i][1]);
        } else if (strcmp(overT1[i][0], "L") == 0) {
            valor2 += 10 * atoi(overT1[i][1]);
        }else if (strcmp(overT1[i][0], "Z") == 0) {
            valor6 += 5 * atoi(overT1[i][1]); 
        }else if (strcmp(overT1[i][0], "V") == 0) {
            valor5 += 8 * atoi(overT1[i][1]);
        } else if (strcmp(overT1[i][0], "M") == 0) {
            valor8 += 11 * atoi(overT1[i][1]);
        } else if (strcmp(overT1[i][0], "A") == 0) {
            valor10 += 12 * atoi(overT1[i][1]);
        }
    }

    media1 = (valor1 + valor2 + valor5 + valor6 + valor8 + valor10) / 100;
    //printf("%.2f\n", media1);

    fgets(time2, 30, stdin);
    time2[strcspn(time2, "\n")] = 0;
    for (int i = 0; i < 11; i++) {
        fgets(overT2[i][0], 30, stdin);
        token = strtok(overT2[i][0], ";");
        for (int j = 0; j < 2; j++) {
            token = strtok(NULL, ";");
            //printf(" %s", token);
            strcpy(overT2[i][j], token);
        }

        if (strcmp(overT2[i][0], "G") == 0) {
            v1 += 8 * atoi(overT2[i][1]);
        } else if (strcmp(overT2[i][0], "L") == 0) {
            v2 += 10 * atoi(overT2[i][1]);
        } else if (strcmp(overT2[i][0], "Z") == 0) {
            v6 += 5 * atoi(overT2[i][1]);
        }else if (strcmp(overT2[i][0], "V") == 0) {
            v5 += 8 * atoi(overT2[i][1]);
        } else if (strcmp(overT2[i][0], "M") == 0) {
            v8 += 11 * atoi(overT2[i][1]);
        } else if (strcmp(overT2[i][0], "A") == 0) {
            v10 += 12 * atoi(overT2[i][1]);
        }
    }

    media2 = (v1 + v2 + v5 + v6 + v8 + v10) / 100;
    //printf("%.2f\n", media2);


    printf("%s: %.2f de forca\n", time1, media1);
    printf("%s: %.2f de forca\n", time2, media2);

    if (media1>media2)
    {
        printf("%s eh mais forte\n", time1);
    }
    else
    {
        printf("%s eh mais forte\n", time2);
    }
    
    

    return 0;
}

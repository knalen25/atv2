#include <stdio.h>
#include <string.h>

int main(){
    char overT1[11][2][30];
    char overT2[11][2][30];
    char time1[30], time2[30];
    int peso;
    char* token;
    float media; 
    float valor1, valor2, valor3, valor4, valor5, valor6, valor7, valor8, valor9, valor10, valor11;

    fgets(time1, 30, stdin);
        for (int i = 0; i < 11; i++)
        {   
            fgets(overT1, 30, stdin);
            token = strtok(overT1, ";");
            for (int j = 0; j < 2; j++)
            {
                token = strtok(NULL, ";");
                printf(" %s", token);
                strcpy(overT1[i][j], token);
            }

        }

        for (int i = 0; i < 11; i++)
        {
                if (strcmp(overT1[0][0], "G") == 0)  //overT1[i][0] == G
                {
                    
                    valor1 = atoi(overT1[0][1]);
                }
                
                if (strcmp(overT1[1][0], "L") == 0)  //overT1[i][0] == G
                {
                    
                    valor2 = atoi(overT1[1][1]);
                }

                if (strcmp(overT1[2][0], "Z") == 0)  //overT1[i][0] == G
                {
                    
                    valor3 = atoi(overT1[2][1]);
                }

                if (strcmp(overT1[3][0], "Z") == 0)  //overT1[i][0] == G
                {
                    
                    valor4 = atoi(overT1[3][1]);
                }

                if (strcmp(overT1[4][0], "L") == 0)  //overT1[i][0] == G
                {
                    
                    valor5 = atoi(overT1[4][1]);
                }

                if (strcmp(overT1[5][0], "V") == 0)  //overT1[i][0] == G
                {
                    
                    valor6 = atoi(overT1[5][1]);
                }

                if (strcmp(overT1[6][0], "V") == 0)  //overT1[i][0] == G
                {
                    
                    valor7 = atoi(overT1[6][1]);
                }

                if (strcmp(overT1[7][0], "M") == 0)  //overT1[i][0] == G
                {
                    
                    valor8 = atoi(overT1[7][1]);
                }

                if (strcmp(overT1[8][0], "M") == 0)  //overT1[i][0] == G
                {
                    
                    valor9 = atoi(overT1[8][1]);
                }

                if (strcmp(overT1[9][0], "A") == 0)  //overT1[i][0] == G
                {
                    
                    valor10 = atoi(overT1[9][1]);
                }

                if (strcmp(overT1[10][0], "A") == 0)  //overT1[i][0] == G
                {
                    
                    valor11 = atoi(overT1[10][1]);
                }

        }
         
        media = (8*valor1 + (valor2 + valor5)*10 + 5*(valor3+valor4) + 8*(valor6 + valor7) + 11*(valor8 + valor9) + 12*(valor10 + valor11))/100; 
        printf("%.2f", media);
        
    
    fgets(time2, 30, stdin);
        



}

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
                if (strcmp(overT1[i][0], "G") == 0)  //overT1[i][0] == G
                {
                    
                    valor1 = 8*atoi(overT1[i][1]);
                }
                
                if (strcmp(overT1[i][0], "L") == 0)  //overT1[i][0] == G
                {
                    
                    valor2 = 10*atoi(overT1[i][1]);
                }

                if (strcmp(overT1[i][0], "Z") == 0)  //overT1[i][0] == G
                {
                    
                    valor3 = 5*atoi(overT1[i][1]);
                }

                if (strcmp(overT1[i][0], "Z") == 0)  //overT1[i][0] == G
                {
                    
                    valor4 = 5*atoi(overT1[i][1]);
                }

                if (strcmp(overT1[i][0], "L") == 0)  //overT1[i][0] == G
                {
                    
                    valor5 = 10*atoi(overT1[i][1]);
                }

                if (strcmp(overT1[i][0], "V") == 0)  //overT1[i][0] == G
                {
                    
                    valor6 = 8*atoi(overT1[i][1]);
                }

                if (strcmp(overT1[i][0], "V") == 0)  //overT1[i][0] == G
                {
                    
                    valor7 = 8*atoi(overT1[i][1]);
                }

                if (strcmp(overT1[i][0], "M") == 0)  //overT1[i][0] == G
                {
                    
                    valor8 = 11*atoi(overT1[i][1]);
                }

                if (strcmp(overT1[i][0], "M") == 0)  //overT1[i][0] == G
                {
                    
                    valor9 = 11*atoi(overT1[i][1]);
                }

                if (strcmp(overT1[i][0], "A") == 0)  //overT1[i][0] == G
                {
                    
                    valor10 = 12*atoi(overT1[i][1]);
                }

                if (strcmp(overT1[i][0], "A") == 0)  //overT1[i][0] == G
                {
                    
                    valor11 = 12*atoi(overT1[i][1]);
                }

        }
         
        media = (valor1 + valor2 + valor3 + valor4 + valor5 + valor6 + valor7 + valor8 + valor9 + valor10 + valor11)/100; 
        printf("%.2f", media);
        
    
    /*fgets(time2, 30, stdin);
        
        for (int i = 0; i < 11; i++)
        {   
            fgets(overT2, 30, stdin);
            token = strtok(overT2, ";");
            for (int j = 0; j < 2; j++)
            {
                token = strtok(NULL, ";");
                printf(" %s", token);
                strcpy(overT2[i][j], token);
            }

        }*/

        



}

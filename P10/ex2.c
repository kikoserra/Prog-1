#include <stdio.h>
#define DIAS 8
#define TAREFAS 5

typedef struct {    
    char trab;                                       
    int tar;                                              
    int tarC;                                                                          
} valor;

int main()
{
    int i, k, j, total;  //contadores
    int trab=0, tar=0, tarC=0;
    char tarefa;
    int trabalhadores[DIAS], dia[DIAS][2];

    valor maior;

    for(i=0; i<DIAS; i++)
    {
        trabalhadores[i]=0;
        dia[i][0]=0;              //inicializar vetores a 0  -->  importante para as contagens
        dia[i][1]=0;
    }

    FILE *f;
    f=fopen("tarefas.txt", "r");

    for(i=0; i<TAREFAS; i++)  //ciclo que percorre cada linha do ficheiro .txt
    {
        total = 0;

        fscanf(f, "%c ", &tarefa);
        j=-1;
        do {
            j++;                                        //                                                         dia correspondente
            fscanf(f, "%d ", &trabalhadores[j]);        //scan completo a uma linha do ficheiro                                 /
        } while(trabalhadores[j]!=-1);                  //letra armazenada em 'tarefa' e valores armazenados em 'trabalhadores[j]'

        for(k=0; k<j+1; k++)  //ciclo que percorre os dias que demorou a concluir a 'tarefa'
        {
            if(trabalhadores[k]>0) 
            {
                total+=trabalhadores[k];    //guarda o total de trabalhadores que trabalharam em 'tarefa'
                dia[k][0]++;                //aumenta sempre que é feita uma tarefa diferente naquele dia(k)
            }
            if(trabalhadores[k]==-1) dia[k][1]++;    //aumenta sempre que uma tarefa é concluída naquele dia(k)
        }

        if(total>trab)
        {
            trab = total;
            maior.trab = tarefa;    //analisa qual foi a tarefa com mais trabalhadores
        }
    }

    fclose(f);

    for(i=0; i<DIAS; i++)
    {
        if(dia[i][0]>tar)           //analisa qual foi o dia(i) com mais tarefas feitas
        {
            tar=dia[i][0];          
            maior.tar = i+1;
        }

        if(dia[i][1]>tarC)          //analisa qual foi o dia(i) com mais tarefas concluídas
        {
            tarC=dia[i][1];
            maior.tarC = i;
        }
    }

    printf("Dia com mais tarefas: %d\n", maior.tar);
    printf("Dia com mais tarefas concluídas: %d\n", maior.tarC);
    printf("Tarefa com mais trabalhadores: %c\n", maior.trab);

    return 0;
}
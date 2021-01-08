#include <stdio.h>
int hoursMin(int totalMins, int *hours, int *min){
    *hours = totalMins / 60;
    *min = totalMins % 60;
    if (*hours < 24)
        return 1;
    else 
        return 0;
}

int main(){
    int min, hours, totalmin;
    printf("Insira o número total de minutos: \n");
    scanf("%d", &totalmin);
    if(hoursMin(totalmin, &hours, &min)){
        printf("%d minutos correspondem a %d h: %d m e não é superior a 1 dia\n", totalmin, hours, min);
    }
    else 
        printf("%d minutos correspondem a %d h: %d m e é superior a 1 dia\n", totalmin, hours, min);

    return 0;
}
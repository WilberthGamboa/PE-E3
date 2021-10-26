#include <stdio.h>



int main(){
    int sumatoria=0;
    int numeroActual=0; 
    bool estado=true;
    do
    {
        if(estado){
            numeroActual=numeroActual+2;
            estado=false;
        }else{
            numeroActual=numeroActual+3;
            estado= true;
        }
        printf("%5d",numeroActual);
        sumatoria=sumatoria+numeroActual;
    } while (numeroActual<1800);
    printf("La sumatoria es:%d",sumatoria);
    

    /*
    int opcion;
    opcion=getchar();
    if(opcion=='a'){
        printf("Tu puta madre\n");
    }
    */

    return 0;
}
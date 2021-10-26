/* Gamboa Campos Wilberth Manuel LIS EXAMEN 2 11 DE JUNIO 2021
Maestra: Maria Enriqueta Castellanos Bolaños */

#include <stdio.h>

#define MAX 10

//funciones maestra
bool validar(int orden);
void leerArreglo(int arreglo[][MAX],int orden);
void calcularTranspuesta(int arreglo[][MAX],int orden);
void imprimirArreglo(int arreglo[][MAX],int orden);

//funcion principal 

int main(){

    //variables
    int n;
    int matriz[MAX][MAX];

    //estructura do while, validar MAXIMO 10 X 10
    do{
        printf("Inserte de cuanto es la matriz cuadrada\n");
        printf("Este valor tiene que ser entre el 1 y el 10\n");
        scanf("%d",&n);
    }while(validar(n));


    //pedir arreglo
    printf("Inserte el arreglo:\n");
    leerArreglo(matriz,n);


    //calcular la transpuesta
    calcularTranspuesta(matriz,n);


    //Imprimir matriz
    printf("La matriz transpuesta es:\n");
    imprimirArreglo(matriz,n);




    return 0;
}

bool validar(int orden){

    bool respuesta;
    if(orden<1 || orden>10){
        respuesta=true;
    }
    else{
        respuesta=false;
    }

    return respuesta;
}



void leerArreglo(int arreglo[][MAX],int orden){
    int i,j;
    for(i=0;i<orden;i++){
        for(j=0;j<orden;j++){
            printf("Matriz[%d][%d]:",i,j);
            scanf("%d",&arreglo[i][j]);
        }
    }

}


void calcularTranspuesta(int arreglo[][MAX],int orden){
    int aux,i,j;
    for(i=0;i<orden;i++){
        for(j=0;j<i;j++){
            aux= arreglo[i][j];
            arreglo[i][j]=arreglo[j][i];
            arreglo[j][i]=aux;
        }
    }
}



void imprimirArreglo(int arreglo[][MAX],int orden){
    int i,j;
    for(i=0;i<orden;i++){
        for(j=0;j<orden;j++){
            printf("%5d",arreglo[i][j]);
        }
        printf("\n");
    }
}


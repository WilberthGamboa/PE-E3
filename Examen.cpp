

#include <stdio.h>

#include <string.h>
#define MAX_CARACTERES 5

//funciones maestra

bool validar(char *ptrFrase);
int convertir(char *ptrFrase);
void imprimir(char*ptrFrase);



int main(){

    char frase[MAX_CARACTERES];
    do{
        printf("Ingrese la frase, (25 caracteres incluyendo caracter nulo)\n");
        gets(frase);

    }while(validar(frase));

    return 0;


}

bool validar(char *ptrFrase){
    if((*ptrFrase=='\0') || (strlen(ptrFrase)>=MAX_CARACTERES)){
        return true;
    }
    
    return false;

    
}


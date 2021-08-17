
#include <stdio.h>

#include <string.h>

#include <ctype.h>
#define MAX_CARACTERES 25

//funciones maestra

bool validar(char *ptrFrase);
int convertir(char *ptrFrase);
void imprimir(char*ptrFrase);



int main(){

    //variables

    char frase[MAX_CARACTERES];
    int vocales;
    //cumplir condiciones 
    do{
        printf("Ingrese la frase, (25 caracteres incluyendo caracter nulo)\n");
        gets(frase);

    }while(validar(frase));

    vocales=convertir(frase);
    
    printf("\nEl numero total de vocales es %d",vocales);

    return 0;


}

bool validar(char *ptrFrase){
    if((*ptrFrase=='\0') || (strlen(ptrFrase)>=MAX_CARACTERES)){
        return true;
    }
    
    return false;
}

int convertir(char *ptrFrase){
    int acumulador=0;

    while(*ptrFrase!='\0'){

        switch (*ptrFrase){
        
        case 'A':
        
        case 'E':

        case 'I': 

        case 'O': 

        case 'U':
        acumulador++;

        break;

        case 'a':
        
        case 'e':

        case 'i': 

        case 'o': 

        case 'u':
        *ptrFrase=toupper(*ptrFrase);
        acumulador++;
        break;
         
        
        }
        
        ptrFrase++;
        
    }
    return acumulador;

    
}


void imprimir (char *ptrFrase){
  int i;
printf("La frase transformada es: ");
   for(i=0;i<strlen(ptrFrase);i++){
        putchar(*(ptrFrase+i));
    }
    
}
    
    


    



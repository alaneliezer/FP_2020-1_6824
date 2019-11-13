#include<stdio.h>
#include<string.h>
int main(){
    
    FILE *archivo, *archivosalida;
    
    char palabra [20], linea[100];
    printf("Nombre del archivo\n");
    char nombre[30];
    scanf("%s",nombre);
    char nombresalida[30];
    printf("Nombre del archivo nuevo\n");
    scanf("%s",nombresalida);
    
    archivo=fopen(nombre,"r");
    int contadorlineas=0;
    
    while(!feof(archivo)){
        fgets(linea,100,archivo);
        printf("%s",linea);
        contadorlineas++;
    }
    
    printf("\n numero de lineas: %i\n",contadorlineas);
    int contadorpalabras=0;
    
    archivo=fopen(nombre,"r");
    while(!feof(archivo)){
        fscanf(archivo,"%8s",palabra);
        contadorpalabras++;
    }
    
     printf("\n numero de palabras: %i\n",contadorpalabras);
     archivo=fopen(nombre,"r");
     int contadorcaracteres=0,npalabra;
     
      while(!feof(archivo)){
          fscanf(archivo,"%8s",palabra);
          npalabra=strlen(palabra);
          contadorcaracteres=contadorcaracteres+npalabra;
      }
      printf("\n numero de palabras: %i\n",contadorcaracteres);
     archivo=fopen(nombre,"r"); 
    archivosalida=fopen(nombresalida,"w");
    
    char listaarchivo[contadorlineas][100];
    
    for(int i=contadorlineas-1;i!=-1;i--){
        fgets(listaarchivo[i],100,archivo);
    }
    
    for(int i=0;i<contadorlineas;i++){
        if(i==0){
            fprintf(archivosalida,"%s\n",listaarchivo[i]);
        }
        else{
            fprintf(archivosalida,"%s",listaarchivo[i]);
        }
    }
    return 0;
    
}
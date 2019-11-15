#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argu[]){
	//hacemos la lista de enteros
	int numeros[argc-1];
	//usamos dos indices y una variable 
	int i=0, j=1,numero;
	while(i<argc-1){
		//se copia la argu a la nueva lista
		numero=atoi(argu[j]);
		numeros[i]=numero;
		i++;
		j++;
	}
	//necesitamos esta variable para no perder datos
	int temporal;
	for (i=1;i<argc-1;i++){
		for (j=0;j<argc-1-i;j++){ 
			//se intercambian numeros de la forma adecuada si no estan ordenados
			if(numeros[j]>numeros[j+1]){
				//se guarda en temporal
				temporal=numeros[j];
				//se hace retroceder el numero siguiente
				numeros[j]=numeros[j+1];
				//se cambia el siguiente por el que guardamos en el temporal
				numeros[j+1]=temporal;
          }
       }
	}
	//con este for se imprime
	for (int i=0;i<argc-1;i++){
		printf("%i\n",numeros[i]);
	}
}
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char*argu[]){
	double resultado;
	double arguf[argc];
	for(int i=1;i<argc;i++){
		resultado=1;
		for(int j=1;j<argc;j++){
			arguf[j]=atof(argu[j]);
			resultado=resultado*arguf[j];
		}
		resultado=resultado/arguf[i];
		printf("%.2f\n",resultado);
	}
	return 0;
}
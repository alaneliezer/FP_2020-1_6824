#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argu[]){
    int resultado;
    int argui[argc];
    
    for(int i=1;i<argc;i++){
    resultado=1;
    
    for(int j=1;j<argc;j++){
    argui[j]=atoi(argu[j]);
    resultado=resultado*argui[j];
    }
    
resultado=resultado/argui[i];
printf("%i\n",resultado);
}
return 0;
}
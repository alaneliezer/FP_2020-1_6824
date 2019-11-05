#include <stdio.h>
#include<stdlib.h>

int main(int argc,char* argu[]){
    float n1,n2,resultado=1;
    n1= atof(argu[1]);
    n2= atof(argu[2]);
    
    for(int a=1;a<=n2;a++){
        resultado=resultado*n1;
    }
    printf("%.2f",resultado);
    return 0;
}
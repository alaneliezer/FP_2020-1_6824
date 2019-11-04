#include <stdio.h>
#include <stdlib.h>
int main(int argc,char*argu[]){
float n1,n2,resultado;
    n1= atof(argu[1]);
    n2= atof(argu[2]);
if(n1==0){
    resultado=(n2*1.8)+32;
    printf("%.2f",resultado);
}
if(n1==1){
    resultado=(n2-32)/1.8;
     printf("%.2f",resultado);
}
return 0;
}
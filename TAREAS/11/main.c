 #include<stdio.h>
 #include<stdlib.h>
 //declaramos la funcion raiz
 double raiz(double num, double tolerancia, double resultado){
     double division,diferencia;
//algoritmo para usar una raiz
     division=num/resultado;
     diferencia=resultado-division;
//si la diferencia es menor o igual que la tolerancia, se regresa el resultado
     diferencia=diferencia> 0? diferencia:-diferencia;
     
     if(diferencia<=tolerancia){
         return resultado;
     }
     
     else{
//se busca un nuevo candidato
         resultado=(resultado+division)/2;
//se regresa el valor con el nuevo candidato
         return raiz(num,tolerancia,resultado);
     }

     }
     
int main (int argc, char*argu[]){
    double num,tolerancia,resultado;
//los argumerntos se guardan en otras variables tipo float
    num=atof(argu[1]);
    tolerancia=atof(argu[2]);
    resultado=atof(argu[3]);
    resultado=raiz(num,tolerancia,resultado);
    printf("%lf\n",resultado);
    
}
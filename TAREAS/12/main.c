#include<stdio.h>
 #include<stdlib.h>
 //declaramos la funcion saludo de personas
 int saludos(int personas){
     int total,saludo;
//el saludo son las personas menos el que da el saludo
     saludo=personas-1;
//si solo hay una persona no hay saludos, este es nuestro caso base
     if (saludo==0){
// regresa valor
         return saludo;
         
     }
//la suma total de los saludos
     total=saludo+saludos(personas-1);
//regresa el valor total de saludos
     return total;
 }
 int main(int argc, char *argu[]){
     int resultado,personas;
//se utiliza el primer argumento
     personas=atoi(argu[1]);
//se llama a la funcion 
     resultado=saludos(personas);
     printf("%i\n",resultado);
     return 0;
 }
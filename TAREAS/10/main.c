#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//funcion para raices reales positivas
void raicesR(double a, double b, double c, double determinante){
    double x1,x2;
    double parte;
    parte=sqrt(determinante);
    x1=(-b/2*a)+(parte/2*a);
    x2=(-b/2*a)-(parte/2*a);
    printf("%.2lf\n",x1);
    printf("%.2lf\n",x2);
} 
//funcion para raices imaginarias
void raicesI(double a, double b, double c, double determinante){
  // se usa el signo menos para evitar hace la raiz con un numero negativo
  double x11,x12,x21,x22;
  double parte;
  parte=sqrt(-determinante); 
  x11=(-b/2*a); 
  x12=parte/(2*a);
  x21=(-b/2*a); 
  x22=parte/(2*a);
  if(b==0){
      x11=0;
      x22=0;
  }
  //imprimimos los imaginarios con i
  printf("%.2lf+%.2lfi\n",x11,x12);
  printf("%.2lf+%.2lfi\n",x21,x22);
}
//imprime si es que solo hay una solucion

void raizunica(double a,double b){
double a1;
 a1=(-b/2*a);
printf("%.2lf\n",a1);
}
int main(int argc, char* argu[]){
   double a,b,c,determinante;
   a=atof(argu[1]);
   b=atof(argu[2]);
   c=atof(argu[3]);
   //el determinante
   determinante=pow(b,2);
   determinante=determinante-(4*a*c);
//describimos los posibles casos
if (determinante==0){
    raizunica(a,b);
}
else{
    if (determinante>0){
        raicesR(a,b,c,determinante);
    }
    else{
        raicesI(a,b,c,determinante);
    }
}
return 0;
}
  
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argu[]){
    float n1,n2;
    n1= atof(argu[1]);
    n2= atof(argu[2]);
    printf("%.2f\n",n1+n2);
    printf("%.2f\n",n1-n2);
    printf("%.2f\n",n1*n2);
    printf("%.2f\n",n1/n2);
    return 0;
}
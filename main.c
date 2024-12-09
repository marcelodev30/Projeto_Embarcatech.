#include <stdio.h>

void main(){
    printf("Hello Horld\n");


    struct Aluno
    {
        char name[50];
        int matricula;
        float nota;
    };
    

    struct Aluno marcelo ={"Marcelo Alves",202312040020,10.0};
    printf(marcelo.name);
    
   
    
}
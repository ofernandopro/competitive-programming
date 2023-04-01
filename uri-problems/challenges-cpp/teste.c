#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char sexo[40];
    char cargo[6];
    char salario[20];
} ender;

typedef struct {
    char nome[8];
    char idade[30];
    ender ender1;
    char cargo[20];
    int numdep;
    float salario;
    char dtadm[8];
} structTfuncionario;

int main() {

    structTfuncionario func;

    printf("nome: ");
    gets(func.nome);
    printf("idade: ");
    gets(func.idade);
    printf("sexo: ");
    gets(func.ender1.sexo);
    printf("cargo: ");
    gets(func.ender1.cargo);
    printf("salario: ");
    gets(func.ender1.salario);

    printf("Nome = %s\n", func.nome);
    printf("idade = %s\n", func.idade);
    printf("sexo = %s\n", func.ender1.sexo);
    printf("cargo = %s\n", func.ender1.cargo);
    printf("salario = %s\n", func.ender1.salario);

    return 0; 

}
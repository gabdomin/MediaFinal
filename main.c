#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
// DECLARA��O DE PONTUA��O E ACENTUA��O EM PORTUGU�S
  setlocale(LC_ALL, "Portuguese");

//DECLARA��O DAS VARI�VEIS
  float nota1, nota2, nota3, nota4, medFinal;


  printf("==================================\n");
  printf("===== SISTEMA DE M�DIA FINAL =====\n");
  printf("==================================\n\n\n");

//INSER��O DOS VALORES
  printf("Insira a nota da prova 1: \n");
    scanf("%f", &nota1);

  printf("Insira a nota da prova 2: \n");
    scanf("%f", &nota2);

  printf("Insira a nota da prova 3: \n");
    scanf("%f", &nota3);

  printf("Insira a nota da prova 4: \n");
    scanf("%f", &nota4);

//C�LCULO DA M�DIA
  medFinal = (nota1 + nota2 + nota3 + nota4) / 4;

//LIMPA A TELA
  system("cls");

  printf("================================================\n");
  printf("============ SISTEMA DE M�DIA FINAL ============\n");
  printf("================================================\n\n");

//MOSTRA O VALOR DO C�LCULO
  printf("SUA M�DIA FINAL �: %.2f\n\n", medFinal);

//APRESENTA UMA CONDI��O SE O ALUNO FOI APROVADO OU N�O
  if(medFinal >= 7)
  {
      printf("================================================\n");
      printf("========= PARAB�NS VOC� FOI APROVADO!!! ========\n");
      printf("================================================\n\n\n");
  }
  else
  {
      printf("================================================\n");
      printf("====== INFELIZMENTE VOC� FOI REPROVADO!!! ======\n");
      printf("================================================\n");
      printf("========= ESTUDE MAIS E N�O DESANIME!!! ========\n");
      printf("================================================\n\n\n");
  }

  system("pause");

  return 0;
}

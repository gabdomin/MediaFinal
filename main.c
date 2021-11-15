#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
// DECLARAÇÃO DE PONTUAÇÃO E ACENTUAÇÃO EM PORTUGUÊS
  setlocale(LC_ALL, "Portuguese");

//DECLARAÇÃO DAS VARIÁVEIS
  float nota1, nota2, nota3, nota4, medFinal;


  printf("==================================\n");
  printf("===== SISTEMA DE MÉDIA FINAL =====\n");
  printf("==================================\n\n\n");

//INSERÇÃO DOS VALORES
  printf("Insira a nota da prova 1: \n");
    scanf("%f", &nota1);

  printf("Insira a nota da prova 2: \n");
    scanf("%f", &nota2);

  printf("Insira a nota da prova 3: \n");
    scanf("%f", &nota3);

  printf("Insira a nota da prova 4: \n");
    scanf("%f", &nota4);

//CÁLCULO DA MÉDIA
  medFinal = (nota1 + nota2 + nota3 + nota4) / 4;

//LIMPA A TELA
  system("cls");

  printf("================================================\n");
  printf("============ SISTEMA DE MÉDIA FINAL ============\n");
  printf("================================================\n\n");

//MOSTRA O VALOR DO CÁLCULO
  printf("SUA MÉDIA FINAL É: %.2f\n\n", medFinal);

//APRESENTA UMA CONDIÇÃO SE O ALUNO FOI APROVADO OU NÃO
  if(medFinal >= 7)
  {
      printf("================================================\n");
      printf("========= PARABÉNS VOCÊ FOI APROVADO!!! ========\n");
      printf("================================================\n\n\n");
  }
  else
  {
      printf("================================================\n");
      printf("====== INFELIZMENTE VOCÊ FOI REPROVADO!!! ======\n");
      printf("================================================\n");
      printf("========= ESTUDE MAIS E NÃO DESANIME!!! ========\n");
      printf("================================================\n\n\n");
  }

  system("pause");

  return 0;
}

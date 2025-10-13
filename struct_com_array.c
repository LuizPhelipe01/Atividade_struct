#include <stdio.h>
#include <string.h>

struct Estudante{
	char nome[50];
	int matricula;
	float nota1;
	float nota2;
	float media;
};

int main(){
	struct Estudante aluno[50];
	int quantidade;
	
	printf("Numero de alunos: ");
	scanf("%d", &quantidade);
	if (quantidade > 50 || quantidade <= 0){
		printf("Numero Invalido. \n");
	}
	else {
		for( int i = 0; i < quantidade; i++){
			printf("\nDigite seu nome: ");
			scanf("%s", &aluno[i].nome);
			
			printf("\nDigite seu rgm: ");
			scanf("%d", &aluno[i].matricula);
			
			printf("\nPrimeira nota: ");
			scanf ("%f", &aluno[i].nota1);
			
			printf("\nSegunda nota: ");
			scanf("%f", &aluno[i].nota2);
			
			aluno[i].media= (aluno[i].nota1 + aluno[i].nota2) /2;
			
			printf("sua media e: %.2f \n", aluno[i].media);
			
			if (aluno[i].media >= 6 ){
				printf("Aprovado(a)! \n");
			} else if (aluno[i].media > 4 && aluno[i].media < 6){
				printf("Recuperacao!\n");
			}else{
				printf("Reprovado(a)!");
			}
		}
	}

	return 0;
}
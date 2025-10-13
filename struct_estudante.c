#include <stdio.h>
#include <string.h>

struct Estudante{
	char nome[50];
	int matricula;
	float nota1;
	float nota2;
	float media;
	int quantidade;
};

int main(){
	struct Estudante aluno;
	
	printf("Numero de alunos: ");
	scanf("%d", &aluno.quantidade);
	if (aluno.quantidade >= 50 || aluno.quantidade <= 0){
		printf("Numero Invalido. \n");
	}
	else {
	
		for( int i = 0; i < aluno.quantidade; i++){
	
	
			printf("Digite seu nome: \n");
			scanf("%s", &aluno.nome);
			
			printf("Digite seu rgm: \n");
			scanf("%d", &aluno.matricula);
			
			printf("sua primeira nota: \n");
			scanf ("%f", &aluno.nota1);
			
			printf("sua segunda nota: \n");
			scanf("%f", &aluno.nota2);
			
			aluno.media= (aluno.nota1 + aluno.nota2) /2;
			
			printf("sua media e: %.2f \n", aluno.media);
			
			if (aluno.media >= 6 ){
				printf("Aprovado(a)! \n");
			} else if (aluno.media > 4 && aluno.media < 6){
				printf("Recuperacao!\n");
			}else{
				printf("Reprovado(a)!");
			}
		}
	}
	return 0;
}
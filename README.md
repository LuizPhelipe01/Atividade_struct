# Atividade_struct

## 🧠 O que o programa faz

> Este programa em linguagem C cadastra e avalia estudantes com base em duas notas.
>
> Ele: pergunta quantos alunos serão cadastrados (máx. 50).
>
> Para cada aluno:
>
> Pede o nome e o RGM (matrícula).
>
> Solicita duas notas.
>
> Calcula a média das notas.
>
>Exibe se o aluno está Aprovado, em Recuperação ou Reprovado.
>
>💡 É um exemplo simples de uso de estruturas (structs), laços de repetição (for) e condicionais (if/else) em C.

## 🧩 Tecnologias e recursos utilizados

- Linguagem: C
- Bibliotecas: <stdio.h>, <string.h>
- Conceitos aplicados: Estrutura (struct), Estruturas de controle (if, else if, else, for), Entrada e saída padrão (scanf, printf)

## ⚙️ Como instalar, compilar e executar o código
1. Requisitos

Você precisa de um compilador C, como:

GCC (Linux ou Windows via MinGW)

Dev-C++

Code::Blocks

VS Code com extensão para C/C++

📦 2. Salvando o arquivo

Salve o código em um arquivo com nome, por exemplo:
```
estudantes.c
```
🧰 3. Compilando

No terminal (ou prompt de comando), digite:
```
gcc estudantes.c -o estudantes
```

Isso criará um executável chamado estudantes.

▶️ 4. Executando

Depois, rode o programa:
```
./estudantes
```

ou no Windows:
```
estudantes.exe
```
## 🧮 Exemplo de uso

Entrada:

Numero de alunos: 2
Digite seu nome:
Maria
Digite seu rgm:
123
sua primeira nota:
8.0
sua segunda nota:
6.0


Saída:

sua media e: 7.00
Aprovado(a)!

## 📝 Informações adicionais

> O programa não armazena os dados de vários alunos separadamente — ele reutiliza a mesma variável aluno em cada repetição do for.
>
> O campo quantidade dentro da struct é usado apenas para controle, mas poderia estar fora (não precisa ser parte do aluno).
> 
>O limite de 50 alunos é apenas uma validação simples; poderia ser ajustado facilmente.

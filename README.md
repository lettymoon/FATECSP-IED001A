# Estruturas de Dados

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)

Repositório da disciplina IED001A Estruturas de Dados. FATEC São Paulo. 02/2023

Disciplina ministrada usando a linguagem C.

Professor: Luiz Tsutomu Akamine (DTI-FATECSP)

Material utilizado nas aulas: [Material](https://www.ime.usp.br/~slago/main.fatecsp.ed.html)

## Index

- [Estruturas de Dados](#estruturas-de-dados)
  - [Index](#index)
  - [Instalando](#instalando)
  - [Executando](#executando)
  - [Conteúdo](#conteúdo)
    - [Aulas](#aulas)
  - [Links Didáticos](#links-didáticos)

## Instalando

Antes de começar, garanta que você esta utilizando Linux ou o WSL (Windows Subsystem Linux for Windows)

instale o GCC utilizando o comando `sudo apt install gcc`

## Executando

Para executar entre na pasta a qual está o código utilizando o comando `cd <nome_pasta>`

Execute `gcc <arquivo.c> -o saida` para compilar o código

Finalmente execute `./saida` para executar o código compilado e seja Feliz :)

---
Exemplo prático estando na pasta raiz:

```bash
cd 1-introdução/
gcc test.c -o saida
./saida
```

Saida do programa:

```text
Hello World!
```

## Conteúdo

### Aulas

- [Aula 01: Introdução: abstração, estruturas de dados e linguagem C](01-introducao)
- [Aula 02: Pilhas: fundamentos,operações e implementação](02-pilhas)
- [Aula 03: Expressões: fundamentos, conversão e avaliação](03-expressoes)
- [Aula 04: Filas: fundamentos,operações e implementação](04-filas)
- [Aula 05: Extraclasse - Coloração: representação, exibição e coloração de imagem](05-extraclasse-coloracao)
- [Aula 06: Recursão: funções recursivas](06-recursao)
- [Aula 07: Extraclasse - Ordenação e busca: fundamentos e algoritmos](07-ordenacao-busca)
- [Aula 08: Listas encadeadas: fundamentos e operações](08-lista-encadeada)
- [Aula 09: Listas ordenadas: fundamentos e operações](09-lista-ordenada)
- [Aula 10: Mapeamentos: fundamentos e implementação](10-mapeamento)
- [Aula 11: Dicionários: fundamentos e implementação](11-dicionario)
- [Aula 12: Árvores binárias: fundamentos e implementação recursiva](12-arvore-binaria)
- [Aula 13: Árvores de busca binária: fundamentos e implementação recursiva](13-arvore-busca-binaria)

## Links Didáticos

- [Beecrowd: Estruturas e Bibliotecas](https://www.beecrowd.com.br/judge/pt/problems/index/4)
- [Leetcode: Problems](https://leetcode.com/problemset/all/?sorting=W3sic29ydE9yZGVyIjoiREVTQ0VORElORyIsIm9yZGVyQnkiOiJBQ19SQVRFIn1d)
- [Data Structure Visualizations - University of San Francisco](https://www.cs.usfca.edu/~galles/visualization/Algorithms.html)
- [HackerRank - Data Structures](https://www.hackerrank.com/domains/data-structures)


# Tabela Hash

## Objetivos:

Implementar a tabela hash usando a técnica de encadeamento separado para o tratamento de colisões.

## 📝 Encadeamento separado

Como visto em sala de aula, a técnica de encadeamento separado usa listas encadeadas para o tratamento de colisões. Nesta atividade,
devemos implementar uma tabela hash com encadeamento separado e comparar as diferentes funções hash em relação a distribuição uniforme nos dados na 
tabela e números de colisões.


## O que deve ser feito? 

Uma estrutura básica para a implementação da tabela hash já foi fornecida: 
 - Os arquivos [hash.h](siga/include/hash.h) e [hash.cc](siga/src/hash.cc) .

1. Implementar um tipo abstrato de dados hash com encadeamento separado, com as seguintes rotinas implementadas:
 - create(m, hash): Cria uma tabela de tamanho m que usa a função hash
 - insert(key,data): Insere data com chave key na tabela. A função deve retornar um ponteiro para o elemento inserido. Se data já existir, retorna-se um ponteiro para ele.
 - lookup(key,data): Pesquisa se data com chave key está na tabela. Se estiver, retorna ponteiro para data, caso contrário retorne NULL.
 - destroy(): Remova a tabela hash da memória.
 - 
2. Implemente as funções hash:
 - Divisão
 - Multiplicação 


## Compilação e execução
Configuraçao inicial:

```
cmake -B build 
```
Compilação e execução:

```
cd build 
make
./tests/test_hash
```


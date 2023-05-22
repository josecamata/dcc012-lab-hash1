
# Tabela Hash

## Objetivos 📝

Implementar a tabela hash usando a técnica de encadeamento separado para o tratamento de colisões.
Como visto em sala de aula, a técnica de encadeamento separado usa listas encadeadas para o tratamento de colisões. Nesta atividade,
devemos implementar uma tabela hash com encadeamento separado e comparar as diferentes funções hash em relação a distribuição uniforme nos dados na 
tabela e números de colisões.


## O que deve ser feito? 

Uma estrutura básica para a implementação da tabela hash já foi fornecida: 
 - Os arquivos [hash.h](hash/include/hash.h) e [hash.cc](hash/src/hash.cc) .

1. Implementar um tipo abstrato de dados hash com encadeamento separado, com as seguintes rotinas implementadas:
 - **Hash(m, hash)**: Construtor que cria uma tabela de tamanho m que usa a função hash
 - **insert(key)**: Insere data com chave key na tabela. A função deve retornar um ponteiro para o elemento inserido. Se já existir, retorna-se um ponteiro para ele.
 - **lookup(key)**: Pesquisa se data com chave key está na tabela. Se estiver, retorna ponteiro para ele, caso contrário retorne nullptr.
 - **~Hash()**: Remova a tabela hash da memória.
 
2. Implemente funções hash:
 - Divisão
 - Multiplicação 
 - MyHash (pesquise por um terceira opção de função hash para implementar)
Estas funções devem ser implementadas em [hash_function.h](hash/include/hash_function.h).

3. Verifique se sua implementação passe nos testes básicos na pasta tests.

## Compilação e execução
Configuraçao inicial:

```
cmake -B build 
```
Compilação e execução:

```
cd build 
make
ctest
```


#include <iostream>
#include <vector>

#include "hash.h"

using namespace std;

Hash::Hash(int size, HashFunction* hash_fn)
{
    this->_hash_fn = hash_fn;
    this->_table_size = size;
    this->_n_collisions = 0;
    this->_hash_table.resize(size);
}

Hash::~Hash()
{
   //TODO: Implementar o destrutor
}

int* Hash::insert(int key)
{
    //TODO: Implementar a inserção
    // Chamar a função _hash_fn para calcular o índice
    // 
    // Inserir na lista encadeada que está no índice calculado
    // Atualizar o número de colisões se a lista não estiver vazia
    // Retornar um ponteiro para o valor inserido
    return nullptr;
}

int* Hash::lookup(int key)
{
    //TODO: Implementar a busca
    // Chamar a função hash_fn para calcular o índice
    // Buscar na lista encadeada que está no índice calculado
    // Retornar um ponteiro para o valor buscado
     return nullptr;
}


int Hash::getCollisions()
{
    return this->_n_collisions;
}


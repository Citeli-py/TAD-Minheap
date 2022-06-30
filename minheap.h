#ifndef Heap_H
#define Heap_H

typedef struct heap *Heap;
Heap inicializar();
void inserir(Heap h, int key, void* x, int size);
void remover(Heap h);
void print(Heap h, void f(void* info));
void destruir(Heap h);

#endif
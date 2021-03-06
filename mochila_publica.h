#ifndef MOCHILA_PUBLICA
#define MOCHILA_PUBLICA


#define MAXLOJA 150000

typedef struct Loja Loja;
typedef struct Mochila Mochila;

typedef Mochila * pMochila;
typedef Loja * pLoja;

int CriarMochila(pMochila *M, pLoja L, float proporcao, int Exibe);
int CarregaMochila(pMochila M, pLoja L, int Exibe);
int ImprimeMochila(pMochila M);
int DestruirMochila(pMochila M, int Exibe);

int CriarLoja(pLoja *L, float CapacidadeLoja, int Exibe);
int AddLoja(pLoja L, int ID, float valor, float QtdInicial, int Exibe);
int BubbleSortLoja(pLoja L, int Exibe);
int QuickSortLoja(pLoja L, int Exibe);
int ImprimeLoja(pLoja L);
int DestruirLoja(pLoja L, int Exibe);

#endif
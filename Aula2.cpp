#include <iostream>
#include <conio.h>
using namespace std;

#define MAX 500
typedef int TipoChave;

typedef struct {
    TipoChave chave;
    //nome
    //cpf
    //email
} REGISTRO;

typedef struct {
    REGISTRO A[MAX];
    int numElem;
} LISTA;

void iniLista (LISTA *l);
int qtdElem (LISTA *l);
void imprLista (LISTA *l);
bool insElem (LISTA *l, REGISTRO reg, int i);

int main(){
    int qtd;
    LISTA lista;
    REGISTRO aux;

    iniLista(&lista);
    qtd = qtdElem(&lista);
    cout<<"Quantidade de elementos: "<<qtd<<endl;

    lista.A[0].chave=1;
    lista.A[1].chave=2;
    lista.A[2].chave=3;
    lista.numElem=3;

    imprLista(&lista);
    return 0;
}

void iniLista(LISTA *l){
    l->numElem=0;

}

int qtdElem(LISTA *l){
    return (l->numElem);
}

void imprLista(LISTA *l){
    cout<<"Lista: ";
    for(int i=0;i < l->numElem; i++){
        cout<<l->A[i].chave<<" ";
    }
}

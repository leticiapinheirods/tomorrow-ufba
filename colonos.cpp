#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

struct candidato{
    int nota;
    int id;
};

//ordenação decrescente das notas e crescente do id
bool cmp(candidato a, candidato b){
    return (a.nota > b.nota || a.nota == b.nota && a.id < b.id);
}

int main(){
    
    int N, Q, C, i, p;
    candidato c;
    vector<candidato> candidatos;
    vector<candidato> consultas;
    vector<candidato>::iterator it;
    
    //qtde candidatos que serão selecionados e qtde total de candidatos
    cin >> N >> Q;
    
    //entradas de notas e id
    for(i = 0; i < Q; i++){
        cin >> c.nota >> c.id;
        candidatos.push_back(c);
    }
    
    //qtde de consultas que serão feitas pelos candidatos
    cin >> C;
    
    //entradas das consultas
    for(i=0; i < C; i++){
        cin >> c.nota >> c.id;
        consultas.push_back(c);
    }
    
    //ordenação do vetor de candidatos
    stable_sort(candidatos.begin(), candidatos.end(), cmp);
    
    //saidas
    for(i=0; i < consultas.size(); i++){
        it = lower_bound(candidatos.begin(), candidatos.end(), consultas[i], cmp);
        //encontrando a posição dos elementos em "consultas" no vetor candidatos
        p = it - candidatos.begin();
        if(p < N){
            cout << "Sim" << endl;
        }else{
            cout << "Nao" << endl;
        }
    }
    
    return 0;
    
}
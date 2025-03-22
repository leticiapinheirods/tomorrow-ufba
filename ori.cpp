#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(){

    int N, M, A, P = 0, i;
    vector<pair<int, int>> missoes(100);
    pair<int, int> missao;

    //missoes cumpriddas
    cin >> N;
 
    //entradas do xp de cada missão 
    for (i=0; i<N; i++){
        cin >> missoes[i].first;
    }
    
    //entradas do bonus de cada missão
    for (i=0; i<N; i++){
        cin >> missoes[i].second;
    }
    
    //total de xp para subir o nivel
    //bonus adicional
    cin >> M >> A;
    
    //calculo da pontuação total
    for(i=0; i<N; i++){
        P += missoes[i].first * (missoes[i].second+A);
    }
    
    //saidas
    if(P>=M){
        cout << "Upou de Nivel!" << endl;
    }else{
        cout << "Nao foi dessa vez!" << endl;
    }

    return 0;
}
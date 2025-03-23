#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int N, M, C, i;
    string a;
    vector<string> fg(10000); //feitiços gerais
    vector<string> fp(10000); //feitiços proibidos
    vector<string> cf(100000); //consultas a serem feitas

    //n° de feitiços gerais
    cin >> N;

    //lista de feitiços gerais
    for(i=0; i < N; i++){
        cin >> fg[i];
    }

    //n° de feitiços proibidos
    cin >> M;

    //lista de feitiços proibidos
    for(i=0; i < M; i++){
        cin >> fp[i];
    }

    //n° consultas a serem feitas
    cin >> C;

    //lista de consultas a serem feitas
    for(i=0; i < C; i++){
        cin >> cf[i];
    }
    
    //ordenação do vetor de feitiços gerais
    stable_sort(fg.begin(), fg.end());
    
    //ordenação do vetor de feitiços proibidos
    stable_sort(fp.begin(), fp.end());

    //saidas
    for(i=0; i < C; i++){
        if(binary_search(fg.begin(), fg.end(), cf[i])){
            cout << "Geral" << endl;
        }else if(binary_search(fp.begin(), fp.end(), cf[i])){
            cout << "Proibido" << endl;
        }
    }
    
    return 0;
    
}
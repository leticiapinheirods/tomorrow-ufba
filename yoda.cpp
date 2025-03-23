#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

struct jedi{
    string nome; //nome do Jedi (5 caracteres, letras maiusculas, sem espaço)
    int M; //missões atribuidas inicialmente
    int P; //missões que faltaram cumprir 
};

//função de comparação
bool cmp(jedi a, jedi b){
    return (a.nome < b.nome || a.nome == b.nome && a.P < b.P);
}

int main(){
    int N, C, i; //C = missões completadas

    //qtde de jovens interessados em ser um Jedi
    cin >> N;

    jedi j;
    vector<jedi> jedis;

    //entradas
    for(i=0; i < N; i++){
        cin >> j.nome >> j.M >> j.P;
        jedis.push_back(j);
    }

    //função de ordernação
    stable_sort(jedis.begin(), jedis.end(), cmp);

    //saidas
    for(i=0; i < N; i++){
        C = jedis[i].M - jedis[i].P;
        cout << jedis[i].nome << " " << C << endl;
    }
    
    return 0;

}
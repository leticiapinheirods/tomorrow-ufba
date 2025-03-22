#include <iostream>
#include <vector>
#include <utility>
#include <string>
using namespace std;

int main(){

    int N, C, i;
    
    struct pessoa{
        string Nome;
        int K;
    };
    
    vector<pessoa> amigos_bilbo;
    pessoa p;
    vector<string> amigos_tragedia;
    
    //qtde de amigos de bilbo
    cin >> N;
    
    //nome e o peso de cada amigo
    for(i = 0; i < N; i++){
        cin >> p.Nome >> p.K;
        amigos_bilbo.push_back(p);
    }
    
    //capacidade máxima de peso suportado por um determinado galho da estrada
    cin >> C;
    
    //selecionando os amigos com peso maior que o suportado
    for(i=0; i<N; i++){
        if(amigos_bilbo[i].K > C){
            amigos_tragedia.push_back(amigos_bilbo[i].Nome);
        }else{
            continue;
        }
    }
    
    //saidas
    if(amigos_tragedia.size() > 0){
        cout << "Vamos virar almoço de aranhas gigantes!" << endl;
        for(i=0; i<amigos_tragedia.size(); i++){
            cout << amigos_tragedia[i] << endl;
        }
    }else{
        cout << "Vamos todos encontrar a montanha!" << endl;
    }
    
    return 0;
}
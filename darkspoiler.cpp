#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

struct data{
    int D;
    int M;
    int A;
};

//função de comparação
bool cmp(data a, data b){
    return (a.A < b.A || a.A == b.A && a.M < b.M || a.A == b.A && a.M == b.M && a.D < b.D);
}

int main(){

    int e = 0, i;
    data d;
    vector<data> datas;

    //entradas
    while(cin >> d.D >> d.M >> d.A){
        datas.push_back(d);
        e++;
    }
    
    //ordernação
    stable_sort(datas.begin(), datas.end(), cmp);

    //saidas
    for(i=0; i < e; i++){
        cout << datas[i].D << " " << datas[i].M << " " << datas[i].A << " " << endl;
    }
    
    return 0;

}
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6;
bitset<MAXN> visitados;
vector<long long> c(MAXN);
vector<int> adj[MAXN];
long long menor;

void dfs(int i){
    if(visitados[i])
        return;

    visitados[i] = true;

    if(c[i]<menor)
        menor = c[i];
    
    for(auto v : adj[i])
        dfs(v);
}


int main(){
    int N, M, x, y;
    long long soma = 0;

    cin >> N >> M;

    for(int j=1; j<=N; j++)
        cin >> c[j];
    
    for(int k =1; k<=M; k++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for(int i=1; i<=N; i++){
        if(!visitados[i]){
            menor = c[i];
            dfs(i);
            soma += menor;
        }
    }

    cout << soma << "\n";

    return 0;
}
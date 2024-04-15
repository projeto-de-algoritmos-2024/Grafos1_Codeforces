#include <bits/stdc++.h>
using namespace std;
bitset<1000> marcado;

int DFS(int g, const vector<int>&culpados){
    if(marcado[g])
        return g;

    marcado[g] = true;

    return DFS(culpados[g], culpados);
}

int main(){
    int n;
    
    cin >> n;

    vector<int> culpados(n+1);

    for(int i = 1; i<=n; i++)
        cin >> culpados[i];

    vector<int> r(n+1);

    for(int j =1; j<= n; j++){
        marcado.reset();
        r[j] = DFS(j, culpados);
    }

    for(int k = 1; k<=n; k++)
        cout << r[k] << (k == n? "\n" : " ");

    return 0;
}
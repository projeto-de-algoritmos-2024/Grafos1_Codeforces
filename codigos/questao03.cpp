#include <bits/stdc++.h>
using namespace std;

int n, m;
int piso[999][999];
char nivel[999][999];
bool usado[999][999];

void dfs(int a, int b){
    if(piso[a+1][b] == 1 && usado[a+1][b] == false && a+1 >= 1 && a+1 <= n && b >= 1 && b <= m){
        usado[a+1][b] = true;
        dfs(a+1, b);
    }

    if(piso[a-1][b] == 1 && usado[a-1][b] == false && a-1 >= 1 && a-1 <= n && b >= 1 && b <= m){
        usado[a-1][b] = true;
        dfs(a-1, b);
    }
    
    if(piso[a][b+1] == 1 && usado[a][b+1] == false && a >= 1 && a <= n &&  b+1 >= 1 && b+1 <= m){
        usado[a][b+1] = true;
        dfs(a, b+1);
    }

    if(piso[a][b-1] == 1 && usado[a][b-1] == false && a >= 1 && a <= n && b-1 >= 1 && b-1 <= m){
        usado[a][b-1] = true;
        dfs(a, b-1);
    }

    return;
}

int main(){
    bool flag = false;
    memset(usado, false, sizeof(usado));
    cin >> n >> m;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >>  nivel[i][j];
            if(nivel[i][j] == 'X'){
                piso[i][j] = 0;
            } else {
                piso[i][j] = 1;
            }
        }
    }

    int r1,c1,r2,c2;
    cin >> r1 >> c1 >> r2 >> c2;

    if((r1 == r2) && (c1 == c2) && (piso[r1-1][c1] == 1 || piso[r1+1][c1] == 1 || piso[r1][c1+1] == 1|| piso[r1][c1-1] == 1))
        cout  << "YES" << endl;
    else if(((r1+1 == r2 || r1-1 == r2 ) && (c1 == c2)) || ((c1+1 == c2 || c1-1 == c2) && (r1 == r2))){
        if(piso[r2][c2] == 0){
            cout << "YES" << endl;
        } else {
            if(piso[r2-1][c2]==1 || piso[r2+1][c2]==1 || piso[r2][c2+1]==1 || piso[r2][c2-1]==1){
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    } else {
        int cn = 0;
        if(piso[r2][c2] == 0){
            flag=true;
            if(piso[r2-1][c2] == 1 || piso[r2+1][c2] == 1 || piso[r2][c2+1] == 1 || piso[r2][c2-1] == 1){
                cn=1;;
                piso[r2][c2]=1;
            }
        }
         dfs(r1, c1);
         if(flag == true){
            if(usado[r2][c2] == true && cn >= 1){
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            int c1=0;
            if(piso[r2-1][c2]==1) c1++;
            if(piso[r2+1][c2]==1)c1++;
            if(piso[r2][c2+1]==1)c1++;
            if(piso[r2][c2-1]==1)c1++;
            if(usado[r2][c2]==true && c1>=2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
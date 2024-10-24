#include <bits/stdc++.h>
using namespace std;

int main(){

    int N, count=0;
    cin>>N;

    int H[N], G[N];

    for(int i=0; i<N; i++){
        int a, b;
        cin >> a >> b;
        H[i] = a;
        G[i] = b;
    }


    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(H[i] == G[j]){
                count++;
            }
        }
    }

    cout << count << endl;



    


    return 0;
}
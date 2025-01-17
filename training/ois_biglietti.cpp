// Punti: 100.0
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int N, M, A, B; fin >> N >> M >> A >> B;
    int tot=0, inizioM=M;

    if(M >= N){
        if((A * N) < B){
            fout << A * N;
        }else{
            fout << B;
        }
    }else{
        if((A * M) < B){
            fout << A * N;
        }else{
            tot += B;
            while((M + inizioM) <= N){
                M += inizioM;
                tot += B;
            }
            if(M < N){
                if(B < (A * (N-M))){
                    tot += B;
                    fout << tot;
                }else{
                    tot += A*(N-M);
                    fout << tot;
                }
            }else{
                fout << tot;
            }
        }
    }
    return 0;

}

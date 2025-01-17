// Punti: 100.0
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int n, m;
    fin >> n >> m;
    vector<int> prefix(n, 0);
    for(int i = 0; i < m; i++)
    {
        int sx, dx; fin >> sx >> dx;
        if(dx != n)
        {
            prefix[--sx]++; prefix[dx]--;
        }
        else
        {
            prefix[--sx]++;
        }
    }
    vector<int> fi(n);
    fi[0] = prefix[0];
    for(int i = 1; i < n; i++)
    {
        fi[i] = fi[i - 1] + prefix[i];
    }
    nth_element(fi.begin(), fi.begin() + n / 2, fi.end());
    cout << fi[n / 2];
    return 0;
}

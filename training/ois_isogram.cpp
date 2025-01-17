// Punti: 100.0
/******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N = 0;
    int res = 0;
    cin >> N;
    
    bool flag = true;
    map<char,int> lett;
    
    string nul = "";
    getline(cin, nul);
    for(int i = 0; i < N; i++)
    {
        string frase = "";
        getline(cin, frase);
        
        for(int j = 0; j < frase.size(); j++)
        {
            if((int)frase[j] < 32 || (int)frase[j] > 64 && ++lett[tolower(frase[j])] > 2)
            {
                flag = false;
                break;
            }
        }
        
        if (flag)
        {
            res++;
        }
        lett.clear();
        flag = true;
    }
    cout << res;
    return 0;
}
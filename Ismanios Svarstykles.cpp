#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> mat(n);
    for (int i = 0; i < n; i++)
    {
        cin >> mat[i];
    }
    vector<int> paskmas;
    for (int i = 0; i < n; i++)
    {
        bool nauj = true;
        int dabmas = mat[i];
        for (int j = 0; j < paskmas.size(); j++)
        {
            if (abs(dabmas - paskmas[j]) <= d)
            {
                nauj = false;
                paskmas[j] = dabmas;
                break;
            }
        }
        if (nauj)
        {
            paskmas.push_back(dabmas);
        }
        else if (!nauj){
            continue;
        }
    }

    cout << paskmas.size() << endl;
    return 0;
}

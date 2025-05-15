#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 2e5+7;

pair<int, int> tab[MAX];

int wyn;
int pom = -1;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> tab[i].first >> tab[i].second;
    }
    sort(tab, tab+n);
    for(int i = 0; i < n; i++)
    {
        if(tab[i].first >= pom)
        {
            wyn++;
            pom = tab[i].second;
        }
        else if(tab[i].second < pom)
        {
            pom = tab[i].second;
        }
    }
    cout << wyn;
}
/*
4
2 7
4 6
8 11
11 13
odp: 3
*/
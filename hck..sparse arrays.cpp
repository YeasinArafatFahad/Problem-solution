#include <bits/stdc++.h>


using namespace std;

char inp[1002][25];

int main()
{
    int n, q;
    cin>>n;
    for(int i = 0 ; i< n; i++)
    {
        cin>>inp[i];
        assert(strlen(inp[i]) >= 1 && strlen(inp[i]) <= 20);
    }
    char check[25];
    cin>>q;
    while(q--)
    {
        cin>>check;
        assert(strlen(check) >= 1 && strlen(check) <= 20);
        int ans = 0;
        for(int i = 0 ; i < n; i++)
        {
            if(strcmp(inp[i], check) == 0)
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}


#include <iostream>
#include<string>
using namespace std;
#include<iostream>
#include<string>
using namespace std;
typedef long long LL;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
	string s;
        int n,i,cur=0;
	LL ans=0;
	cin >> n >> s;
        for(i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                cur++;
                ans=((long long )(cur)*((long long )(cur)+1))/2;
            }
        }
	cout << ans << endl;
    }
    return 0;
}

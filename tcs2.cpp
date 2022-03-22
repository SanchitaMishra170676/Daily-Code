#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
#define ff first
#define ss second
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;
int ans = 0; bool flag = 1;

ll ncr(ll n, ll r)
{
    if (r > n || r < 0 || n < 0)
    {
        return 0;
    }
    ll i, k, p = 1;
    r = min(r, n - r);
    k = n;
    for (i = 1; i <= r; i++)
    {
        p = p * k;
        p = p / i;
        k--;
    }
    return p;
}

signed main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    string fd; cin >> fd;
    string s; cin >> s;
    vector<string> array(n);
    stringstream string_stream(s);

    int i = 0;
    while (string_stream.good())
    {
        string a;
        getline( string_stream, a, ',' );
        array[i] = a;
        i++;
    }
    int w = 1;
    for (int j = 0; j < (ll)fd.length(); j++) {
        if (fd[j] == ',')
            w++;
    }



    vector<string> arr;
    stringstream strin_stream(fd);


    while (strin_stream.good())
    {
        string a;
        getline( strin_stream, a, ',' );
        arr.pb(a);
    }

    int k = 0;
    int ao[n] = {0};
    for (int j = 0; j < n; j++) {
        if (arr[k] == array[j]) {
            ao[j] = 1;
            k++;
            if (k == (ll)arr.size()) break;
        }
    }
    i = 0;
    while (i < w) {
        ans += ncr(n, i);
        i++;
    }
    ll l = 0;
    for (int j = 0; j < n; j++)
    {
        if (ao[j] == 1) {
            l++;
        }
        else {
            ans += ncr(n - j - 1, arr.size() - l - 1);
        }
    }

    cout << ans + 1;
    // if(flag) cout<<-1<<"\n";
    // cout<<ans;
}
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
ll memory = 0, tim = 0, ttt = 0;
#ifndef ONLINE_JUDGE
#define cout if(++memory && memory>210000){cout<<"\nOUT OF MEMORY";exit(0);}else cout
#define ttt {tim++;if(tim>450000000){cout<<"\nEXIT INFINTY LOOP";exit(0);}}
#endif

struct student {
	int id;
	double per;
	int c1, c2, c3;
};

bool cmp(const student &a, const student &b) {
	if (a.per == b.per) {

		return a.id < b.id;
	}
	return a.per > b.per;

}

signed main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll c, n;
	cin >> c >> n;
	vector<student> v;
	vector<ll> cllg;
	cllg.pb(0);
	for (int i = 0; i < c; i++) {
		ll x;
		cin >> x;
		cllg.pb(x);
	}
	for (ll i = 0; i < n; i++) {
		string temp;
		double tper;
		cin >> temp;
		vector<string> arr;
		stringstream strin_stream(temp);
		while (strin_stream.good())
		{
			string a;
			getline( strin_stream, a, ',' );
			arr.pb(a);
		}

		v.pb({stoi(arr[0].substr(8)), stod(arr[1]), stoi(arr[2].substr(2)), stoi(arr[3].substr(2)), stoi(arr[4].substr(2))});
	}

	sort(v.begin(), v.end(), cmp);

	// cout << v[0].per << " ";
	ll var = 0;
	for (int i = 0; i < n; i++) {
		if (cllg[v[i].c1] > 0) {
			if (var) {
				cout << "\n";
			}
			var = 1;
			cout << "Student-" << v[i].id << " C-" << v[i].c1;
			cllg[v[i].c1]--;
			continue;
		}

		if (cllg[v[i].c2] > 0) {
			if (var) {
				cout << "\n";
			}
			var = 1;
			cout << "Student-" << v[i].id << " C-" << v[i].c2;
			cllg[v[i].c2]--;
			continue;
		}

		if (cllg[v[i].c3] > 0) {
			if (var) {
				cout << "\n";
			}
			var = 1;
			cout << "Student-" << v[i].id << " C-" << v[i].c3;
			cllg[v[i].c3]--;
			continue;
		}

	}




}
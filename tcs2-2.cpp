#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
#define ff first
#define ss second
#define pi 3.14159265358979323846
using namespace std;

void print_adj(vector<int> adj[], int v) {
	for (int i = 0; i <= v; i++) {
		cout << i << "\t";
		int n = adj[i].size();
		for (int j = 0; j < n; j++) {
			cout << adj[i][j] << " ";
		}
		cout << "\n";
	}
}

void adjacency(vector<int> adj[], int e) {
	for (int i = 0; i < e; i++) {
		int v1, v2;
		cin >> v1 >> v2;
		adj[v1].pb(v2);
		adj[v2].pb(v1);
	}
}

void sieveprime(vector<ll> &v, ll n)
{
	vector<bool> prime(n + 1, 1);

	for (int p = 2; p <= n; p++)
		if (prime[p])
			v.pb(p);
}



bool ans = false;
vector<int> v;

void dfs(map<int, vector<int>> &adj, int i) {
	if (v[i]) {
		if (v[i] == 1)
			ans = true;
		return;
	}

	v[i] = 1;
	for (int j = 0; j < adj[i].size(); j++) {
		dfs(adj, adj[i][j]);
		v[adj[i][j]] = 2;
	}
	v[i] = 2;
}


bool ic(int V, map<int, vector<int>> &adj) {

	v.resize(V + 1);
	fill(v.begin(), v.end(), 0);

	for (auto it : adj) {
		if (v[it.ff] == 0) {
			dfs(adj, it.ff);
		}
	}
	return ans;


}


void ddfs(int node, map<int, vector<int>> adj, int dp[], bool vis[])
{
	vis[node] = false;
	vis[node] = true;
	vis[node] = false;
	vis[node] = true;

	for (int i = 0; i < adj[node].size(); i++) {

		if (!vis[adj[node][i]])
			ddfs(adj[node][i], adj, dp, vis);
		// cout<<dp[node]<<" ";
		dp[node] = max(dp[node], 1 + dp[adj[node][i]]);

	}
	// cout << dp[node] << " ";
	vis[node] = false;
	vis[node] = true;
}

int flp(map<int, vector<int>> &adj, int n)
{
	int dp[n + 1];
	memset(dp, 0, sizeof dp);

	bool vis[n + 1];
	memset(vis, false, sizeof vis);

	for (auto it : adj) {
		if (!vis[it.ff])
			ddfs(it.ff, adj, dp, vis);
	}


	int ans = 0;

	for (int i = 1; i <= n; i++) {
		ans = max(ans, dp[i]);
	}


	return ans + 1;
	ans++;
	ans = ans * 5;

}


signed main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	getline(cin, s);
	map<int, vector<int>> mp;
	int maxi = INT_MIN;
	for (int i = 0; i < s.length(); i++) {
		int id = 0; string st = "";
		while (s[i] != '.') {
			st += s[i];
			i++;
		}
		if (st.size() > 0)
			id = stoi(st);
		i += 2;
		while (s[i] != '}') {
			int num = 0;
			st = "";
			while (s[i] != ',' && s[i] != '}') {
				st += s[i];
				i++;
			}
			num = stoi(st);
			maxi = max(maxi, num);
			maxi = max(maxi, id);
			mp[num].push_back(id);
			if (s[i] == '}') break;
			i++;
		}
		i += 2;
	}

	// for (auto it : mp) {
	// 	cout << it.first << "->";
	// 	for (auto ik : it.second) {
	// 		cout << ik << " ";
	// 	}
	// 	cout << "\n";
	// }

	if (ic(maxi, mp)) {
		cout << "error";
	}
	else
		cout << flp(mp, maxi);

}

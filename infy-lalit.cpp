#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define int long long
using namespace std;

ll fastpower(ll x, ll y)
{
    ll temp;
    if( y == 0)
        return 1;
    temp = fastpower(x, y / 2);
    if (y % 2 == 0)
        return (temp * temp)%mod;
    else
        return (((x * temp)%mod) * temp)%mod;
}



int merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ret;
    vector<int> cur = intervals[0];
    for (int i=1; i<intervals.size(); ++i) {
      if (cur[1] < intervals[i][0]) {
        ret.push_back(cur);
        cur = intervals[i];
      }
      else
        cur[1] = max(cur[1], intervals[i][1]);
    }
    ret.push_back(cur);
    if(ret.size()<=2){
		return ret.size();
	}
	ll s= ret.size();
    return fastpower(2,s-1);
  }


int jerry(int arr[], int n){
	map <int, pair<int,int>> mp;
	for(int i=1;i<=n;i++){
		if(mp[arr[i]].first == 0){
			mp[arr[i]].first=i;
			mp[arr[i]].second=i;
			continue;
		}
		else{
			mp[arr[i]].second=i;
		}
	}

	vector<vector<int>> intervals;

	for(auto it: mp){
		vector<int> temp;
		temp.pb(it.second.first);
		temp.pb(it.second.second);
		intervals.pb(temp);
	}

	vector<vector<int>> mi;
	return merge(intervals);

}


signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n; cin>>n;
	int arr[n+1];
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}

	int ans= jerry(arr,n);
	cout<<ans;
} 
int solve(vector<vector<int>>& v) {
    map<int, int> M;
    for(int i = 0; i < v.size(); i++)
    {
        M[v[i][0]]++;
        M[v[i][1] + 1]--;
    }
    int ans = 0, prev = 0;
    for(auto &i : M)
    {
        i.second += prev;
        prev = i.second;
    }
    for(auto it = M.begin(); it != M.end(); it++)
    {
        int x = it->first, y = it->second;
        if ((++it) != M.end() && y)
            ans += it->first - x;
        it--;
    }
    return ans;
}
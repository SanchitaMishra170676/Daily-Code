// https://practice.geeksforgeeks.org/problems/find-all-pairs-whose-sum-is-x5808/1

class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        // Your code goes here 
        vector <pair<int,int>> v;
        map<int,int> mp;
        int c0=0,cx=0;
        for (int i=0;i<M;i++){
            if(B[i]==0){
                c0=1;
            }
            else if(B[i]== X){
                cx=1;
            }
            else{
                mp[X-B[i]]=B[i];
            }
        }
        
        for(int i=0;i<N;i++){
            if(A[i]== 0 && cx==1){
                v.push_back({0,X});
            }
            else if(A[i]==X && c0==1){
                v.push_back({X,0});
            }
            else{
                if(mp[A[i]] != 0){
                    v.push_back({A[i], mp[A[i]]});
                }
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};

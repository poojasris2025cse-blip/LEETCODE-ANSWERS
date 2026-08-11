class Solution {
public:
    int maxProduct(int n) {
        vector <int>m;
        while(n!=0)
        {
            m.push_back(n%10);
            n=n/10;
        }
        sort(m.begin(),m.end());
        int s=m.size();
        return m[s-1]*m[s-2];


        

    }
};
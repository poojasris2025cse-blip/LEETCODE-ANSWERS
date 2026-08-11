class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length())
             return false;
        int n=s.length();
        queue <char>q1;
        queue <char>q2;
        for(char c:s)
        {
            q1.push(c);
        }
         for(char c:goal)
        {
            q2.push(c);
        }
        for(int i=0;i<n;i++)
        {
            if(q1==q2)
                return true;
            char f=q1.front();
            q1.pop();
            q1.push(f);
        }
        return false;
    }
};
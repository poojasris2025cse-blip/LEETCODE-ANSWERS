class Solution {
public:
    string defangIPaddr(string address) {
        int l=address.length();
        string arr;
        for(int i=0;i<l;i++)
        {
            
            if(address[i]=='.')
            {
               arr+="[.]";
            }
            else
            {
                arr+=address[i];
            }
        }
        return arr;
    }
};




//_Name--> Brute Force Approach
//_Link--> https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1?_gl=1*2hl6h9*_ga*MTYxMTcwOTY2OC4xNjYwMzk1MzY0*_ga_DWCCJLKX3X*MTY5Njc3NDQzNi4xLjEuMTY5Njc3NDUwNy4wLjAuMA..


class Solution{
public:
    bool check(string s1, string s2)
    {
        map<char, int> m;
        
        int p = s1.size();
        int q = s2.size();
        
        for(int i=0; i< p; i++)
        {
            m[s1[i]]++;
        }
        
        for(int i=0; i< q; i++)
        {
            m[s2[i]]++;
        }
        
        for(auto [x, y]: m)
        {
            if(y!=0)
                return false;
        }
        
        return true;
    }

	int search(string pat, string txt) 
	{
	    int ans=0;
	    
	    int s1 = pat.size();
	    int s2 = txt.size();
	    
	    for(int i=0; i< (s1-s2+1); i++)
	    {
	        string str = txt.substr(i, s1);
	        
	        if(check(s1, pat))
	            ans++;
	    }
	    
	    return ans;
	}
};


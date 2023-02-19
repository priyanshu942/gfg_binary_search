#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int maxInstance(string s){
        vector<int> v(26,0);
        for(int i=0;i<s.length();i++){
            v[s[i]-'a']++;
        }
        int ans=std::min({v['b'-'a'],v['a'-'a'],v['l'-'a']/2,v['o'-'a']/2,v['n'-'a']});
        return ans;
    }
};

int main()
{
	Solution s;
	int a=s.maxInstance("bnlbllanmbaamnmobbanablboolonlol");
cout<<a;
}

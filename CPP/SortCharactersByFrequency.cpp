#include<bits/stdc++.h>
 using namespace std;

 int main()
{
  
   string s;
   cin>>s;
    unordered_map<char,int>mp;
        for(auto i=0;i<s.size();i++)
            mp[s[i]]++;
        priority_queue<pair<int,char>>pq;
        
        for(auto itr : mp)
        {
            pq.push({itr.second,itr.first});
        }
        string str="";
        int val=0;
        while(!pq.empty())
        {
            val=pq.top().first;
            while(val--)
            {
          
            cout<<pq.top().second;
           
        }
         pq.pop();
        }
       
   
}
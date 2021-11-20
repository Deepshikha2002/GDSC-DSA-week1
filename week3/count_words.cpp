// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int countWords(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<countWords(s)<<endl;
	    }
}// } Driver Code Ends


//User function Template for C++

int countWords(string s)
{
     int count = 0, n = s.length();
   int seen =false,  i=0;
   while(i<n)
   {
       seen =false;
       while (i<n && isalpha(s[i]))
           {
               seen=true;
               i++;
           }
      
      if(s[i]=='\\')
           i+=2;
      else
           i++;   
      if(seen==true)
           count++;
   }
   return count;
}
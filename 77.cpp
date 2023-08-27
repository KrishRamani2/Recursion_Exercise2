//{ Driver Code Starts
//Initial Template for C++



#include <iostream>
using namespace std;



// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    // Complete this function
    int sumOfDigits(int n)
    {
        int res=0;
        if(n<=1) return n;
        
        return (n%10)+sumOfDigits(n/10);
    }
};

//{ Driver Code Starts.


int main() 
{
	
    cout<<"Enter your number"<<endl;
	    int n;
	    cin>>n;
	    Solution obj;
	    cout<<obj.sumOfDigits(n)<<endl;
	return 0;
}
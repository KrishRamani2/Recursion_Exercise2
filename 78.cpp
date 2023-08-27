#include <iostream>
using namespace std;
class Solution
{
  public:
    int countDigits(int n)
    {
        int r=0,count=0;
       while(n!=0)
       {
           r=n%10;
           count++;
           n=n/10;
       }
       return count;
    }
};
int main() 
{
    cout<<"Enter your number"<<endl;
	    int n;
	    cin>>n;
	    Solution obj;
	    cout<<obj.countDigits(n)<<endl;   
	return 0;
}
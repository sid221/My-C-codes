#include<iostream>
using namespace std;

int main()
{
	int n,i;
	int flag=0;
  //take the input from user near which we have to
  // Find the prime number.
  
	cin>>n;
	
	for(i=n;i>0;i--)
	{
		for(int j=2;j<(i/2);j++)
		{
			if(i%j==0)
			{
				flag=0;
				break;
        
        //assign flag value 1 if the number isn't divisible by j
        // and break the loop once the number is divided by any number;
        
			}
      
			else
				flag=1;
        
        //assign flag value 1 if the number isn't divisible by j
		}
    
		if(flag==1)
			break;
      
      //if flag value remains 1 after performing upper division
      // then this number is prime and break the loop;
	}
  
	// print the value of i which is nearest prime number to the geiven input
	cout<<i;
}

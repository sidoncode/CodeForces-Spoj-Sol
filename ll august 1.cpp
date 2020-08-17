#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int z;
	cin>>z;
	while(z--)
	{
	    long long w,f;
	    cin>>f>>w;
	    int flagh=0;
	    int flagp=0;
	    while(f && w)
	    {
	        f=f-w;
	        w=w/2;
	       
	        if(w==0)
	         {
	             flagp=1;
	       
	         }
	       
	       
	         if(f<=0)
	        {
	            flagh=1;
	       
	        }
	       
	       
	       
	    }
	  if (flagh==1 && flagp==1) 
	      cout<<"1"<<endl;
	  else if(flagp==1) 
	   cout<<"0"<<endl;
	  else
	   cout<<"1"<<endl;
	}
	
	return 0;
}
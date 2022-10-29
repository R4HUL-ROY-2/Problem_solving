#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

// x^3 = 249;
int main()
{
	long double n1=6 , n2=7;
	long double err, y, mid;
	cin >> err;
	mid=(n1+n2)/2;
	while(n1 <= n2)
	{
		
		if (  fabs((y =mid*mid*mid)-249) <= err)
		{
			cout << " answer is : " << mid << endl;
			exit(1);
		}
		else if(y <249){
			n1=mid;
			mid=(n1+n2)/2;
		}
			
		else{
				n2=mid;	
			mid=(n1+n2)/2;
		}
		
	}
	
	return 0;
}


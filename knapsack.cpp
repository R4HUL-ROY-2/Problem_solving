#include<iostream>
using namespace std;


int t[52][52];
int max(int x , int y)
{
	if(x>y)
		return x;
	else
		return y;	
}

int knapsack(int wt[] , int val[], int w , int n)
{
	if(n==0 || w==0)
		return 0;
	if(t[n][w] != -1)
		return t[n][w];	
	if(wt[n-1] <= w)
		return  t[n][w]=max(val[n-1] + knapsack(wt, val , w-wt[n-1] , n-1) , knapsack(wt, val, w , n-1));
	else if(wt[n-1] > w)
		return t[n][w]=knapsack(wt, val , w, n-1);		
}	

int main()
{
	for(int i=0; i<50; i++)
	{
		for(int j=0; j<50; j++)
		{
			t[i][j]=-1;
		}
	}
	
	int n;
	cout << "size of array : " << endl;
	cin >> n;
	int wt[n], val[n] , w ;
	cout << "enter the weight array : " << endl;
	for(int i=0; i<n; i++)
	{
		cin >> wt[i];
	}
	cout << " enter the value array : " << endl;
	for(int i=0; i<n; i++)
	{
		cin >> val[i];
	}
	cout << " enter the total weight of knapsack : " << endl;
	cin >> w;
	
	int res= knapsack( wt , val , w , n);
	cout << " the result is : " << res  << endl;
	
	cout << endl;
	for(int i=0; i<50; i++)
	{
		for(int j=0; j<50; j++)
		{
			cout << t[i][j] << " ";
		}
		cout << endl ;
	}
	
	return 0;
}

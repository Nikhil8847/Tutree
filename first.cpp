#include<iostream>
using namespace std;

// Iterative Function
void fun(int n){
	for(int i = 1; i<= n; i++){
		for(int j = 1; j<i; j++)
			cout << " ";
		for(int j = i; j<=n ;j++)
			cout << j << " ";
		cout << endl;
	}
	for(int i = n-1; i >= 1; i--)
	{
		for(int j=1;j <=i;j++)
			cout << " ";
		for(int j = i;j <=n ;j++)
			cout << j << " ";
		cout << endl;
	}
}

// Recursive Function with same functionality
void Recursivefun(int j, int n){
	if(j == n)
	{
		for(int i = 1; i<n; i++)
			cout << " ";
		cout << n << " ";
		cout << endl;
		return;
	}
	else{
		for(int i = 1; i <= j; i++)
			cout << " ";
		for(int i = j; i<=n;i++)
			cout << i << " ";
		cout << endl;
		Recursivefun(j+1,n);
		for(int i = 1; i <=j ;i++)
			cout << " ";
		for(int i = j; i <=n; i++)
			cout << i << " ";
	}
	cout << endl;
}

int main(){
	int n = 7;
	fun(n);
	// Recursivefun(1,n); 
	return 0;
}
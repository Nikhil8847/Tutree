#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	n++;
	int goingHorizontal = 2*(n-1);
	for(int i = 1; i< n; i++){
		int j;
		for(j = 0;j < i; j++)
			cout << "* ";
		while(j < goingHorizontal - i){
			cout << "  ";
			j++;
		}
		while(j < goingHorizontal){
			cout << "* ";
			j++;
		}
		cout << endl;
	}
	for(int i = n-1; i ; i--){
		int j;
		for(j = 0; j<i; j++){
			cout << "* ";
		}
		while(j < goingHorizontal - i){
			cout << "  ";
			j++;
		}
		while(j < goingHorizontal){
			cout << "* ";
			j++;
		}
		cout << endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
main(){
	int a=10;
	for(int i=0;i<=10;i+=2){
		cout<<setw((a-i)+1);
		for(int j=0;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
		
	}
}

#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main(){
	int t, n, tmp;
	vector<int> num;
	cin>>t;
	for(int i=0; i<t; i++){
	    if(i != 0)    cout<<endl;
	    
	    num.clear();
		cin>>n;
		for(int j=0; j<n; j++){
		    cin>>tmp;
		    num.push_back(tmp);
		}
		
		for(int j=n; j>1; j--){
	        num[j-1] -= num[j-2];
		}
		sort(num.begin(), num.end());
		
		cout<<"Case "<<i+1<<":"<<endl;
		for(int j=0; j<n; j++){
		    cout<<num[j];
			if(j != n-1)	cout<<" ";
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main(){
	int t, n, tmp;
	vector<int> num;
	cin>>t;
	for(int i=0; i<t; i++){
	    if(i != 0)    cout<<endl;
	    
	    num.clear();
		cin>>n;
		for(int j=0; j<n; j++){
		    cin>>tmp;
		    num.push_back(tmp);
		}
		
		for(int j=n; j>1; j--){
	        num[j-1] -= num[j-2];
		}
		sort(num.begin(), num.end());
		
		cout<<"Case "<<i+1<<":"<<endl;
		for(int j=0; j<n; j++){
		    cout<<num[j];
			if(j != n-1)	cout<<" ";
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}


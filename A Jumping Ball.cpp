#include<iostream>
#include<cstdio>
using namespace std;
char cnt[200000];
int  main() {
	//fuck22222 
	int n;
	int sum=0,flag=1;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		cin>>cnt[i];
	}
	for(int i=0; i<n; i++) {
		if(cnt[i]=='>' ){
			sum=sum+i;
			break;
		}
		if(i==(n-1) && cnt[i]!='>')
			sum+=n;
	} 
	for(int i=n-1; i>=0; i--) {
		if(cnt[i]=='<'){
			sum=sum+(n-1)-i;
			break;
		}
		if(i==0 && cnt[i]!='<')
			sum+=n;
	}
	printf("%d",sum);
	return 0;
} 

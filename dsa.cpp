#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int n,m,sum1=0,sum2=0,res=0;

	    cin>>n>>m;
	    int a[n],b[m];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        sum1=sum1+a[i];
	    }

	    for(int i=0;i<m;i++){
	        cin>>b[i];
	        sum2=sum2+b[i];
	    }


	    sort(a,a+n);
	    sort(b,b+m,greater<int>());
	    for(int i=0;i<m;i++){
	        if(sum1>sum2){
	             break;
	         }
	        if(b[i]>a[i]){
	        swap(a[i],b[i]);

	            res++;

	        }
	        else
	         {
	             res=-1;
	             break;
	         }
	         sum1=sum1-b[i]+a[i];
	         sum2=sum2+b[i]-a[i];


	    }

	    cout<<res<<endl;
	}
	return 0;
}

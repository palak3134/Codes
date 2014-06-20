#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct sort_pred {
    bool operator()(const std::pair<int,int> &left, const std::pair<int,int> &right) {
        return left.first < right.first;
    }
};

int main()
{
	int t,n,k,i,x,y,z,sum=0,ans=0;
	vector<pair<int, int> > a;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		sum=0;ans=0;
		for(i=0;i<n;i++)
		{
			cin>>x>>y>>z;
			a.push_back(make_pair(x*y,z));
		}
		sort(a.begin(), a.end(), sort_pred());
	//	for(i=0;i<n;i++)
	//		cout<<a[i].first<<" "<<a[i].second<<"\n";
//	        sort(v.begin(), v.end(), sort_pred());
		for(i=0;i<n;i++)
		{
			if(sum+a[i].second <= k)
		  	{
				ans = ans + a[i].first;
				sum = sum + a[i].second;
			}
		}
		cout<<ans<<endl;
	}		
	return 0;
}	

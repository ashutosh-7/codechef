#include <iostream>
#include<vector>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

void submit()
{
int n,m,i,j,k1,k2,p3=1,p4=0,p5=0,p6=0,p7=0,p8=0,p9=0,l1=0,l2=0,l3=0,l4=0,l5=0;int i9=0;
int low,high,mid1,mid2,key,c5=0,c6=0,p10;int i10=0;
vector<int>v1;
vector<int>v2;
vector<int>v3;

cin>>n;
cin>>m;
for(i=0;i<n;i++)
{
	cin>>k1;
	cin>>k2;
	v1.push_back(k1);
	v2.push_back(k2);	
}

for(i=0;i<m;i++)
{
	cin>>k1;
	v3.push_back(k1);
}


sort(v1.begin(),v1.begin()+n);
sort(v2. begin(),v2.begin()+n);
/*for(i=0;i<n;i++)
{
	cout<<v1[i]<<endl;
}
for(i=0;i<m;i++)
{
	cout<<v2[i]<<endl;
}
*/
for(p10=0;p10<m;p10++)
{
	k1=v3[p10];
low=0;
high=n;
p7=0;p8=0;p9=0;i10=0;
c6=0;i9=0;
//1st binary search
while(low<=high)
   {
     mid1=(low+high)/2;
     if(v1[mid1]<k1)
     {
         low=mid1+1;
     }
     else if(v1[mid1]>k1)
     {
         high=mid1-1;
     }
     else
     {
        c6=1;
      
         break;
         
     }
     
   }
   
p7=0;p8=0;
 
 if(c6==1)
 {
 	cout<<"0"<<endl;
 	

 	p7=1;
 }
 //2nd binary search
 
 low=0;
high=n;

while(low<=high)
   {
     mid1=(low+high)/2;
     if(v2[mid1]<k1)
     {
         low=mid1+1;
     }
     else if(v2[mid1]>k1)
     {
         high=mid1-1;
     }
     else
     {
        c6=1;
        
         break;
         
     }
     
   }




if(c6==1 &&p7==0 )
{
	
 
p5=k1;

 cout<<k1;
	for(i=0;i<n;i++)
 	{
 		p3=v1[i];
 		
 		if(p5<p3)
 		{
 			p5=p3-p5;
 			break;
 		}
 	}
 	if(p5>0)
 	{
 		cout<<p5<<endl;
 		p8=1;
 	}
 	
}

if(p7==0 && p8==0)
{

	if(k1>v2[n-1])
	{
		cout<<"-1"<<endl;
			p9=1;
	}
}
if(p7==0 && p8==0 && p9==0)
{

	//cout<<"  "<<"csdscd"<<"  ";
 for(i=0;i<n;i++)
 {
 	
 	l1=v1[i];
 	l2=v2[i];
 	if(k1>l1 && k1<l2)
 	{
 		cout<<"0"<<endl;
 	i9=1;
 		break;
 	}
 
 
 }
 
 
 
 	
 }
 if(k1<v1[0] && i9==0)
 {
 	
 	l5=v1[0]-k1;
 	
 	cout<<l5<<endl;
 	i10=1;
 }
 if(p7==0 && p8==0 && p9==0 && i9==0 && i10==0)
 {
 	int p6=k1;
 		for(i=0;i<n;i++)
 	{
 		p3=v1[i];
 		
 		if(p6<p3)
 		{
 			p6=p3-p6;
 			cout<<p6<<endl;
 			break;
 		}
 	}
 }
 l5=0;
 p7=0;p8=0;p9=0;
//cout<<"loop "<<p10<<endl;
}
v1.clear();
v2.clear();
v3.clear();

 
 }
 int main() {
int t,i1;
int n,j,num,p=0;
	
cin>>t;
for(i1=0;i1<t;i1++)
{
submit();
}
//cout<<p<<endl;


	return 0;
}

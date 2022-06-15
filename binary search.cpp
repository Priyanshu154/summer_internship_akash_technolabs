#include<iostream>
using namespace std;
int main()
{
    int n,i,l=0,h,m,x;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter your choice"<<endl;
    cin>>x;
    h=n-1;
    m=(l+h)/2;
    while(l!=h)
    {

       if(x==a[m]){
        cout<<m;
        break;
       }
       if(x<a[m])
       {
           h=m-1;
           m=(l+h)/2;
       }
       if(x>a[m])
       {
           l=m+1;
           m=(l+h)/2;
       }

    }
 if(l==h)
       {
           cout<<h;

       }
    return 0;

}

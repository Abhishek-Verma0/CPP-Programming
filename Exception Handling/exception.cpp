

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
cout<<"Enter the values of a and b = ";
cin>>a;
cin>>b;
int x= a-b;
try
{	
	if(x!=0)
	{	
	cout<<"Result(a/x)= "<<a/x<<endl;
	}
    else{
        throw(x);
    }

}

    catch(int i)      //catch the excption
{
//Handle the exception
cout<<"exception caught:x= "<<x<<endl;   
}
cout<<"end";
return 0;
}




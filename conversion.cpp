#include <iostream>
#include <string> 
using namespace std;

int main()
{
    string conversion[] = {"km", "hm", "dam", "m", "dm", "cm", "mm"};
    string early, last;
    int x, y;
	float input, result;
	int a = sizeof(conversion)/sizeof(*conversion);
	
   	cout<<"Conversion: km, hm, dam, m, dm, cm, mm"<<endl;
   	 cout<<"Input number: "; cin>>input;
   	 cout<<"Early: "; cin>>early;
   	 cout<<"Last: ";cin>>last;
   	
   	
   	for(int f=0; f<a; f++){		//untuk detect first conversion
   		if(early==conversion[f]){
   			x = f+1;
		   }
		 else if(last==conversion[f]){
		   	y=f+1;
		   }
   		
	   }
//cout<<"x= "<<x<<endl;
//cout<<"y= "<<y<<endl;

result=input;

	if (x<y){
	{
	int z=y-x;
	for(int k=0; k<z; k++)
	result*= 10;}
	}
else if(x>y)
{	int z=x-y;
	for(int k=0; k<z; k++)
result/= 10;}

else if (x=y){
	result=input;
}

cout<<input<<" "<<early<<"="<<result<<" "<<last;
    return 0; 
}
 

//Display the number in reverse order
//fix and complete the program below.

#include <iostream>
using namespace std;

int main()
{
	int num,r,sum=0,t;
	cout<<"Display the number in reverse order:"<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"user input a number: ";
	cin>>num;

        for(t=num;num!=0;num=num/10)
        {
	    r=num % 10;
	    sum=sum*10+r;

        }
        cout<<"The number in reverse order: "<< sum << endl;

}

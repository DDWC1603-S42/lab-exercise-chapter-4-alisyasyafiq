//Display the pattern using numebr repeating for a row
//fix and complete the program below.


#include <iostream>
using namespace std;


int main()
{
      int i,j,rows;
	cout<<"Display the pattern"<<endl;
	cout<<"-------------------"<<endl;

	cout<<"Input number of rows: "<<endl;
	cin >> rows;

        for(i=1;i<=rows;i++)
	{
	for(j=1;j<=i;j++)
        cout<<i;
        cout<<endl;
	}
}
	

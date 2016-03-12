#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc,char *argv[])
{
	int n ;
	cout << "Please insert the first number \n"<< "(0 means to exit)" <<endl;
	cin >> n;
	if (n==0){
	exit(0);
								}
	cout << n << ' ';
	for(;;)
	{
		if(n == 1)		
		break; 
		else if (n %2 == 0)
		{ 
			n = n/2;
			cout << n << ' ';
		} 
		else
		{ 
			n = n*3+1 ;
			cout << n << ' ';
		} 
	}					    	
	system("PAUSE");
	return 0;     
}

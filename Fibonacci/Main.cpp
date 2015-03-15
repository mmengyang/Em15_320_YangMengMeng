#include<iostream.h>
int fibonacci(int n)
/*    fibonacci: recursive version
Pre:  The parameter n is a nonnegative integer.
Post: The function returns the nth Fibonacci number.
*/
{
   if (n <= 0)  return 0;
   else if (n == 1)  return 1;
   else              return fibonacci(n - 1) + fibonacci(n - 2);
}


void main()
{
	int n, fibn;
	bool flag=true;
	char ch;
    cout<<"Please input a number n:"<<endl;
	cin>>n;
	cin.get();
    while(flag && n>0)
	{
		fibn=fibonacci(n);
		cout<<"The fibonacci number of "<<n<<" is: "<<fibn<<endl;
		cout<<"Continue(y/n)?"<<endl;
		ch=cin.get();
		if(ch=='y')
		{
              cout<<"Please input a number n:"<<endl;
	          cin>>n;
	          cin.get();
		}
		else
			flag=0;
	}

}

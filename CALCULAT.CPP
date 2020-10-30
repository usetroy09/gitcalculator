#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<iomanip.h>
#include<stdio.h>
#include<stdlib.h>
	char op;
void sum()
	{

	int sum = 0;
	int n;
	int numberitems;
	cout<<"Enter number of items: \n";
	cin >> numberitems;

	for(int i=0;i<numberitems;i++)
	{
		cout<<"Enter number" <<i<<":\n\n";
		cin>>n;
		sum+=n;
	}
		cout<<"sum is:"<<sum<<endl<<endl;
	}

	void diff()
	{
		int diff;
			int n1,n2;
				cout<<"Enter two number to find their difference:\n\n";
				cout<<"Enter first number:";
				cin>>n1;
				cout<<"\nEnter second number:";
				cin>>n2;
		diff=n1-n2;
		cout<<"\nDifferenceis:"<<diff<<endl<<endl;
	}

	void pro()

	{
		int pro=1;
		int n;
		int numberitems;
		cout<<"enter number of items: \n";
		cin>>numberitems;
		for(int i=0; i<=numberitems;i++)
	{
			cout<<"\nEnter item"<<i<<":";
			cin>>n;
			pro*=n;
	}
		cout<<"product is:"<<pro<<endl<<endl;
	}

		void div()
	{
		int div;
			int n1;
			int n2;
				cout<<"Enter 2 numbers to find the qoutient\n\n";
				cout<<"Enter numerator:";
				cin>>n1;
				cout<<"\nEnter denominator:";
		cin>>n2;
		cout<<"\nqoutient is:"<<div<<endl<<endl;
	}
		void power()
	{
		long int p;
		int res=1,n;
			cout<<"Enter number:";
		cin>>n;
			cout<<"\nEnter power:";
		cin>>p;
		for(int i=1;i<=p;i++)
	{
		res=n*res;
	}
		cout<<n<<"\n power "<<p<<" is : "<<res<<endl;
	}
		void sq()
		{
			float s;
			int n;
				cout<<"Enter number to find its square root:";
		cin>>n;
		s=sqrt(n);
				cout<<"\nsquare root of"<<n<<"is : "<<s<<endl;
	}

		void fact()
	{
		long int f=1;
		int c=1,n;
				cout<<"Enter number to find its facotrial:";
		cin>>n;
		while(c<=n)
	{
		f=f*c;
		c+=1;
	}
		cout<<"\nfactorial of "<<n<<" is : "<<f<<endl;
	}
		void expo()
	{
		long double res=1 ,p;
		double e=2.718281828;
			cout<<"Enter power of exponential function:";
		cin>>p;
		for(int i=1;i<=p;i++)
	{
		res=e*res;
	}
		cout<<" e^ " <<p<<" is :"<<res<<endl;

	}
		int main()
	{

		system("cls");
		do
		{

		system("pause");
		system("cls");
			cout<<"***which operation you want to perform***\n";
			cout<<"press 0 for exit\n";
			cout<<"press 1 for addition\n";
			cout<<"press 2 for subtraction\n";
			cout<<"press 3 for multiplication\n";
			cout<<"press 4 for division\n";
			cout<<"press 5 for power calculation\n";
			cout<<"press 6 for square root \n";
			cout<<"press 7 for factorial calculation\n";
			cout<<"press 8 for exponential calcualtion\n";
			cout<<"press option:";
			cin>>op;
			switch(op)
	{
		case '1':
		sum();

		break;

		case '2':
		diff();

		break;

		case'3':
		pro();

		break;

		case'4':
		div();

		break;

		case'5':
		power();

		break;

		case'6':
		sq();

		break;

		case'7':
		fact();

		break;

		case'8':
		expo();

		break;

		case'0':
		exit(0);
		default:
		cout<<"Invalid input" ;
		system("cls");
	}
	}
		while(op!='0');

		return 0;
		getch();
	}

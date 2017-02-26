//program to calculate electricity consumption

#include<iostream.h>
#include<conio.h>

class electricity
{
	protected:
		float unit,charge;
		void bill()
		{
			cout<<"Enter units consumed\n";
			cin>>unit;
			if(unit<=100)
			charge=unit*(0.5);
			else
			charge=((unit-100)*(0.6))+50;
		}
};

class more_electricity:public electricity
{
	float sur,tot;
	public:
		void bill()
		{
			electricity::bill();
			if(charge>250)
			{
			sur=(charge-250)*(0.15);
			tot=sur+charge;
			cout<<"Bill="<<tot<<endl;
			}
			else
			cout<<"Bill="<<charge<<endl;
		}
};

void main()
{
	clrscr();
	more_electricity ob;
	ob.bill();
	getch();
}
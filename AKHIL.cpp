#include<iostream>
#include<conio>
#include<stdio>
#include<stdlib>
#include<fstream>
#include<string>
#include<dos>
#include<process>
#include<graphics>
class pizzat
{
	  public:
		char pdt_name[30];
		char pdt_size[30];
		char pdt_type[30];
		long double tot_price;

};
class pizza
{
	private:
		char cname[100];
		char add[100];
		char ph_no[12];
		long double c_code;
		long double tax;
	public:
		int n;
		int k;
		char place[30];
		int month,year,sec;
		int min,hrs,hours,minute,date;
		pizzat pg[100];
		long double q;
		int c_codego()
		{
			return c_code;
		}
		void check_place();
		void order();
		void bill();
		void modify();
		void search(int ord);
		void display();
		void ask_info();

}p;
void pizza::ask_info()
		{
			cout<<"\n";
			for(int i=0;i<40;i++)
			cout<<""<<"";
			cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
			for( i=0;i<40;i++)
			cout<<""<<"";
			cout<<"\n\n\n\t**ENTER THE CUSTOMER NAME: ";
			gets(cname);
			cout<<"\n\t**ENTER THE CUSTOMER CONTACT NUMBER (+91- or +011-) : ";
			gets(ph_no);
			cout<<"\n\t**ENTER THE CUSTOMER  ADDERESS: ";
			gets(add);
			struct date d;
			getdate(&d);
			cout<<"\n\tDATE OF BOOKING (dd-mm-yy) : "<<int(d.da_day)<<" - "<<int(d.da_mon)<<" - "<<int(d.da_year);
			date=d.da_day;month=d.da_mon;year=d.da_year;
			struct dostime_t t;
			_dos_gettime(&t);
			cout<<"\n\tTIME OF BOOKING (hh:mm:ss) : "<<int(t.hour)<<":"<<int(t.minute)<<":"<<int(t.second);
			sec=t.second;min=t.minute;hrs=t.hour;
			if(hrs>12&&min>0)
			{
			cout<<" PM";
			}
			else
			cout<<" AM";
			randomize();
			int ran=25+random(30);
			c_code=ran+233;
			cout<<"\n\n\t\t\t\t Your order number is : "<<c_code;
			delay(1000);
			minute=min+30;
			int mi=0;
			int h,ho=hrs;
			if(minute>60)
			{
			hours=hrs+1;
			int m=minute-60;
			mi=mi+m;
			}
			else
			mi=minute;
			if(hours>24)
			{
			h=hours-24;
			ho=ho+h;
			if(minute>60)
			{
			hours=hrs+1;
			int m=minute-60;
			mi=mi+m;
			}
			else
			mi=minute;
			}
			else
			{
			ho=hrs;
			if(minute>60)
			{
			hours=hrs+1;
			int m=minute-60;
			mi=mi+m;
			}
			else
			mi=minute;
			}
			cout<<"\n\tPIZZA WILL BE DELIVERED TO YOU AT (hh:mm): ";
			cout<<ho;cout<<":";cout<<mi;
			if(ho>12&&mi>0)
			{
			cout<<" PM";
			}
			else
			cout<<" AM";
			delay(10000);
		}
void pizza::check_place()
{
	clrscr();
	int k1;
	cout<<"\n";
	for(int i=0;i<40;i++)
	cout<<""<<"";
	cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
	for( i=0;i<40;i++)
	cout<<""<<"";
	cout<<"\n\n\n\n\n		***CHECK YOUR DELIVERY DESTINATION***";
	cout<<"\n               +---------------+----------------------+";
	cout<<"\n               |    CODE       |       PLACE          |";
	cout<<"\n               +===============+======================+";
	cout<<"\n               |   12398       |       NEW DELHI      |";
	cout<<"\n               +---------------+----------------------+";
	cout<<"\n               |   12498       |       OLD DELHI      |";
	cout<<"\n               +---------------+----------------------+";
	cout<<"\n               |   12598       |       DELHI NCR      |";
	cout<<"\n               +---------------+----------------------+";
	cout<<"\n\n                  **ENTER THE PLACE CODE: ";
	cin>>k1;
	switch(k1)
	{
		case 12398:
			cout<<"\n\tDELIVERY DESTINSTION IS: NEW DELHI";
			strcpy(place,"NEW DELHI");
			break;
		case 12498:
			cout<<"\n\tDELIVERY DESTINSTION IS: OLD DELHI";
			strcpy(place,"OLD DELHI");
			break;
		case 12598:
			cout<<"\n\tDELIVERY DESTINSTION IS: DELHI NCR";
			strcpy(place,"DELHI NCR");
			break;
		default:
			cout<<"\n\tYOU ENTERED A WRONG CODE EHICH CAN'T ACCESS ANY PLACE";
			break;
}
}
long double x,y;
int pos;
long double tax;
void pizza::order()
{
	int c=0;char ans5='n';
	do
	{
	int k;
	clrscr();
	cout<<"\n";
	for(int i=0;i<40;i++)
	cout<<""<<"";
	cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
	for( i=0;i<40;i++)
	cout<<""<<"";
	cout<<"\n                  ++=======+=====================++";
	cout<<"\n                  || S.no. |   CATEGOERY         ||";
	cout<<"\n                  ++=======|=====================++";
	cout<<"\n                  ||  1 .  |    VEGETERIAN       ||";
	cout<<"\n                  ++-------|---------------------++";
	cout<<"\n                  ||  2 .  |    NON VEGETERIAN   ||";
	cout<<"\n                  ++=======+=====================++";
	cout<<"\n                      **ENTER THE CATEGOERY: ";
	cin>>k;
	switch(k)
	{
		case 1:
			strcpy(pg[c].pdt_type,"VEGETERIAN");
			int k1;
			clrscr();
			for(int i=0;i<40;i++)
			cout<<""<<"";
			cout<<"                    ***##>>PIZZA PALACE<<##*** \n\n";
			for( i=0;i<40;i++)
			cout<<""<<"";
			cout<<"\n      ++=====+===================+============+============+===========++";
			cout<<"\n      ||S.no |      PIZZA        | family(rs) | regular(rs)|medium(rs) ||";
			cout<<"\n      ++=====+===================+============+============+===========++";
			cout<<"\n      || 1 . | CHEESE MARGHERITA |    200     |   150      |   100     ||";
			cout<<"\n      ++-----+-------------------+------------+------------+-----------++";
			cout<<"\n      || 2 . | MIX VEG GRAND     |    300     |   250      |   200     ||";
			cout<<"\n      ++-----+-------------------+------------+------------+-----------++";
			cout<<"\n      || 3 . | MEXICAN           |    400     |   350      |   300     ||";
			cout<<"\n      ++-----+-------------------+------------+------------+-----------++";
			cout<<"\n      || 4 . | CHEESE SPLENDER   |    500     |   450      |   400     ||";
			cout<<"\n      ++=====+===================+============+============+===========++";
			cout<<"\n\n                            ** ENTER YOUR CHOICE : ";
			cin>>k1;
			switch(k1)
			{
				case 1: clrscr();int k2;
					strcpy(pg[c].pdt_name,"CHEESE MARGHERITA");
						for(int i=0;i<40;i++)
					cout<<""<<"";
					cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
					for(i=0;i<40;i++)
					cout<<""<<"";
					cout<<"\n             ++=====+===================+============++";
					cout<<"\n             ||S.no |      PIZZA        |     RS     ||";
					cout<<"\n             ++=====+===================+============++";
					cout<<"\n             || 1 . | FAMILY            |    200     ||";
					cout<<"\n             ++-----+-------------------+------------++";
					cout<<"\n             || 2 . | REGULAR           |    150     ||";
					cout<<"\n             ++-----+-------------------+------------++";
					cout<<"\n             || 3 . | MEDIUM            |    100     ||";
					cout<<"\n             ++=====+===================+============++";
					cout<<"\n\n                  ** ENTER YOUR CHOICE : ";
					cin>>k2;
					switch(k2)
					{
						case 1: char ch1='n';
							clrscr();
							cout<<"\n";
	for(int i=0;i<40;i++)
	cout<<""<<"";
	cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
	for( i=0;i<40;i++)
	cout<<""<<"";

							cout<<"\n\n\t\t**Enter the NUMBER of pizza to be delivered: ";
							cin>>n;
							strcpy(pg[c].pdt_size,"FAMILY");
							cout<<"\n\t\t\t**DO you want topping(y/n): ";
							cin>>ch1;          clrscr();
							if(ch1=='n'||ch1=='N')
							{
								x=200*n;
								tax=(x/100)*12;
								pg[c].tot_price=x+tax;

							}
							else
							if(ch1=='y'||ch1=='Y')
							{        int k3;
								cout<<"\n";
								for(int i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             ||S.no |      TOPPING      |     RS     ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             || 1 . | ONION             |    20      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 2 . | TOMATO            |    25      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 3 . | CHEESE            |    30      ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n\n                     ** ENTER YOUR CHOICE : ";
								cin>>k3;
								switch(k3)
								{
									case 1:
										x=(200+20)*n;
										tax=(x/100)*12;
										pg[c].tot_price=x+tax;
										break;
									case 2:

										x=(200+25)*n;
										tax=(x/100)*12;
										pg[c].tot_price=x+tax;
										break;
									case 3:
										x=(200+30)*n;
										tax=(x/100)*12;
										pg[c].tot_price=x+tax;
										break;
								}
							}
							break;
						case 2:


							clrscr();cout<<"\n";
	for( i=0;i<40;i++)
	cout<<""<<"";
	cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
	for( i=0;i<40;i++)
	cout<<""<<"";

							cout<<"\n\n\t\t**Enter the NUMBER of pizza to be delivered: ";
							cin>>n;
							strcpy(pg[c].pdt_size,"REGULAR");
							cout<<"\n\t\t\t**DO you want topping(y/n): ";
							cin>>ch1; clrscr();
							if(ch1=='n'||ch1=='N')
							{
										x=(150)*n;
										tax=(x/100)*12;
										pg[c].tot_price=x+tax;
							}
							else
							if(ch1=='y'||ch1=='Y')
							{       int k3;      cout<<"\n";
	for(int i=0;i<40;i++)
	cout<<""<<"";
	cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
	for( i=0;i<40;i++)
	cout<<""<<"";

								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             ||S.no |      TOPPING      |     RS     ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             || 1 . | ONION             |    20      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 2 . | TOMATO            |    25      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 3 . | CHEESE            |    30      ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n\n                     ** ENTER YOUR CHOICE : ";
								cin>>k3;
								switch(k3)
								{
									case 1:

										x=(150+20)*n;
										tax=(x/100)*12;
										pg[c].tot_price=x+tax;
										break;
									case 2:
										x=(150+25)*n;
										tax=(x/100)*12;
										pg[c].tot_price=x+tax;
										break;
									 case 3:


										x=(150+30)*n;
										tax=(x/100)*12;
										pg[c].tot_price=x+tax;
tax=0.12;                                                                       break;
								}
							}
							break;
						case 3:
							clrscr();           cout<<"\n";
	for( i=0;i<40;i++)
	cout<<""<<"";
	cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
	for( i=0;i<40;i++)
	cout<<""<<"";

							cout<<"\n\n\t\t**Enter the NUMBER of pizza to be delivered: ";
							cin>>n;
							strcpy(pg[c].pdt_size,"MEDIUM");
							cout<<"\n\t\t\t**DO you want topping(y/n): ";
							cin>>ch1;            clrscr();
							if(ch1=='n'||ch1=='N')
							{

										x=(100)*n;
										tax=(x/100)*12;
										pg[c].tot_price=x+tax;

							}
							else
							if(ch1=='y'||ch1=='Y')
							{       int k3;     cout<<"\n";
	for(int i=0;i<40;i++)
	cout<<""<<"";
	cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
	for( i=0;i<40;i++)
	cout<<""<<"";

								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             ||S.no |      TOPPING      |     RS     ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             || 1 . | ONION             |    20      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 2 . | TOMATO            |    25      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 3 . | CHEESE            |    30      ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n\n                      ** ENTER YOUR CHOICE : ";
								cin>>k3;
								switch(k3)
								{
									case 1:

										x=(150+25)*n;
										tax=(x/100)*12;
										pg[c].tot_price=x+tax;
										x=(100+20)*n;
										break;
									case 2:
										x=(100+25)*n;
										tax=(x/100)*12;
										pg[c].tot_price=x+tax;
										break;
									case 3:
										x=(100+30)*n;
										tax=(x/100)*12;
										pg[c].tot_price=x+tax;
										break;
								}

							}
							break;
						}
					break;
					case 2:
						clrscr();
						strcpy(pg[c].pdt_name,"MIX VEG GRAND");
						for( i=0;i<40;i++)
					cout<<""<<"";
					cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n";
					for( i=0;i<40;i++)
					cout<<""<<"";
					cout<<"\n             ++=====+===================+============++";
					cout<<"\n             ||S.no |      PIZZA        |     RS     ||";
					cout<<"\n             ++=====+===================+============++";
					cout<<"\n             || 1 . | FAMILY            |    300     ||";
					cout<<"\n             ++-----+-------------------+------------++";
					cout<<"\n             || 2 . | REGULAR           |    250     ||";
					cout<<"\n             ++-----+-------------------+------------++";
					cout<<"\n             || 3 . | MEDIUM            |    200     ||";
					cout<<"\n             ++=====+===================+============++";
					cout<<"\n\n                  ** ENTER YOUR CHOICE : ";
					cin>>k2;
					switch(k2)
					{
						case 1: char ch1='n';
							clrscr();      	for( i=0;i<40;i++)
					cout<<""<<"";
					cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n";
					for(i=0;i<40;i++)
					cout<<""<<"";

							cout<<"\n\n\t\t**Enter the NUMBER of pizza to be delivered: ";
							cin>>n;
							strcpy(pg[c].pdt_size,"FAMILY");
							cout<<"\n\t\t\t**DO you want topping(y/n): ";
							cin>>ch1;   clrscr();
							if(ch1=='n'||ch1=='N')
							{
								x=300*n;
								tax=(x/100)*12;
								pg[c].tot_price=x+tax;
							}
							else
							if(ch1=='y'||ch1=='Y')
							{       int k3;	for( i=0;i<40;i++)
					cout<<""<<"";
					cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n";
					for(i=0;i<40;i++)
					cout<<""<<"";

								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             ||S.no |      TOPPING      |     RS     ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             || 1 . | ONION             |    20      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 2 . | TOMATO            |    25      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 3 . | CHEESE            |    30      ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n\n                 ** ENTER YOUR CHOICE : ";
								cin>>k3;
								switch(k3)
								{
									case 1:
										x=(300+20)*n;
										tax=(x/100)*12;
										pg[c].tot_price=x+tax;
y=x*tax;                                                                        break;
									case 2:
										x=(300+25)*n;
										tax=(x/100)*12;
										pg[c].tot_price=x+tax;
										break;
									case 3:
										x=(300+30)*n;
										tax=(x/100)*12;
										pg[c].tot_price=x+tax;
										break;
								}
							}
							break;
						case 2:

							clrscr();  	for( i=0;i<40;i++)
					cout<<""<<"";
					cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n";
					for(i=0;i<40;i++)
					cout<<""<<"";

							cout<<"\n\n\t\t**Enter the NUMBER of pizza to be delivered: ";
							cin>>n;
							strcpy(pg[c].pdt_size,"REGULAR");
							cout<<"\n\t\t\t**DO you want topping(y/n): ";
							cin>>ch1;           clrscr();
							if(ch1=='n'||ch1=='N')
							{
								x=250*n;
								tax=(x/100)*12;
								pg[c].tot_price=x+tax;
							}
							else
							if(ch1=='y'||ch1=='Y')
							{       int k3;       	for( i=0;i<40;i++)
					cout<<""<<"";
					cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n";
					for(i=0;i<40;i++)
					cout<<""<<"";

								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             ||S.no |      TOPPING      |     RS     ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             || 1 . | ONION             |    20      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 2 . | TOMATO            |    25      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 3 . | CHEESE            |    30      ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n\n                   ** ENTER YOUR CHOICE : ";
								cin>>k3;
								switch(k3)
								{
									case 1:	x=(250+20)*n;
										tax=(x/100)*12;
										pg[c].tot_price=x+tax;
										break;
									case 2:
										x=(250+25)*n;
										tax=(x/100)*12;
										pg[c].tot_price=x+tax;
										break;
									case 3:
										x=(250+30)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
								}
							}
							break;
						case 3:
							clrscr();             	for( i=0;i<40;i++)
					cout<<""<<"";
					cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n";
					for(i=0;i<40;i++)
					cout<<""<<"";

							cout<<"\n\n\t\t**Enter the NUMBER of pizza to be delivered: ";
							cin>>n;
							strcpy(pg[c].pdt_size,"MEDIUM");
							cout<<"\n\t\t\t**DO you want topping(y/n): ";
							cin>>ch1;       clrscr();
							if(ch1=='n'||ch1=='N')
							{
								x=200*n;
									tax=(x/100)*12;
										pg[c].tot_price=x+tax;
								}
							else
							if(ch1=='y'||ch1=='Y')
							{       int k3;   	for( i=0;i<40;i++)
					cout<<""<<"";
					cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n";
					for(i=0;i<40;i++)
					cout<<""<<"";

								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             ||S.no |      TOPPING      |     RS     ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             || 1 . | ONION             |    20      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 2 . | TOMATO            |    25      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 3 . | CHEESE            |    30      ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n\n                   ** ENTER YOUR CHOICE : ";
								cin>>k3;
								switch(k3)
								{
									case 1:

										x=(200+20)*n;	tax=(x/100)*12;
										pg[c].tot_price=x+tax;
										break;
									case 2:
										x=(200+25)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;
										break;
									case 3:
										x=(200+30)*n;
										tax=(x/100)*12;
										pg[c].tot_price=x+tax;
										break;
								}
							}
							break;
							}
						break;
				case 3:

					clrscr();
					strcpy(pg[c].pdt_name,"MEXICAN");
						for( i=0;i<40;i++)
					cout<<""<<"";
					cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n";
					for(i=0;i<40;i++)
					cout<<""<<"";
					cout<<"\n             ++=====+===================+============++";
					cout<<"\n             ||S.no |      PIZZA        |     RS     ||";
					cout<<"\n             ++=====+===================+============++";
					cout<<"\n             || 1 . | FAMILY            |    400     ||";
					cout<<"\n             ++-----+-------------------+------------++";
					cout<<"\n             || 2 . | REGULAR           |    350     ||";
					cout<<"\n             ++-----+-------------------+------------++";
					cout<<"\n             || 3 . | MEDIUM            |    300     ||";
					cout<<"\n             ++=====+===================+============++";
					cout<<"\n\n                   ** ENTER YOUR CHOICE : ";
					cin>>k2;
					switch(k2)
					{
						case 1: char ch1='n';
							clrscr(); 	for( i=0;i<40;i++)
					cout<<""<<"";
					cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n";
					for(i=0;i<40;i++)
					cout<<""<<"";

							cout<<"\n\n\t\t**Enter the NUMBER of pizza to be delivered: ";
							cin>>n;
							strcpy(pg[c].pdt_size,"FAMILY");
							cout<<"\n\t\t\t**DO you want topping(y/n): ";
							cin>>ch1;                         clrscr();
							if(ch1=='n'||ch1=='N')
							{
								x=400*n;
									tax=(x/100)*12;
										pg[c].tot_price=x+tax;

							}
							else
							if(ch1=='y'||ch1=='Y')
							{       int k3;        	for( i=0;i<40;i++)
					cout<<""<<"";
					cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n";
					for(i=0;i<40;i++)
					cout<<""<<"";

								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             ||S.no |      TOPPING      |     RS     ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             || 1 . | ONION             |    20      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 2 . | TOMATO            |    25      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 3 . | CHEESE            |    30      ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n\n                ** ENTER YOUR CHOICE : ";
								cin>>k3;
								switch(k3)
								{
									case 1:

										x=(400+20)*n;	tax=(x/100)*12;
										pg[c].tot_price=x+tax;
										break;
									case 2:

										x=(400+25)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;


										break;
									case 3:
										x=(400+30)*n;	tax=(x/100)*12;
										pg[c].tot_price=x+tax;
										break;
								}
							}
							break;
						case 2:

							clrscr();        	for( i=0;i<40;i++)
					cout<<""<<"";
					cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n";
					for(i=0;i<40;i++)
					cout<<""<<"";

							cout<<"\n\n\t\t**Enter the NUMBER of pizza to be delivered: ";
							cin>>n;
							strcpy(pg[c].pdt_size,"REGULAR");
							cout<<"\n\t\t\t**DO you want topping(y/n): ";
							cin>>ch1;                clrscr();
							if(ch1=='n'||ch1=='N')
							{
								x=350*n;
								tax=(x/100)*12;
								pg[c].tot_price=x+tax;

							}
							else
							if(ch1=='y'||ch1=='Y')
							{       int k3;  	for( i=0;i<40;i++)
					cout<<""<<"";
					cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n";
					for(i=0;i<40;i++)
					cout<<""<<"";

								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             ||S.no |      TOPPING      |     RS     ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             || 1 . | ONION             |    20      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 2 . | TOMATO            |    25      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 3 . | CHEESE            |    30      ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n\n                  ** ENTER YOUR CHOICE : ";
								cin>>k3;
								switch(k3)
								{
									case 1:

										x=(350+20)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;
										break;
									case 2:
										x=(350+25)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;
										break;
									case 3:
										x=(350+30)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;
break;
								}
							}
							break;
						case 3:
							clrscr();
								for( i=0;i<40;i++)
					cout<<""<<"";
					cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n";
					for(i=0;i<40;i++)
					cout<<""<<"";

							cout<<"\n\n\t\t**Enter the NUMBER of pizza to be delivered: ";
							cin>>n;
							strcpy(pg[c].pdt_size,"MEDIUM");
							cout<<"\n\t\t\t**DO you want topping(y/n): ";
							cin>>ch1;   clrscr();
							if(ch1=='n'||ch1=='N')
							{
								x=300*n;
									tax=(x/100)*12;
										pg[c].tot_price=x+tax;


							}
							else
							if(ch1=='y'||ch1=='Y')
							{       int k3;
								for( i=0;i<40;i++)
					cout<<""<<"";
					cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n";
					for(i=0;i<40;i++)
					cout<<""<<"";

								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             ||S.no |      TOPPING      |     RS     ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             || 1 . | ONION             |    20      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 2 . | TOMATO            |    25      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 3 . | CHEESE            |    30      ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n\n                  ** ENTER YOUR CHOICE : ";
								cin>>k3;
								switch(k3)
								{
									case 1:

										x=(300+20)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;
break;
									case 2:

										x=(300+25)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 3:

										x=(300+30)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;
break;
								}
							}
							break;
						}
						break;

				case 4:           	clrscr();
					strcpy(pg[c].pdt_name,"CHEESE SPLENDER");
						for( i=0;i<40;i++)
					cout<<""<<"";
					cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n";
					for(i=0;i<40;i++)
					cout<<""<<"";
					cout<<"\n             ++=====+===================+============++";
					cout<<"\n             ||S.no |      PIZZA        |     RS     ||";
					cout<<"\n             ++=====+===================+============++";
					cout<<"\n             || 1 . | FAMILY            |    500     ||";
					cout<<"\n             ++-----+-------------------+------------++";
					cout<<"\n             || 2 . | REGULAR           |    450     ||";
					cout<<"\n             ++-----+-------------------+------------++";
					cout<<"\n             || 3 . | MEDIUM            |    400     ||";
					cout<<"\n             ++=====+===================+============++";
					cout<<"\n\n                  ** ENTER YOUR CHOICE : ";
					cin>>k2;
					switch(k2)
					{
						case 1: char ch1='n';
							clrscr();for(int i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";


							cout<<"\n\n\t\t**Enter the NUMBER of pizza to be delivered: ";
							cin>>n;
							strcpy(pg[c].pdt_size,"FAMILY");
							cout<<"\n\t\t\t**DO you want topping(y/n): ";
							cin>>ch1;       clrscr();
							if(ch1=='n'||ch1=='N')
							{
								x=500*n;
								tax=(x/100)*12;
								pg[c].tot_price=x+tax;

							}
							else
							if(ch1=='y'||ch1=='Y')
							{       int k3;
							for(int i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             ||S.no |      TOPPING      |     RS     ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             || 1 . | ONION             |    20      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 2 . | TOMATO            |    25      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 3 . | CHEESE            |    30      ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n\n                 ** ENTER YOUR CHOICE : ";
								cin>>k3;
								switch(k3)
								{
									case 1:

										x=(500+20)*n;
										tax=(x/100)*12;
										pg[c].tot_price=x+tax;
										break;
									case 2:
										x=(500+25)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 3:
										x=(500+30)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
								}
							}
							break;
						case 2:

							clrscr();
							for(i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

							cout<<"\n\n\t\t**Enter the NUMBER of pizza to be delivered: ";
							cin>>n;
							strcpy(pg[c].pdt_size,"REGULAR");
							cout<<"\n\t\t\t**DO you want topping(y/n): ";
							cin>>ch1;            clrscr();
							if(ch1=='n'||ch1=='N')
							{

								x=450*n;
									tax=(x/100)*12;
										pg[c].tot_price=x+tax;

							}
							else
							if(ch1=='y'||ch1=='Y')
							{       int k3;
							for(int i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             ||S.no |      TOPPING      |     RS     ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             || 1 . | ONION             |    20      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 2 . | TOMATO            |    25      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 3 . | CHEESE            |    30      ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n\n                  ** ENTER YOUR CHOICE : ";
								cin>>k3;
								switch(k3)
								{
									case 1:

										x=(450+20)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 2:

										x=(450+25)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 3:

										x=(450+30)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
								}
							}
							break;
						case 3:
							clrscr();
							for( i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

							cout<<"\n\n\t\t**Enter the NUMBER of pizza to be delivered: ";
							cin>>n;
							strcpy(pg[c].pdt_size,"MEDIUM");
							cout<<"\n\t\t\t**DO you want topping(y/n): ";
							cin>>ch1;   clrscr();
							if(ch1=='n'||ch1=='N')
							{
								x=400*n;
									tax=(x/100)*12;
										pg[c].tot_price=x+tax;

							}
							else
							if(ch1=='y'||ch1=='Y')
							{       int k3;for(int i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             ||S.no |      TOPPING      |     RS     ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             || 1 . | ONION             |    20      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 2 . | TOMATO            |    25      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 3 . | CHEESE            |    30      ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n\n                  ** ENTER YOUR CHOICE : ";
								cin>>k3;
								switch(k3)
								{
									case 1:
										x=(400+20)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 2:
										x=(400+25)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 3:

										x=(400+30)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
								}
							}
							break;
							}
						break;
						}
					break;
		case 2:
			int kl;
			strcpy(pg[c].pdt_type,"NON VEGETERIAN");
			clrscr();
			for( i=0;i<40;i++)
			cout<<""<<"";
			cout<<"                    ***##>>PIZZA PALACE<<##*** \n";
			for( i=0;i<40;i++)
			cout<<""<<"";
			cout<<"\n      ++=====+===================+============+============+===========++";
			cout<<"\n      ||S.no |      PIZZA        | family(rs) | medium(rs) |regular(rs)||";
			cout<<"\n      ++=====+===================+============+============+===========++";
			cout<<"\n      || 1 . | CHICKEN JEWEL     |    800     |   750      |   700     ||";
			cout<<"\n      ++-----+-------------------+------------+------------+-----------++";
			cout<<"\n      || 2 . | CHICKEN MAJESTIC  |    700     |   650      |   600     ||";
			cout<<"\n      ++-----+-------------------+------------+------------+-----------++";
			cout<<"\n      || 3 . | CHICKEN SPLENDER  |    600     |   550      |   500     ||";
			cout<<"\n      ++-----+-------------------+------------+------------+-----------++";
			cout<<"\n      || 4 . | CHICKEN GRAND     |    500     |   450      |   400     ||";
			cout<<"\n      ++=====+===================+============+============+===========++";
			cout<<"\n\n                            ** ENTER YOUR CHOICE : ";
			cin>>kl;
			switch(kl)
			{
				case 1: clrscr();int k2;
					strcpy(pg[c].pdt_name,"CHICKEN JEWEL");
						for(int i=0;i<40;i++)
					cout<<""<<"";
					cout<<"                    ***##>>PIZZA PALACE<<##*** \n";
					for(i=0;i<40;i++)
					cout<<""<<"";
					cout<<"\n             ++=====+===================+============++";
					cout<<"\n             ||S.no |      PIZZA        |     RS     ||";
					cout<<"\n             ++=====+===================+============++";
					cout<<"\n             || 1 . | FAMILY            |    800     ||";
					cout<<"\n             ++-----+-------------------+------------++";
					cout<<"\n             || 2 . | REGULAR           |    750     ||";
					cout<<"\n             ++-----+-------------------+------------++";
					cout<<"\n             || 3 . | MEDIUM            |    700     ||";
					cout<<"\n             ++=====+===================+============++";
					cout<<"\n\n                    ** ENTER YOUR CHOICE : ";
					cin>>k2;
					switch(k2)
					{
						case 1: char ch1='n';
							clrscr(); for(int i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

							cout<<"\n\n\t\t**Enter the NUMBER of pizza to be delivered: ";
							cin>>n;
							strcpy(pg[c].pdt_size,"FAMILY");
							cout<<"\n\t\t\t**DO you want topping(y/n): ";
							cin>>ch1;      clrscr();
							if(ch1=='n'||ch1=='N')
							{
							       x=(800+20)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

									}
							else
							if(ch1=='y'||ch1=='Y')
							{       for(int i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";
 int k3;
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             ||S.no |      TOPPING      |     RS     ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             || 1 . | ONION             |    20      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 2 . | TOMATO            |    25      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 3 . | EGG               |    30      ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n\n                       ** ENTER YOUR CHOICE : ";
								cin>>k3;
								switch(k3)
								{
									case 1:

										x=(800+20)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 2:
										x=(800+25)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;


										break;
									case 3:

										x=(800+30)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;


										break;
								}
							}
							break;
						case 2:


							clrscr();for(i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

							cout<<"\n\n\t\t**Enter the NUMBER of pizza to be delivered: ";
							cin>>n;
							strcpy(pg[c].pdt_size,"REGULAR");
							cout<<"\n\t\t\t**DO you want topping(y/n): ";
							cin>>ch1;clrscr();
							if(ch1=='n'||ch1=='N')
							{

								x=750*n;
									tax=(x/100)*12;
										pg[c].tot_price=x+tax;

							}
							else
							if(ch1=='y'||ch1=='Y')
							{       for(int i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";
int k3;
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             ||S.no |      TOPPING      |     RS     ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             || 1 . | ONION             |    20      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 2 . | TOMATO            |    25      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 3 . | EGG               |    30      ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n\n                  ** ENTER YOUR CHOICE : ";
								cin>>k3;
								switch(k3)
								{
									case 1:


										x=(750+20)*n;

											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 2:
										x=(750+25)*n;	tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 3:

										x=(750+30)*n;

											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
								}
							}
							break;
						case 3:
							clrscr();for(i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

							cout<<"\n\n\t\t**Enter the NUMBER of pizza to be delivered: ";
							cin>>n;
							strcpy(pg[c].pdt_size,"MEDIUM");
							cout<<"\n\t\t\t**DO you want topping(y/n): ";
							cin>>ch1;    clrscr();
							if(ch1=='n'||ch1=='N')
							{

								x=700*n;
									tax=(x/100)*12;
										pg[c].tot_price=x+tax;

							}
							else
							if(ch1=='y'||ch1=='Y')
							{       int k3;       for(int i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             ||S.no |      TOPPING      |     RS     ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             || 1 . | ONION             |    20      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 2 . | TOMATO            |    25      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 3 . | EGG               |    30      ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n\n                  ** ENTER YOUR CHOICE : ";
								cin>>k3;
								switch(k3)
								{
									case 1:

										x=(700+20)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 2:

										x=(700+25)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 3:

										x=(700+30)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
								}
							}
							break;
						}
						break;
					case 2:
					clrscr();
					strcpy(pg[c].pdt_name,"CHICKEN MAJESTIC");
						for( i=0;i<40;i++)
					cout<<""<<"";
					cout<<"                    ***##>>PIZZA PALACE<<##***\n";
					for( i=0;i<40;i++)
					cout<<""<<"";
					cout<<"\n             ++=====+===================+============++";
					cout<<"\n             ||S.no |      PIZZA        |     RS     ||";
					cout<<"\n             ++=====+===================+============++";
					cout<<"\n             || 1 . | FAMILY            |    700     ||";
					cout<<"\n             ++-----+-------------------+------------++";
					cout<<"\n             || 2 . | REGULAR           |    650     ||";
					cout<<"\n             ++-----+-------------------+------------++";
					cout<<"\n             || 3 . | MEDIUM            |    600     ||";
					cout<<"\n             ++=====+===================+============++";
					cout<<"\n\n                  ** ENTER YOUR CHOICE : ";
					cin>>k2;
					switch(k2)
					{
						case 1: char ch1='n';
							clrscr();             for(int i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

							cout<<"\n\n\t\t**Enter the NUMBER of pizza to be delivered: ";
							cin>>n;
							strcpy(pg[c].pdt_size,"FAMILY");
							cout<<"\n\t\t\t**DO you want topping(y/n): ";
							cin>>ch1;  clrscr();
							if(ch1=='n'||ch1=='N')
							{

								x=700*n;	tax=(x/100)*12;
										pg[c].tot_price=x+tax;

							}
							else
							if(ch1=='y'||ch1=='Y')
							{       int k3;       for(int i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             ||S.no |      TOPPING      |     RS     ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             || 1 . | ONION             |    20      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 2 . | TOMATO            |    25      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 3 . | EGG               |    30      ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n\n                      ** ENTER YOUR CHOICE : ";
								cin>>k3;
								switch(k3)
								{
									case 1:


										x=(700+20)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 2:

										x=(700+25)*n;	tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 3:

										x=(700+30)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
								}
							}
							break;
						case 2:

							clrscr();             for( i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

							cout<<"\n\n\t\t**Enter the NUMBER of pizza to be delivered: ";
							cin>>n;
							strcpy(pg[c].pdt_size,"REGULAR");
							cout<<"\n\t\t\t**DO you want topping(y/n): ";
							cin>>ch1;            clrscr();
							if(ch1=='n'||ch1=='N')
							{

								x=650*n;
									tax=(x/100)*12;
										pg[c].tot_price=x+tax;


							}
							else
							if(ch1=='y'||ch1=='Y')
							{       int k3;       for(int i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             ||S.no |      TOPPING      |     RS     ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             || 1 . | ONION             |    20      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 2 . | TOMATO            |    25      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 3 . | EGG               |    30      ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n\n                  ** ENTER YOUR CHOICE : ";
								cin>>k3;
								switch(k3)
								{
									case 1:

																				x=(650+20)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 2:

										x=(650+25)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 3:

										x=(650+30)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
								}
							}
							break;
						case 3:
							clrscr();             for(i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

							cout<<"\n\n\t\t**Enter the NUMBER of pizza to be delivered: ";
							cin>>n;
							strcpy(pg[c].pdt_size,"MEDIUM");
							cout<<"\n\t\t\t**DO you want topping(y/n): ";
							cin>>ch1;   clrscr();
							if(ch1=='n'||ch1=='N')
							{

								x=600*n;
									tax=(x/100)*12;
										pg[c].tot_price=x+tax;

							}
							else
							if(ch1=='y'||ch1=='Y')
							{       int k3;       for(int i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             ||S.no |      TOPPING      |     RS     ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             || 1 . | ONION             |    20      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 2 . | TOMATO            |    25      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 3 . | EGG               |    30      ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n\n                    ** ENTER YOUR CHOICE : ";
								cin>>k3;
								switch(k3)
								{
									case 1:


										x=(600+20)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 2:

										x=(600+25)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;
																				break;
									case 3:

										x=(600+30)*n;	tax=(x/100)*12;
										pg[c].tot_price=x+tax;


										break;
								}
							}
							break;
							}
						break;
				case 3:

					clrscr();
					strcpy(pg[c].pdt_name,"CHICKEN SPLENDER");
						for( i=0;i<40;i++)
					cout<<""<<"";
					cout<<"                    ***##>>PIZZA PALACE<<##*** \n";
					for(i=0;i<40;i++)
					cout<<""<<"";
					cout<<"\n             ++=====+===================+============++";
					cout<<"\n             ||S.no |      PIZZA        |     RS     ||";
					cout<<"\n             ++=====+===================+============++";
					cout<<"\n             || 1 . | FAMILY            |    600     ||";
					cout<<"\n             ++-----+-------------------+------------++";
					cout<<"\n             || 2 . | REGULAR           |    550     ||";
					cout<<"\n             ++-----+-------------------+------------++";
					cout<<"\n             || 3 . | MEDIUM            |    500     ||";
					cout<<"\n             ++=====+===================+============++";
					cout<<"\n\n                  ** ENTER YOUR CHOICE : ";
					cin>>k2;
					switch(k2)
					{
						case 1: char ch1='n';
							clrscr();             for(int i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

							cout<<"\n\n\t\t**Enter the NUMBER of pizza to be delivered: ";
							cin>>n;
							strcpy(pg[c].pdt_size,"FAMILY");
							cout<<"\n\t\t\t**DO you want topping(y/n): ";
							cin>>ch1;         clrscr();
							if(ch1=='n'||ch1=='N')
							{
								x=600*n;
									tax=(x/100)*12;
										pg[c].tot_price=x+tax;

							}
							else
							if(ch1=='y'||ch1=='Y')
							{       int k3;       for(int i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             ||S.no |      TOPPING      |     RS     ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             || 1 . | ONION             |    20      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 2 . | TOMATO            |    25      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 3 . | EGG               |    30      ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n\n                  ** ENTER YOUR CHOICE : ";
								cin>>k3;
								switch(k3)
								{
									case 1:


										x=(600+20)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 2:
										x=(600+25)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 3:

										x=(600+30)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
								}
							}
							break;
						case 2:

							clrscr();             for(i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

							cout<<"\n\n\t\t**Enter the NUMBER of pizza to be delivered: ";
							cin>>n;
							strcpy(pg[c].pdt_size,"REGULAR");
							cout<<"\n\t\t\t**DO you want topping(y/n): ";
							cin>>ch1;clrscr();
							if(ch1=='n'||ch1=='N')
							{
								x=550*n;
									tax=(x/100)*12;
										pg[c].tot_price=x+tax;

							}
							else
							if(ch1=='y'||ch1=='Y')
							{       int k3;       for(int i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             ||S.no |      TOPPING      |     RS     ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             || 1 . | ONION             |    20      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 2 . | TOMATO            |    25      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 3 . | EGG               |    30      ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n\n                  ** ENTER YOUR CHOICE : ";
								cin>>k3;
								switch(k3)
								{
									case 1:

										x=(550+20)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 2:
										x=(550+25)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 3:

										x=(550+30)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
								}
							}
							break;
						case 3:
							clrscr();             for(i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

							cout<<"\n\n\t\t**Enter the NUMBER of pizza to be delivered: ";
							cin>>n;
							strcpy(pg[c].pdt_size,"MEDIUM");
							cout<<"\n\t\t\t**DO you want topping(y/n): ";
							cin>>ch1;clrscr();
							if(ch1=='n'||ch1=='N')
							{

								x=500*n;
									tax=(x/100)*12;
										pg[c].tot_price=x+tax;

							}
							else
							if(ch1=='y'||ch1=='Y')
							{       int k3;       for(int i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             ||S.no |      TOPPING      |     RS     ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             || 1 . | ONION             |    20      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 2 . | TOMATO            |    25      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 3 . | EGG               |    30      ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n\n                    ** ENTER YOUR CHOICE : ";
								cin>>k3;
								switch(k3)
								{
									case 1:


										x=(500+20)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 2:

										x=(500+25)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 3:
										x=(500+30)*n;	tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
								}
							}
							break;
						}
						break;

				case 4:    	clrscr();
					strcpy(pg[c].pdt_name,"CHICKEN GRAND");
						for( i=0;i<40;i++)
					cout<<""<<"";
					cout<<"                    ***##>>PIZZA PALACE<<##*** \n";
					for(i=0;i<40;i++)
					cout<<""<<"";
					cout<<"\n             ++=====+===================+============++";
					cout<<"\n             ||S.no |      PIZZA        |     RS     ||";
					cout<<"\n             ++=====+===================+============++";
					cout<<"\n             || 1 . | FAMILY            |    500     ||";
					cout<<"\n             ++-----+-------------------+------------++";
					cout<<"\n             || 2 . | REGULAR           |    450     ||";
					cout<<"\n             ++-----+-------------------+------------++";
					cout<<"\n             || 3 . | MEDIUM            |    400     ||";
					cout<<"\n             ++=====+===================+============++";
					cout<<"\n\n                  ** ENTER YOUR CHOICE : ";
					cin>>k2;
					switch(k2)
					{
						case 1: char ch1='n';
							clrscr();             for(int i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

							cout<<"\n\n\t\t**Enter the NUMBER of pizza to be delivered: ";
							cin>>n;
							strcpy(pg[c].pdt_size,"FAMILY");
							cout<<"\n\t\t\t**DO you want topping(y/n): ";
							cin>>ch1;clrscr();
							if(ch1=='n'||ch1=='N')
							{
								x=500*n;
									tax=(x/100)*12;
										pg[c].tot_price=x+tax;

							}
							else
							if(ch1=='y'||ch1=='Y')
							{       int k3;       for(int i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             ||S.no |      TOPPING      |     RS     ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             || 1 . | ONION             |    20      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 2 . | TOMATO            |    25      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 3 . | EGG               |    30      ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n\n                  ** ENTER YOUR CHOICE : ";
								cin>>k3;
								switch(k3)
								{
									case 1:

										x=(500+20)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 2:

										x=(500+25)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 3:

										x=(500+30)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
								}
							}
							break;
						case 2:

							clrscr();             for( i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

							cout<<"\n\n\t\t**Enter the NUMBER of pizza to be delivered: ";
							cin>>n;
							strcpy(pg[c].pdt_size,"REGULAR");
							cout<<"\n\t\t\t**DO you want topping(y/n): ";
							cin>>ch1;  clrscr();
							if(ch1=='n'||ch1=='N')
							{
								x=450*n;
									tax=(x/100)*12;
										pg[c].tot_price=x+tax;

							}
							else
							if(ch1=='y'||ch1=='Y')
							{       int k3;       for(int i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             ||S.no |      TOPPING      |     RS     ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             || 1 . | ONION             |    20      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 2 . | TOMATO            |    25      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 3 . | EGG               |    30      ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n\n                  ** ENTER YOUR CHOICE : ";
								cin>>k3;
								switch(k3)
								{
									case 1:


										x=(450+20)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 2:

										x=(450+25)*n;

											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 3:

										x=(450+30)*n;

											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
								}
							}
							break;
						case 3:
							clrscr();             for(i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

							cout<<"\n\n\t\t**Enter the NUMBER of pizza to be delivered: ";
							cin>>n;
							strcpy(pg[c].pdt_size,"MEDIUM");
							cout<<"\n\t\t\t**DO you want topping(y/n): ";
							cin>>ch1;
							clrscr();
							if(ch1=='n'||ch1=='N')
							{
								x=400*n;
									tax=(x/100)*12;
										pg[c].tot_price=x+tax;

							}
							else
							if(ch1=='y'||ch1=='Y')
							{       int k3;
									      for(int i=0;i<40;i++)
								cout<<""<<"";
								cout<<"\n                    ***##>>PIZZA PALACE<<##*** \n\n";
								for( i=0;i<40;i++)
								cout<<""<<"";

								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             ||S.no |      TOPPING      |     RS     ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n             || 1 . | ONION             |    20      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 2 . | TOMATO            |    25      ||";
								cout<<"\n             ++-----+-------------------+------------++";
								cout<<"\n             || 3 . | EGG               |    30      ||";
								cout<<"\n             ++=====+===================+============++";
								cout<<"\n\n                  ** ENTER YOUR CHOICE : ";
								cin>>k3;
								switch(k3)
								{
									case 1:


										x=(400+20)*n;
										tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 2:

										x=(400+25)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
									case 3:

										x=(400+30)*n;
											tax=(x/100)*12;
										pg[c].tot_price=x+tax;

										break;
								}
							}
							break;
							}
						break;
						}
					break;

					}
				cout<<"\n\n\t\t\tDO YOU WANT TO BOOK MORE PIZZA(y/n)";
				cin>>ans5;
				if(ans5=='y'||ans5=='Y')
				pos=++c;
				}
				while(ans5=='y'||ans5=='Y');


}

void pizza::display()
{
int x;
cout<<"\n\n\n                                 PIZZA PALACE \n";
cout<<"                               BRANCH NO->12567\n";
cout<<"                                  DELHI-NCR\n";
cout<<"\t\t+======+================+==============+========+\n";
cout<<"\t\t|B.code|     NAME       |    CITY      |  RATE  |\n";
cout<<"\t\t+======+================+==============+========+\n";
ifstream f("customer.dat",ios::binary);
while(!f.eof())
{
f.read((char*)&p,sizeof(p));
if(f.eof()) break;
cout<<"\t\t";y=wherey();x=wherex();gotoxy(x,y);cout<<"| "<<c_codego();y=wherey();gotoxy(x+7,y);cout<<"|"<<cname;y=wherey();gotoxy(x+24,y);cout<<"|"<<place;y=wherey();gotoxy(x+39,y);cout<<"|"<<p.q;y=wherey();gotoxy(x+48,y);cout<<"|"<<"\n";
cout<<"\t\t+===============================================+\n";
}
if(f.tellg()==0)
cout<<"\n\n\t\t\t NO ORDER HAS BEEN DELIVERED..";
f.close();
}
void pizza::search(int ord)
{
	ifstream f2("customer.dat",ios::binary);
	while(!f2.eof())
	{f2.read((char*)&p,sizeof(p));

	 if(c_code==ord)
	 {
	 bill();
	 break;
	 }
	 else
	 if(c_code!=ord)
	 cout<<"\n\n\t\t\t\t   NOT AVAILABLE....\n\n\n\t\t\tMAY BE CANCELED OR WRONG CODE";

	}
	f2.close();
}
void pizza::modify()
{
			order();
			p.q=0;
			int m=-1;
			do
			{
			++m;
			p.q=p.q+p.pg[m].tot_price;
			}while(m<pos);
			bill();

}
void pizza::bill()
{
delay(1000);
clrscr();
cout<<"                                 PIZZA PALACE \n";
cout<<"                               BRANCH NO->12567\n";
cout<<"                                  DELHI-NCR\n";
cout<<"         phone->011- 88888888 ; 64121837 & +91 - 8447020911 ; 8287205050 " ;
cout<<"\n\n";
cout<<"\n                   ~ CUSTOMER NAME -> "<<cname;
cout<<"\n              ~ PHONE NUMBER-> (+91 or +011) "<<ph_no<<"\n";
cout<<"                ~ CUSTOMER ADDRESS-> "<<add<<"\n";
cout<<"                        [****CUSTOMER CODE-> "<<c_code<<"****]\n";
cout<<"                                 TAX= 12%\n";
cout<<"                        ****FREE HOME DELIVERY****\n";
cout<<"  +===============+============================+==============+=============+\n";
cout<<"  |  CATEGOERY    |       PRODUCT              |    CITY      |   AMOUNT    |\n";
cout<<"  +=========================================================================+\n";
int n=-1;
do
{
++n;
y=wherey();gotoxy(1,y);cout<<"  |";cout<<pg[n].pdt_type;y=wherey();gotoxy(19,y);cout<<"|";cout<<pg[n].pdt_name;y=wherey();gotoxy(48,y);cout<<"|";cout<<place;y=wherey();gotoxy(63,y);cout<<"|";cout<<pg[n].tot_price<<" RS";y=wherey();gotoxy((63+14),y);cout<<"|\n";
}while(n<pos);
y=wherey();
gotoxy(1,y);
cout<<"  +===============+============================+==============+=============+\n";
y=wherey();
gotoxy(1,y);
cout<<"  |    T O T A L   A M O U N T                                    "<<p.q<<" RS"; y=wherey();
gotoxy((63+14),y); cout<<"|\n";
y=wherey();
gotoxy(1,y);
cout<<"  +===============+============================+==============+=============+\n";
}



void main()
{
int k,ord;char ans1='n';
char ans2='n';
clrscr();  int x,y;
textcolor(WHITE);
cout<<"\n\n\n\n\n\n\n  -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n\n";
cout<<"\n   ,,,,,,,,   _______________  ..............  ..............   __~~~~~~~~__";
cout<<"\n  ||     !!         ||                     /               /    ||        ||";
cout<<"\n  ||     !!         ||                   /               /      ||        ||";
cout<<"\n  ||     !!         ||                 /               /        ||        ||";
cout<<"\n  ||~~~~~~~         ||               /               /          ||%%%%%%%%||";
cout<<"\n  ||                ||             /               /            ||        ||";
cout<<"\n  ||                ||           /               /              ||        ||";
cout<<"\n  ||          ______||_______  /.............  /.............   ||        ||\n\n";
cout<<"\n  -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_";
delay(1000);
{
delay(1000);
clrscr();
cout<<"\n\n\n\n\n\n\n  -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n\n";
cout<<"\n   ,,,,,,,,   __~~~~~~~~__   ||            __~~~~~~~~__      (_~_~    ||******";
cout<<"\n  ||     !!   ||        ||   ||            ||        ||     *         ||     ";
cout<<"\n  ||     !!   ||        ||   ||            ||        ||    (          ||     ";
cout<<"\n  ||     !!   ||        ||   ||            ||        ||   *           ||     " ;
cout<<"\n  ||~~~~~~~   ||%%%%%%%%||   ||            ||%%%%%%%%||  (            ||****";
cout<<"\n  ||          ||        ||   ||            ||        ||   *           ||     ";
cout<<"\n  ||          ||        ||   ||            ||        ||    (          ||     ";
cout<<"\n  ||          ||        ||   ||            ||        ||     *         ||     ";
cout<<"\n  ||          ||        ||   ||#########   ||        ||      (_~_~    ||******\n\n";
cout<<"\n  _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-";
}
delay(1000);
clrscr();
cout<<"\n\ n\n\n\n\n\n                       L  A D I N G..";
delay(200);
cout<<".";
delay(200);
cout<<"..";
delay(200);
cout<<"..";
delay(200);
cout<<"...";
delay(200);
cout<<"..";
delay(800);
  int gdriver = DETECT, gmode, errorcode;
  int midx, midy;
  int radius = 100;
  initgraph(&gdriver,&gmode,"C:\\turboc3\\bgi");
   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(getmaxcolor());
   {
   setcolor(RED);
   circle(midx, midy, radius);
   delay(1000);
   setcolor(RED);
   gotoxy(midx,midy);
   circle(midx,midy,90);
   delay(1000);
   setcolor(RED);

   gotoxy(midx,midy);
   circle(midx,midy,80);      delay(1000);setcolor(YELLOW);

   gotoxy(midx,midy);
   circle(midx,midy,70);      delay(1000);setcolor(YELLOW);
					     gotoxy(midx,midy);
   circle(midx,midy,60);      delay(1000);setcolor(YELLOW);

   gotoxy(midx,midy);
   circle(midx,midy,50);      delay(1000);setcolor(YELLOW);

   gotoxy(midx,midy);
   circle(midx,midy,40);      delay(1000);setcolor(GREEN);
					     gotoxy(midx,midy);
   circle(midx,midy,30);      delay(1000);setcolor(GREEN);

   gotoxy(midx,midy);
   circle(midx,midy,20);      delay(1000);setcolor(GREEN);

   gotoxy(midx,midy);
   circle(midx,midy,10);      delay(1000);setcolor(GREEN);

   gotoxy(midx,midy);
   circle(midx,midy,5);      delay(1000);setcolor(GREEN);

   gotoxy(midx,midy);
   circle(midx,midy,3);      delay(1000);setcolor(GREEN);

   gotoxy(midx,midy);
   circle(midx,midy,2);      delay(1000);setcolor(GREEN);

   gotoxy(midx,midy);
   circle(midx,midy,1);      delay(1000);setcolor(GREEN);

   gotoxy(midx,midy);
   circle(midx,midy,0);      delay(1000);setcolor(GREEN);
   }
   closegraph();
delay(1000);
clrscr();

{
cout<<"\n\n\n\n\n\n\n\n                           W  E  L  C  O  M  E    ";
cout<<"\n                                     T  O";
cout<<"\n                                 P  I  Z  Z  A ";
cout<<"\n                               P  A  L  A  C  E";
delay(1000);
clrscr();
delay(1800);
cout<<"\n\n\n\n\n\n\n\n                                DONE ";
cout<<"\n\n\n\n                     BE HEALTHY WITH HEALTHY NUTRITION";
}
do
{
delay(1800);
clrscr();
for(int i=0;i<40;i++)
cout<<""<<"";
cout<<"\n                        P";
sound(10*random(100));
delay(300);
nosound();
delay(100);
cout<<" I";
sound(10*random(100));
delay(300);
nosound();
delay(100);
cout<<" Z";
sound(10*random(100));
delay(300);
nosound();
delay(100);cout<<" Z";sound(10*random(100));
delay(300);
nosound();
delay(100);cout<<" A";sound(10*random(100));
delay(300);
nosound();
delay(100);cout<<"  P";sound(10*random(100));
delay(300);
nosound();
delay(100);cout<<" A";sound(10*random(100));
delay(300);
nosound();
delay(100); cout<<" L"; sound(10*random(100));
delay(300);
nosound();
delay(100);cout<<" A";sound(10*random(100));
delay(300);
nosound();
delay(100);cout<<" C";sound(10*random(100));
delay(300);
nosound();
delay(100);cout<<" E";sound(10*random(100));
delay(300);
nosound();
delay(100); cout<<"\n";
cout<<"\n";
for(i=0;i<40;i++)
cout<<""<<"";
delay(100);
sound(10*random(100));
delay(300);
nosound();
cout<<"\n\n\t\t1 . BOOK YOUR PIZZA\n";
delay(100);
sound(10*random(100));
delay(300);
nosound();
cout<<"\t\t2 . TOTAL ORDER\n";
delay(100);
sound(10*random(100));
delay(300);
nosound();
cout<<"\t\t3 . SEARCH\n";
delay(100);
sound(10*random(100));
delay(300);
nosound();
cout<<"\t\t4 . MAKE CHANGE IN BILL\n";
delay(100);
sound(10*random(100));
delay(300);
nosound();
cout<<"\t\t5 . CANCEL THE ORDER\n";
delay(100);
sound(10*random(100));
delay(300);
nosound();
cout<<"\t\t6 . SORRY TO COME IN\n";
delay(100);
sound(10*random(100));
delay(300);
nosound();
cout<<"\n\n\t  HOW CAN I HELP YOU : ";
sound(10*random(100));
delay(300);
nosound();
cin>>k;
switch(k)
{
case 1:
	sound(10*random(100));
	delay(300);
	nosound();
	delay(600);
	clrscr();
	ofstream f("customer.dat",ios::binary|ios::app);
	do
	{
	p.ask_info();
	sound(10*random(100));
	delay(300);
	nosound();
	p.check_place();
	delay(1000);
	sound(10*random(100));
	delay(300);
	nosound();
	p.order();
	p.q=0;
	int m=-1;
	do
	{
	++m;
	p.q=p.q+p.pg[m].tot_price;
	}while(m<pos);

	sound(10*random(100));
	delay(300);
	nosound();
	p.bill();
	f.write((char*)&p,sizeof(p));
	 for(int i=0;i<40;i++)
	 cout<<""<<"";
	cout<<"\n\n\t\t\tMAKE ANOTHER ORDER: ";
	sound(10*random(100));
delay(300);
nosound();

	cin>>ans1;
	}while(ans1=='y'||ans1=='Y');
	f.close();
	break;
case 2: sound(10*random(100));
delay(300);
nosound();

	delay(2000);
	sound(10*random(100));
delay(300);
nosound();

	clrscr();
	p.display();
	break;
case 3:
	sound(10*random(100));
	delay(300);
	nosound();
	delay(2000);
	sound(10*random(100));
	delay(300);
	nosound();
	clrscr();
	cout<<"\n\n\n\n\n\n\n\t\t\tENTER THE CUSTOMER CODE TO SEARCHED: ";
	cin>>ord;
	clrscr();
	sound(10*random(100));
	delay(300);
	nosound();
	p.search(ord);
	break;
case 4:
	sound(10*random(100));
	delay(300);
	nosound();
	delay(2000);
	sound(10*random(100));
	delay(300);
	nosound();
	clrscr();
	fstream f1("customer.dat",ios::in|ios::out|ios::binary);
	cout<<"\n\n\n\n\n\n\t\t\tENTER THE CUSTOMER CODE TO BE MODIFIED: ";
	cin>>ord;
	clrscr();
	sound(10*random(100));
	delay(300);
	nosound();
	while(!f1.eof())
	{
		f1.read((char*)&p,sizeof(p));
		if(p.c_codego()==ord)
		{
		p.modify();
		if(f1.eof()) break;
		f1.seekp(f1.tellp()-sizeof(p));
		f1.write((char*)&p,sizeof(p));
		break;
		}
	}
	f1.close();
	break;
case 5:
	 sound(10*random(100));
	delay(300);
	nosound();
	delay(2000);
	clrscr();
	sound(10*random(100));
	delay(300);
	nosound();
	ifstream file("customer.dat",ios::binary);
	ofstream f3("temp.dat",ios::binary);
	cout<<"\n\n\tENTER THE BILL NUMBER WHOSE ORDER TO BE CANCELED: ";
	cin>>ord;
	file.seekg(0);
	while(!file.eof())
	{
		file.read((char*)&p,sizeof(p));
		if(file.eof())
		break;
		if(p.c_codego()!=ord)
		f3.write((char*)&p,sizeof(p));
	}
		f3.close();
		file.close();
		remove("customer.dat");
		rename("temp.dat","customer.dat");
		cout<<"\n\n\t\t\tORDER CANCELED.........";
	break;
case 6:
	clrscr();
	sound(10*random(100));
	delay(300);
	nosound();
	delay(1000);
	cout<<"\n\n\n\n\t\t                  ";
	cout<<"\n\t\t  THANK YOU FOR VISITING TO US     ";
	cout<<"\n\t\t                  ";
	cout<<"\n\t\t                                 ";
	cout<<"\n\t\t                                 ";
	cout<<"\n\t\t   EAT HEALTHY STAY HEALTHY        ";
	cout<<"\n\t\t         BE    HAPPY               ";
	cout<<"\n\t\t                           ";
	cout<<"\n\n\n\n\t\t\tLOGGING OUT.";
	delay(300);
	cout<<".";
	delay(400);
	cout<<"..";
	delay(500);
	cout<<"..";
	delay(600);
	cout<<"..";
	delay(700);
	cout<<"..";
	delay(800);
	cout<<"..";
	delay(800);
	sound(10*random(100));
	delay(200);
	nosound();
   int gdriver = DETECT, gmode, errorcode;
  int midx, midy;
  int radius = 100;
  initgraph(&gdriver,&gmode,"C:\\turboc3\\bgi");
   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(getmaxcolor());

   {
   circle(midx, midy, 0);
   delay(1000);
   setcolor(RED);

   gotoxy(midx,midy);
   circle(midx,midy,2);
   delay(1000);
   setcolor(RED);

   gotoxy(midx,midy);
   circle(midx,midy,3);      delay(1000);setcolor(RED);

   gotoxy(midx,midy);
   circle(midx,midy,5);      delay(1000);setcolor(RED);
					     gotoxy(midx,midy);
   circle(midx,midy,10);      delay(1000);setcolor(RED);

   gotoxy(midx,midy);
   circle(midx,midy,20);      delay(1000);setcolor(YELLOW);

   gotoxy(midx,midy);
   circle(midx,midy,30);      delay(1000);setcolor(YELLOW);
					     gotoxy(midx,midy);
   circle(midx,midy,40);      delay(1000);setcolor(YELLOW);

   gotoxy(midx,midy);
   circle(midx,midy,50);      delay(1000);setcolor(GREEN);

   gotoxy(midx,midy);
   circle(midx,midy,60);      delay(1000);setcolor(GREEN);

   gotoxy(midx,midy);
   circle(midx,midy,70);      delay(1000);setcolor(GREEN);

   gotoxy(midx,midy);
   circle(midx,midy,80);      delay(1000);setcolor(GREEN);

   gotoxy(midx,midy);
   circle(midx,midy,90);      delay(1000);setcolor(GREEN);

   gotoxy(midx,midy);
   circle(midx,midy,radius);      delay(1000);setcolor(GREEN);

   gotoxy(midx,midy);
   circle(midx,midy,110);      delay(1000);setcolor(GREEN);

   }
     delay(1000);
     closegraph();
exit(0);	break;
}
cout<<"\n\n\t\t\tRERUN(y/n): ";
cin>>ans2;
}while(ans2=='y'||ans2=='Y');
getch();
}

#include<iostream>
#include<string>
using namespace std;
class bus
{
	public:
	int ch,z,y;
	int km,hz;
	string ci,ci2;
	void data() 
	{
		h:
		cout<<"\n======================>Where Are You Now ?<=======================";
		cout<<"\n1.Ahemdabad\t2.Vadodara\t3.Surat\t\t4.Gandhinagar\t5.Jamnagar\t6.Rajkot\n";
		cout<<"\nEnter Your Choice :";
		cin>>km;
		cout<<"\nEnter The Name Of City : ";
		cin>>ci;
		system("pause");
		system("cls");
		cout<<"\n======================>When Did You GO?<=======================";
		switch(km)
		{
			case 1:
				{
					a:
					cout<<"\n1.Ahemdabad To Vadodara\n2.Ahemdabad To Surat\n3.Ahemdabad To Gandhinagar\n4.Ahemdabad To Jamnagar\n5.Ahemdabad To Rajkot";
					cout<<"\nWhen Did You Go ?";
					cin>>hz;
					cout<<"Enter The Name Of City When Do you GO ? :";
					cin>>ci2;
				switch(hz)
				{
					
					case 1:
						{
							cout<<"\n1.Ahemdabad To Vadodara";
						}
						break;
					case 2:
						{
							cout<<"\n2.Ahemdabad To Surat";
						}
						break;
					case 3:
						{
							cout<<"\n3.Ahemdabad To Gandhinagar";
						}
						break;
					case 4:
						{
							cout<<"\n4.Ahemdabad To Jamnagar";
						}
						break;
					case 5:
						{
							cout<<"\n5.Ahemdabad To Rajkot";
						}
						break;
					default:
						cout<<"\nPlease Enter Valid Choice  ";
						goto a;
					break;
				}
				}
			
			  break;
		
			  	case 2:
				{
					b:
					cout<<"\n1.Vadodra To Ahemdabad\n2.Vadodra To Surat\n3.Vadodra To Gandhinagar\n4.Vadodra To Jamnagar\n5.Vadodra To Rajkot";
					cout<<"\nWhen Did You Go ?";
					cin>>hz;
					cout<<"Enter The Name Of City When Do you GO ? :";
					cin>>ci2;
				switch(hz)
				{
					case 1:
						{
							cout<<"\n1.Vadodra To Ahemdabad";
						}
						break;
					case 2:
						{
							cout<<"\n2.Vadodra To Surat";
						}
						break;
					case 3:
						{
							cout<<"\n3.Vadodra To Gandhinagar";
						}
						break;
					case 4:
						{
							cout<<"\n4.Vadodra To Jamnagar";
						}
						break;
					case 5:
						{
							cout<<"\n5.Vadodra To Rajkot";
						}
						break;
						default:
							goto b;
								break;
				}
				}
				
				break;
			
			case 3:
				{
					c:
					cout<<"\n1.Surat To Vadodara\n2.Surat To Ahemdabad\n3.Surat To Gandhinagar\n4.Surat To Jamnagar\n5.Surat To Rajkot";
					cout<<"\nWhen Did You Go ?";
					cin>>hz;
					cout<<"Enter The Name Of City When Do you GO ? :";
					cin>>ci2;
				switch(hz)
				{
					case 1:
						{
							cout<<"\n1.Surat To Vadodara";
						}
						break;
					case 2:
						{
							cout<<"\n2.Surat To Ahemdabad";
						}
						break;
					case 3:
						{
							cout<<"\n3.Surat To Gandhinagar";
						}
						break;
					case 4:
						{
							cout<<"\n4.Surat To Jamnagar";
						}
						break;
					case 5:
						{
							cout<<"\n5.Surat To Rajkot";
						}
						break;
						default:
						cout<<"\nPlease Enter Valid Choice  ";
						goto c;
						break;
				}
				}
				break;
			
			case 4:
				{
					d:
					cout<<"\n1.Gandhinagar To Vadodara\n2.Gandhinagar To Ahemdabad\n3.Gandhinagar To Surat\n4.Gandhinagar To Jamnagar\n5.Gandhinagar To Rajkot";
					cout<<"\nWhen Did You Go ?";
					cin>>hz;
					cout<<"Enter The Name Of City When Do you GO ? :";
					cin>>ci2;
				switch(hz)
				{
					case 1:
						{
							cout<<"\n1.Gandhinagar To Vadodara";
						}
						break;
					case 2:
						{
							cout<<"\n2.Gandhinagar To Ahemdabad";
						}
						break;
					case 3:
						{
							cout<<"\n3.3.Gandhinagar To Surat";
						}
						break;
					case 4:
						{
							cout<<"\n4.Gandhinagar To Jamnagar";
						}
						break;
					case 5:
						{
							cout<<"\n5.Gandhinagar To Rajkot";
						}
						break;
						default:
						cout<<"\nPlease Enter Valid Choice  ";
						goto d;
						break;
				}
				}
				break;
			
			case 5:
				{
					e:
					cout<<"\n1.Jamnagar To Vadodara\n2.Jamnagar To Ahemdabad\n3.Jamnagar To Surat\n4.Jamnagar To Gandhigar\n5.Jamnagar To Rajkot";
					cout<<"\nWhen Did You Go ?";
					cin>>hz;
					cout<<"Enter The Name Of City When Do you GO ? :";
					cin>>ci2;
							
				switch(hz)
				{
					case 1:
						{
							cout<<"\n1.Jamnagar To Vadodara";
						}
						break;
					case 2:
						{
							cout<<"\n2.Jamnagar To Ahemdabad";
						}
	 					break;
					case 3:
						{
							cout<<"\n3.Jamnagar To Surat";
						}
						break;
					case 4:
						{
							cout<<"\n4.Jamnagar To Gandhigar";
						}
						break;
					case 5:
						{
							cout<<"\n5.Jamnagar To Rajkot";
						}
						break;
						default:
						cout<<"\nPlease Enter Valid Choice  ";
						goto e;
					break;
				}
				}
				break;
			case 6:
				{
					cout<<"\n1.Rajkot To Vadodara\n2.Rajkot To Ahemdabad\n3.Rajkot To Surat\n4.Rajkot To Jamnagar\n5.Rajkot To Gandhinagar";
					cout<<"\nWhen Did You Go ?";
					cin>>hz;
					cout<<"Enter The Name Of City When Do you GO ? :";
					cin>>ci2;
				switch(hz)
				{
					f:
					case 1:
						{
							cout<<"\n1.Rajkot To Vadodara";
						}
						break;
					case 2:
						{
							cout<<"\n2.Rajkot To Ahemdabad";
						}
						break;
					case 3:
						{
							cout<<"\n3.Rajkot To Surat";
						}
						break;
					case 4:
						{
							cout<<"\n4.Rajkot To Jamnagar";
						}
						break;
					case 5:
						{
							cout<<"\n5.Rajkot To Gandhinagar";
						}
						break;
						default:{
							cout<<"\nPlease Enter Valid Choice  ";
							goto f;
						}
						break;
				}
				}
				break;
				default:{
				cout<<"\nPlease Enter Valid Choice  ";
				goto h;
				}
				break;
				
		}
	system("pause");
	system("cls");
	}
};
class select_bus
{
	public:
	int ch,n,no[40];
	char t[40];
	char ac[30];
	void book_bus()
	{
		g:
		cout<<"\n======================>A.C OR NON/A.C?<=======================";
		cout<<"\n 1. NON A/C ,2. A.C";
		cin>>ch;
		cout<<"\nEnter In Charachter 1 NON A/C & 2. A/C ";
		cin>>ac;
		switch(ch)
		{
			case 1:
			cout<<"\nYour Non a/c Bus is booked";		
			break;
			case 2:
				cout<<"\n Your a/c bus is booked :";	
			break;
			default:
			{
				cout<<"Invalid Choice Try Again !";
				goto g;
		 	}
			break;
		}
		system("pause");
		system("cls");
		cout<<"\n======================>Enter Sheets Details<=======================";
		cout<<"\nEnter How Many Sheet You Choose:";
		cin>>n;
			for(int i=0;i<n;i++)
			{
				cout<<"\nEnter Seat No:";
				cin>>no[i];
			}
		system("pause");
		system("cls");
		}
};
class booking 
{
	public:
	char s[30];
	void slot()
	{
		int ch;	
		i:
	cout<<"\n======================>BOOK YOUR TIMING<=======================";
	cout<<"\nslot 1: 7:00 to 10:00";
	cout<<"\nslot 2: 10:30 to 2:30";
	cout<<"\nslot 3: 3:00 to 5:00";
	cout<<"\nslot 4: 5:30 to 7:00";
	cout<<"\nslot 5: 7:30 to 10:00";
	cout<<"\nBooking Your Slot :";
	cin>>ch;
	cout<<"Enter The Timing Of Slot :";
	cin>>s;
	switch(ch)
	{
		case 1:
		{
			cout<<"BOOKED slot 1 Timing is 07:00 to 10:00";
		}
		break;
		case 2:
		{
			cout<<"BOOKED slot 2 Timing is 10:30 to 02:30";
		}
		break;
		case 3:
		{
			cout<<"BOOKED slot 3 Timing is 3:00 to 5:00";
		}
		break;
		case 4:
		{
			cout<<"BOOKED slot 4 Timing is 05:30 to 07:00";
		}
		break;
		case 5:
		{
			cout<<"BOOKED slot 5 Timing is 07:30 to 10:00";
		}
		break;
		default:
			cout<<"Please Enter valid Choice :";
			goto i;
			break;
	}
		system("pause");
		system("cls");
	}		
};
class village
{
	public:
	char bo[30];
	char dr[30];
	void g_data()
	{	
		cout<<"\nPlese Enter Boarding Place :";
		cin>>bo;
		cout<<"\nPlese Enter Dropping Place :";
		cin>>dr;
	}
};
class final:public bus,public select_bus,public booking,public village
{
	public:
	int ch;
	void final_data()
	{
	 	system("pause");
		system("cls");
		cout<<"\n|-----------------------------------------------------------------------|\n";
		cout<<"|\t"<<"From:"<<ci<<"\t\t\t\t\t\t\t\t|";
		cout<<"\n|\t"<<"TO:"<<ci2<<"\t\t\t\t\t\t\t\t|";
		cout<<"\n|\t\t\t\t\t\t\t\t\t|";
		cout<<"\n|\t"<<"Bus Type is:"<<t<<"\t\t\t\t\t\t\t|";
		cout<<"\n|\t\t\t\t\t\t\t\t\t|";
		cout<<"\n|\t"<<"Slot Timing is:"<<s<<"\t\t\t\t\t\t|";
		cout<<"\n|\t\t\t\t\t\t\t\t\t|";
		cout<<"\n|\t"<<"Bording Place is:"<<bo<<"\t\t\t\t\t\t|";
		cout<<"\n|\t"<<"Dropping Place is:"<<dr<<"\t\t\t\t\t\t|";
		cout<<"\n|\t\t\t\t\t\t\t\t\t|";
		cout<<"\n|-----------------------------------------------------------------------|\n";
		cout<<"\n|----------------------Please Fill This Section-------------------------|\n";
		cout<<"|\t"<<"1.Seter,2.Sleeper,3.Personal:"<<"\t\t\t\t\t|";
		cin>>ch;
		switch(ch)
		{
			p:
			case 1:
				{
					cout<<"|\t|--------------------------|\t\t\t\t\t|\n";
					cout<<"|\t|1| |2|\t\t|3| |4| |5|\t\t\t\t\t|\n";
					cout<<"|\t|16||17|\t|18||19||20|\t\t\t\t\t|\n";
					cout<<"|\t|21||22|\t|23||24||25|\t\t\t\t\t|\n";
					cout<<"|\t|26||27|\t|28||29||30|\t\t\t\t\t|\n";
					cout<<"|\t|31||32|\t|33||34||35|\t\t\t\t\t|\n";
					cout<<"|\t|36||37|\t|38||39||40|\t\t\t\t\t|\n";
					cout<<"|\t|41||42|\t|43||44||45|\t\t\t\t\t|\n";
					cout<<"|\t|46||47|\t|48||49||50|\t\t\t\t\t|\n";
					cout<<"|\t|---------------------------|\t\t\t\t\t|";
				}
				break;
			case 2:
				{
					cout<<"|\t|----------------------------|\t\t\t\t\t|\n";
					cout<<"|\t||----|\t|----||\t||----|\t|----||\t\t\t\t\t|\n";
					cout<<"|\t||  1 |\t|  2 ||\t|| 3  |\t|  4 ||\t\t\t\t\t|\n";
					cout<<"|\t||----|\t|----||\t||----|\t|----||\t\t\t\t\t|\n";
					cout<<"|\t||----|\t|----||\t||----|\t|----||\t\t\t\t\t|\n";
					cout<<"|\t||  5 |\t|  6 ||\t|| 7  |\t|  8 ||\t\t\t\t\t|\n";
					cout<<"|\t||----|\t|----||\t||----|\t|----||\t\t\t\t\t|\n";
					cout<<"|\t||----|\t|----||\t||----|\t|----||\t\t\t\t\t|\n";
					cout<<"|\t||  9 |\t| 10 ||\t|| 11 |\t| 12 ||\t\t\t\t\t|\n";
					cout<<"|\t||----|\t|----||\t||----|\t|----||\t\t\t\t\t|\n";
					cout<<"|\t|| 13 |\t| 14 ||\t|| 15 |\t| 16 ||\t\t\t\t\t|\n";
					cout<<"|\t||----|\t|----||\t||----|\t|----||\t\t\t\t\t|\n";
					cout<<"|\t||----|\t|----||\t||----|\t|----||\t\t\t\t\t|\n";
					cout<<"|\t|| 17 |\t| 18 ||\t|| 19 |\t| 20 ||\t\t\t\t\t|\n";
					cout<<"|\t||----|\t|----||\t||----|\t|----||\t\t\t\t\t|\n";
					cout<<"|\t|----------------------------|\t\t\t\t\t|";
				}
				break;
			case 3:
				{
					cout<<"All Sets Are Reserved :";
				}
				break;
			default:
				{
					cout<<"Invalid Choice Try Agian !";
				}
				goto p;
				break;
		}
		cout<<"\n|\t"<<"You have booked "<<n<<" Seats."<<"\t\t\t\t\t|";
		for(int i=0;i<n;i++)
		{
		  	cout<<"\n|\t"<<"Seat no is :"<<no[i]<<".\t\t\t\t\t\t\t|";
		}
		cout<<"\n|-----------------------------------------------------------------------|\n";
	}
};
int main()
{
	
	final f1;
	f1.data();
	f1.book_bus();
	f1.slot();
	f1.g_data();
 	f1.final_data();
	return 1;
} 




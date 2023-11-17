#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

void addemp();
void editemp();
void searchemp();
void delemp();
void viewemp();
void addstu();
void editstu();
void searchstu();
void delstu();
void viewstu();
void addeve();
void editeve();
void searcheve();
void deleve();
void vieweve();

struct employee
{
	int id, bs, jy;
	char fname[20], gender[20], sname[20];
};
struct student
{
	int id;
	float gp;
	char fname[20], sname[20], dob[20], hd[20], gender[20];
};
struct event
{
	int id;
	char name[20], time[20], loc[20], date[20], price[20], org[20];
};
void star()
{
	for (int i = 0; i < 50; i++)
		cout << "*";
	cout << endl;
}

int main()
{
	system("Color 17");
	int a;
	char choice, choice1, choice2;

menu:	
  		star();
		cout << '\t' << '\t' << "UNI Admin Office" << endl;
		star();
		cout << endl << endl;
		cout << "Choose one of the options below: \n\n"
				"1: Employee Management           \n"
				"2: Student Management            \n"
				"3: Event Management              \n"
				"4: Exit                          \n" << endl;
		cout << "Enter a option (1-4) : ", cin >> a;
		cout << endl;
		for (int i = 0; i < 3; i++)
		{
			if (a < 1 || a > 4)
			{
				cout << "Invalid Input Try Again : ";
				cin >> a;
			}
		}
		if (a == 1)
		{
			int b;
			system("cls");

menu1:
			star();
			cout << '\t' << "Employee Management" << endl;
			star();
			cout << "\nChoose one of the options below:\n\n"
				"1.  Add Employee                 \n"
				"2.  Edit Employee                \n"
				"3.  Search Employee              \n"
				"4.  Delete Employee              \n"
				"5.  View Employees               \n"
				"6.  Main Menu				   	  \n\n";
			cout << "Enter a option (1-6) : ", cin >> b;
			for (int i = 0; i < 3; i++)
			{
				if (b < 1 || b > 6)
				{
					cout << "Invalid Input Try Again : ";
					cin >> b;
				}
			}
			switch (b)
			{
			case 1:
				system("cls");
				addemp();
				cout << endl;
				cout << "Do You Want Try Again (Y/N) :";
				cin >> choice;
				for (int i = 0; i < 3; i++)
				{
					if (choice == 'y' || choice == 'Y')
					{
						system("cls");
						addemp();
					}
					if (choice == 'n' || choice == 'N')
					{
						system("cls");
						goto menu1;
					}
					else
						cout << "Invalid Input Try Again :";
						cin >> choice;
				}
				break;
			case 2:
				system("cls");
				editemp();
				cout << endl;
				cout << "Do You Want Try Again (Y/N) :";
				cin >> choice;
				for (int i = 0; i < 3; i++)
				{
					if (choice == 'y' || choice == 'Y')
					{
						system("cls");
						editemp();
					}
					if (choice == 'n' || choice == 'N')
					{
						system("cls");
						goto menu1;
					}
					else
						cout << "Invalid Input Try Again :";
						cin >> choice;
				}
				break;
			case 3:
				system("cls");
				searchemp();
				cout << endl;
				cout << "Do You Want Try Again (Y/N) :";
				cin >> choice;
				for (int i = 0; i < 3; i++)
				{
					if (choice == 'y' || choice == 'Y')
					{
						system("cls");
						searchemp();
					}
					if (choice == 'n' || choice == 'N')
					{
						system("cls");
						goto menu1;
					}
					else
						cout << "Invalid Input Try Again :";
						cin >> choice;
				}
				break;
			case 4:
				system("cls");
				delemp();
				cout << endl;
				cout << "Do You Want Try Again (Y/N) :";
				cin >> choice;
				for (int i = 0; i < 3; i++)
				{
					if (choice == 'y' || choice == 'Y')
					{
						system("cls");
						delemp();
					}
					if (choice == 'n' || choice == 'N')
					{
						system("cls");
						goto menu1;
					}
					else
						cout << "Invalid Input Try Again :";
						cin >> choice;
				}
				break;
			case 5:
				system("cls");
				viewemp();
				cout << "Back To Main Menu (Y/N) :";
				cin >> choice;
				for (int i = 0; i < 3; i++)
				{
					if (choice == 'y' || choice == 'Y')
					{
						system("cls");
						goto menu1;
					}
					if (choice == 'n' || choice == 'N')
					{
						system("cls");
						return 0;
					}
					else
						cout << "Invalid Input Try Again :";
						cin >> choice;
				}
				break;
			case 6:
				system("cls");
				goto menu;
			default:
				cout << "Invalid Number";
			}
		}
		if (a == 2)
		{
			int b1;
			system("cls");
menu2:
			star();
			cout << '\t' << "Student Management" << endl;
			star();
			cout << "\nChoose one of the options below:\n\n"
				"1.  Add Student                  \n"
				"2.  Edit Student                 \n"
				"3.  Search Student               \n"
				"4.  Delete Student               \n"
				"5.  View Students                \n"
				"6.  Main Menu					  \n\n";
			cout << "Enter a option (1-6) : ", cin >> b1;
			for (int i = 0; i < 3; i++)
			{
				if (b1 < 1 || b1 > 6)
				{
					cout << "Invalid Input Try Again : ";
					cin >> b1;
				}
			}
			switch (b1)
			{
			case 1:
				system("cls");
				addstu();
				cout << endl;
				cout << "Do You Want Try Again (Y/N) :";
				cin >> choice1;
				for (int i = 0; i < 3; i++)
				{
					if (choice1 == 'y' || choice1 == 'Y')
					{
						system("cls");
						addstu();
					}
					if (choice1 == 'n' || choice1 == 'N')
					{
						system("cls");
						goto menu2;
					}
					else
						cout << "Invalid Input Try Again :";
						cin >> choice1;
				}
				break;
			case 2:
				system("cls");
				editstu();
				cout << endl;
				cout << "Do You Want Try Again (Y/N) :";
				cin >> choice1;
				for (int i = 0; i < 3; i++)
				{
					if (choice1 == 'y' || choice1 == 'Y')
					{
						system("cls");
						editstu();
					}
					if (choice1 == 'n' || choice1 == 'N')
					{
						system("cls");
						goto menu2;
					}
					else
						cout << "Invalid Input Try Again :";
						cin >> choice1;
				}
				break;
			case 3:
				system("cls");
				searchstu();
				cout << endl;
				cout << "Do You Want Try Again (Y/N) :";
				cin >> choice1;
				for (int i = 0; i < 3; i++)
				{
					if (choice1 == 'y' || choice1 == 'Y')
					{
						system("cls");
						searchstu();
					}
					if (choice1 == 'n' || choice1 == 'N')
					{
						system("cls");
						goto menu2;
					}
					else
						cout << "Invalid Input Try Again :";
						cin >> choice1;
				}
				break;
			case 4:
				system("cls");
				delstu();
				cout << endl;
				cout << "Do You Want Try Again (Y/N) :";
				cin >> choice1;
				for (int i = 0; i < 3; i++)
				{
					if (choice1 == 'y' || choice1 == 'Y')
					{
						system("cls");
						delstu();
					}
					if (choice1 == 'n' || choice1 == 'N')
					{
						system("cls");
						goto menu2;
					}
					else
						cout << "Invalid Input Try Again :";
						cin >> choice1;
				}
				break;
			case 5:
				system("cls");
				viewstu();
				cout << "Back To Main Menu (Y/N) :";
				cin >> choice1;
				for (int i = 0; i < 3; i++)
				{
					if (choice1 == 'y' || choice1 == 'Y')
					{
						system("cls");
						goto menu2;
					}
					if (choice1 == 'n' || choice1 == 'N')
					{
						system("cls");
						return 0;
					}
					else
						cout << "Invalid Input Try Again :";
					cin >> choice1;
				}
				break;
			case 6:
				system("cls");
				goto menu;
			default:
				cout << "Invalid Number";
			}
		}
		if (a == 3)
		{
			int b2;
			system("cls");

menu3:
			star();
			cout << '\t' << "Event Management" << endl;
			star();
			cout << "\nChoose one of the options below:\n\n"
				"1.  Add Event              \n"
				"2.  Edit Event             \n"
				"3.  Search Event           \n"
				"4.  Delete Event           \n"
				"5.  View Events            \n"
				"6.  Main Menu				\n\n";
			cout << "Enter a option (1-6) : ", cin >> b2;
			for (int i = 0; i < 3; i++)
			{
				if (b2 < 1 || b2 > 6)
				{
					cout << "Invalid Input Try Again : ";
					cin >> b2;
				}
			}
			switch (b2)
			{
			case 1:
				system("cls");
				addeve();
				cout << endl;
				cout << "Do You Want Try Again (Y/N) :";
				cin >> choice2;
				for (int i = 0; i < 3; i++)
				{
					if (choice2 == 'y' || choice2 == 'Y')
					{
						system("cls");
						addeve();
					}
					if (choice2 == 'n' || choice2 == 'N')
					{
						system("cls");
						goto menu3;
					}
					else
						cout << "Invalid Input Try Again :";
						cin >> choice2;
				}
				break;
			case 2:
				system("cls");
				editeve();
				cout << endl;
				cout << "Do You Want Try Again (Y/N) :";
				cin >> choice2;
				for (int i = 0; i < 3; i++)
				{
					if (choice2 == 'y' || choice2 == 'Y')
					{
						system("cls");
						editeve();
					}
					if (choice2 == 'n' || choice2 == 'N')
					{
						system("cls");
						goto menu3;
					}
					else
						cout << "Invalid Input Try Again :";
						cin >> choice2;
				}
				break;
			case 3:
				system("cls");
				searcheve();
				cout << endl;
				cout << "Do You Want Try Again (Y/N) :";
				cin >> choice2;
				for (int i = 0; i < 3; i++)
				{
					if (choice2 == 'y' || choice2 == 'Y')
					{
						system("cls");
						searcheve();
					}
					if (choice2 == 'n' || choice2 == 'N')
					{
						system("cls");
						goto menu3;
					}
					else
						cout << "Invalid Input Try Again :";
						cin >> choice2;
				}
				break;
			case 4:
				system("cls");
				deleve();
				cout << endl;
				cout << "Do You Want Try Again (Y/N) :";
				cin >> choice2;
				for (int i = 0; i < 3; i++)
				{
					if (choice2 == 'y' || choice2 == 'Y')
					{
						system("cls");
						deleve();
					}
					if (choice2 == 'n' || choice2 == 'N')
					{
						system("cls");
						goto menu3;
					}
					else
						cout << "Invalid Input Try Again :";
						cin >> choice2;
				}
				break;
			case 5:
				system("cls");
				vieweve();
				cout << "Back To Main Menu (Y/N) :";
				cin >> choice2;
				for (int i = 0; i < 3; i++)
				{
					if (choice2 == 'y' || choice2 == 'Y')
					{
						system("cls");
						goto menu3;
					}
					if (choice2 == 'n' || choice2 == 'N')
					{
						system("cls");
						return 0;
					}
					else
						cout << "Invalid Input Try Again :";
					cin >> choice2;
				}
				break;
			case 6:
				system("cls");
				goto menu;
			default:
				cout << "Invalid Number";
			}
		}
		if (a == 4)
		return 0;
}

employee k, l, m, n, o, p;

void addemp()
{
	cout << "\n\nPlease enter the following data to add.\n\n";
	cout << "Enter Employee ID	       : ", cin >> k.id;
	cout << "Enter First Name               : ", cin >> l.fname;
	cout << "Enter Second Name              : ", cin >> m.sname;
	cout << "Enter Employee Basic Salary    : ", cin >> n.bs;
	cout << "Enter Joining Year             : ", cin >> o.jy;
	cout << "Enter Gender (Male/Female)     : ", cin >> p.gender;
	ofstream out("employee.txt", ios::app);
	out << "\n" << k.id << "\t" << l.fname << "\t" << m.sname << "\t" << n.bs << "\t" << o.jy << "\t" << p.gender;
	cout << "\nYour Data has been saved.\n\n";
}
void editemp()
{
	int e;
	cout << "Enter ID of employee to be edited : ", cin >> e;
	{
		ofstream out("TEMP.txt", ios::out);
		ifstream in("employee.txt", ios::in);
		while (!in.eof())
		{
			in >> k.id >> l.fname >> m.sname >> n.bs >> o.jy >> p.gender;
			if (e != k.id)
			{
				ofstream out("TEMP.txt", ios::app);
				out << "\n" << k.id << "\t" << l.fname << "\t" << m.sname << "\t" << n.bs << "\t" << o.jy << "\t" << p.gender;
			}
			else
			{
				cout << "\nEmployee ID\tFirst Name\tSecond Name\tBasic Salary\tJoining Year\tGender\n";
				cout << "\n" << k.id << "\t\t" << l.fname << "\t\t" << m.sname << "\t\t" << n.bs << "\t\t" << o.jy << "\t\t" << p.gender;
			}
		}
	}
	remove("employee.txt");
	addemp();
}
void searchemp()
{	
	int d,E,F,G;
	cout << "Enter unique ID to search specific employee data : ", cin >> d;
	ifstream in("employee.txt", ios::in);
	while (!in.eof())
	{
		in >> k.id >> l.fname >> m.sname >> n.bs >> o.jy >> p.gender;
		if (d == k.id)
		{
			cout << "Employee First Name:";
			cout << l.fname << endl;
			cout << "Employee Last Name:";
			cout << m.sname << endl;
			cout << "Employee ID:";
			cout << k.id << endl;
			cout << "Basic Salary:";
			cout << n.bs << endl;
			cout << "Joining Year:";
			cout << o.jy << endl;
			E = o.jy - 2019;
			E = E * (-1);
			cout << "Employment Years of Employee is:";
			cout << E;
			cout << endl;
			if (E >= 0 && E <= 5)
			{
				F = n.bs * 5 / 100;
				G = F + n.bs;
				cout << "Employee Bonus is: 5%" << endl;
				cout << "Total Salary of Employee is:";
				cout << G;
			}
			else if (E >= 6 && E <= 10)
			{
				F = n.bs * 10 / 100;
				G = F + n.bs;
				cout << "Employee Bonus is: 10%" << endl;
				cout << "Total Salary of Employee is:";
				cout << G;
			}
			else if (E > 10)
			{
				F = n.bs * 15 / 100;
				G = F + n.bs;
				cout << "Employee Bonus is: 15%" << endl;
				cout << "Total Salary of Employee is:";
				cout << G;
			}
			cout << endl<<endl;
		}
	}
}
void delemp()
{
	int c;
	cout << "Enter ID of employee to be deleted : ", cin >> c;
	{
		cout << "\nEmployee ID\tFirst Name\tSecond Name\tBasic Salary\tJoining Year\tGender\n";
		ofstream out("TEMP.txt", ios::out);
		ifstream in("employee.txt", ios::in);
		while (!in.eof())
		{
			in >> k.id >> l.fname >> m.sname >> n.bs >> o.jy >> p.gender;
			if (c != k.id)
			{
				cout << "\n" << k.id << "\t\t" << l.fname << "\t\t" << m.sname << "\t\t" << n.bs << "\t\t" << o.jy << "\t\t" << p.gender;
				ofstream out("TEMP.txt", ios::app);
				out << "\n" << k.id << "\t" << l.fname << "\t" << m.sname << "\t" << n.bs << "\t" << o.jy << "\t" << p.gender;
			}
		}
	}
	remove("employee.txt");
} 
void viewemp()
{
	cout << endl;
	star();
	cout << "\nEmployee ID\tFirst Name\tSecond Name\tBasic Salary\tJoining Year\tGender\n";
	ifstream in("employee.txt", ios::in);
	while (!in.eof())
	{
		in >> k.id >> l.fname >> m.sname >> n.bs >> o.jy >> p.gender;
		cout << "\n" << k.id << "\t\t" << l.fname << "\t\t" << m.sname << "\t\t" << n.bs << "\t\t" << o.jy << "\t\t" << p.gender << endl;
	}
	cout << "\n\n";
	star();
}

student k1, l1, m1, n1, o1, p1,q1;
	
void addstu()
{
	cout << "\n\nPlease enter the following data to add.\n\n";
	cout << "Enter Student reg.no		  : ", cin >> k1.id;
	cout << "Enter First Name                  : ", cin >> l1.fname;
	cout << "Enter Second Name                 : ", cin >> m1.sname;
	cout << "Enter Date of Birth (mm/dd/yy)	   : ", cin >> n1.dob;
	cout << "Enter Admission Date              : ", cin >> o1.hd;
	cout << "Enter CGPA Of Student             : ", cin >> q1.gp;
	cout << "Enter Gender (Male/Female)        : ", cin >> p1.gender;
	ofstream out("student.txt", ios::app);
	out << "\n" << k1.id << "\t" << l1.fname << "\t" << m1.sname << "\t" << n1.dob << "\t" << o1.hd << "\t" <<q1.gp << "\t" << p1.gender;
	cout << "\nYour Data has been saved.\n\n";
}
void editstu()
{
	int e;
	cout << "Enter Reg.no of Student to be edited : ", cin >> e;
	{
		ofstream out("TEMP1.txt", ios::out);
		ifstream in("student.txt", ios::in);
		while (!in.eof())
		{
			in >> k1.id >> l1.fname >> m1.sname >> n1.dob >> o1.hd >> q1.gp >> p1.gender;

			if (e != k1.id)
			{
				ofstream out("TEMP.txt", ios::app);
				out << "\n" << k1.id << "\t" << l1.fname << "\t" << m1.sname << "\t" << n1.dob << "\t" << o1.hd << "\t" <<q1.gp << "\t" << p1.gender;
			}
			else
			{
				cout << "\nStudent reg.no\tFirst Name\tSecond Name\tDate of Birth\tAdmission Date\tGPA\tGender\n";
				cout << "\n" << k1.id << "\t\t" << l1.fname << "\t\t" << m1.sname << "\t\t" << n1.dob << "\t\t" << o1.hd << "\t\t" << q1.gp << "\t\t" << p1.gender;
			}
		}
	}
	remove("student.txt");
	addstu();
}
void searchstu()
{
	int d;
	cout << "Enter unique Reg.no to search specific Student data : ", cin >> d;
	ifstream in("student.txt", ios::in);
	while (!in.eof())
	{
		in >> k1.id >> l1.fname >> m1.sname >> n1.dob >> o1.hd >> q1.gp >> p1.gender;
		if (d == k1.id)
		{
			cout << "\nStudent reg.no\tFirst Name\tSecond Name\tDate of Birth\tAdmission Date\tGPA\tGender\n";
			cout << "\n" << k1.id << "\t\t" << l1.fname << "\t\t" << m1.sname << "\t\t" << n1.dob << "\t\t" << o1.hd << "\t\t" <<q1.gp << "\t\t" << p1.gender;
		}
	}
}
void delstu()
{
	int c;
	cout << "Enter Reg.no of Student to be deleted : ", cin >> c;
	{
		cout << "\nStudent reg.no\tFirst Name\tSecond Name\tDate of Birth\tAdmission Date\tGPA\tGender\n";
		ofstream out("TEMP1.txt", ios::out);
		ifstream in("student.txt", ios::in);
		while (!in.eof())
		{
			in >> k1.id >> l1.fname >> m1.sname >> n1.dob >> o1.hd >> q1.gp >> p1.gender;
			if (c != k1.id)
			{
				cout << "\n" << k1.id << "\t\t" << l1.fname << "\t\t" << m1.sname << "\t\t" << n1.dob << "\t\t" << o1.hd << "\t\t" << q1.gp << "\t\t" << p1.gender;
				ofstream out("TEMP1.txt", ios::app);
				out << "\n" << k1.id << "\t" << l1.fname << "\t" << m1.sname << "\t" << n1.dob << "\t" << o1.hd << "\t" << q1.gp << "\t" << p1.gender;
			}
		}
	}
	remove("student.txt");
}
void viewstu()
{
	cout << endl;
	star();
	cout << "\nStudent reg.no\tFirst Name\tSecond Name\tDate of Birth\tAdmission Date\tGender\n";
	ifstream in("student.txt", ios::in);
	while (!in.eof())
	{
		in >> k1.id >> l1.fname >> m1.sname >> n1.dob >> o1.hd >> q1.gp >> p1.gender;
		cout << "\n" << k1.id << "\t\t" << l1.fname << "\t\t" << m1.sname << "\t\t" << n1.dob << "\t\t" << o1.hd << "\t\t" << q1.gp << "\t\t" << p1.gender;
	}
	cout << "\n\n";
	star();
}

 event j2, k2, l2, m2, n2, o2, p2;

void addeve()
{
	cout << "\n\nPlease enter the following data to add.\n\n";
	cout << "Enter Event No.                 : ", cin >> j2.id;
	cout << "Enter Event Name                : ", cin >> k2.name;
	cout << "Enter Event Timing              : ", cin >> l2.time;
	cout << "Enter Event Location            : ", cin >> m2.loc;
	cout << "Enter Event Date (mm/dd/yy)     : ", cin >> n2.date;
	cout << "Enter Ticket Price              : ", cin >> o2.price;
	cout << "Enter Organizer Name            : ", cin >> p2.org;
	ofstream out("student.txt", ios::app);
	out << "\n" << j2.id << k2.name << "\t" << l2.time << "\t" << m2.loc << "\t" << n2.date << "\t" << o2.price << "\t" << p2.org;
	cout << "\nYour Data has been saved.\n\n";
}
void editeve()
{
	int e;
	cout << "Enter Event No. to be edited : ", cin >> e;
	{
		ofstream out("TEMP2.txt", ios::out);
		ifstream in("event.txt", ios::in);
		while (!in.eof())
		{
			in >> j2.id >> k2.name >> l2.time >> m2.loc >> n2.date >> o2.price >> p2.org;
			if (e != j2.id)
			{
				ofstream out("TEMP2.txt", ios::app);
				out << "\n" << j2.id << k2.name << "\t" << l2.time << "\t" << m2.loc << "\t" << n2.date << "\t" << o2.price << "\t" << p2.org;
			}
			else
			{
				cout << "\nEvent No\tEvent Name\tEvent Timing\tEvent Location\tEvent Date\tTicket Price\tOrganizer Name\n";
				cout << "\n" << j2.id << k2.name << "\t\t" << l2.time << "\t\t" << m2.loc << "\t\t" << n2.date << "\t\t" << o2.price << "\t\t" << p2.org;
			}
		}
	}
	remove("event.txt");
	addeve();
}
void searcheve()
{
	int d;
	cout << "Enter unique No. to search specific event data : ", cin >> d;
	ifstream in("event.txt", ios::in);
	while (!in.eof())
	{
		in >> j2.id >> k2.name >> l2.time >> m2.loc >> n2.date >> o2.price >> p2.org;
		if (d == j2.id)
		{
			cout << "\nEvent No.\tEvent Name\tEvent Timing\tEvent Location\tEvent Date\tTicket Price\tOrganizer Name\n";
			cout << "\n" << j2.id << k2.name << "\t\t" << l2.time << "\t\t" << m2.loc << "\t\t" << n2.date << "\t\t" << o2.price << "\t\t" << p2.org;
		}
	}
}
void deleve()
{
	int c;
	cout << "Enter No. of Event to be deleted : ", cin >> c;
	{
		cout << "\nEvent No.\tEvent Name\tEvent Timing\tEvent Location\tEvent Date\tTicket Price\tOrganizer Name\n";
		ofstream out("TEMP2.txt", ios::out);
		ifstream in("event.txt", ios::in);
		while (!in.eof())
		{
			in >> j2.id >> k2.name >> l2.time >> m2.loc >> n2.date >> o2.price >> p2.org;
			if (c != j2.id)
			{
				cout << "\n" << j2.id << k2.name << "\t\t" << l2.time << "\t\t" << m2.loc << "\t\t" << n2.date << "\t\t" << o2.price << "\t\t" << p2.org;
				ofstream out("TEMP2.txt", ios::app);
				out << "\n" << j2.id << k2.name << "\t" << l2.time << "\t" << m2.loc << "\t" << n2.date << "\t" << o2.price << "\t" << p2.org;
			}
		}
	}
	remove("event.txt");
}
void vieweve()
{
	cout << endl;
	star();
	cout << "\nEvent No.\tEvent Name\tEvent Timing\tEvent Location\tEvent Date\tTicket Price\tOrganizer Name\n";
	ifstream in("event.txt", ios::in);
	while (!in.eof())
	{
		in >> j2.id >> k2.name >> l2.time >> m2.loc >> n2.date >> o2.price >> p2.org;
		cout << "\n" << j2.id << k2.name << "\t\t" << l2.time << "\t\t" << m2.loc << "\t\t" << n2.date << "\t\t" << o2.price << "\t\t" << p2.org;
	}
	cout << "\n\n";
	star();	
}

#include <iostream>
#include <fstream>
#include <conio.h>
#include<string>

using namespace std;

class car
{
protected:
	int model = 0, price = 0;
	string make = "", name = "";
public:
	void addcar()
	{
		cout << "\n\n Please enter the following data.\n\n";
		cout << " Enter Car model : ", cin >> model;
		cout << " Enter Car Name : ", cin >> name;
		cout << " Enter Car make : ", cin >> make;
		cout << " Enter Car price : ", cin >> price;
		ofstream out("car.txt", ios::app);
		out << "\n" << model << "\t" << name << "\t" << make << "\t" << price;
		cout << "\n Your Data has been saved.\n\n";
	}
	void editcar()
	{
		int e;
		system("cls");
		cout << " Enter car model to be edited : ", cin >> e;
		{
			ofstream out("TEMP.txt", ios::out);
			ifstream in("car.txt", ios::in);
			while (!in.eof())
			{
				in >> model >> name >> make >> price;
				if (e != model)
				{
					ofstream out("TEMP.txt", ios::app);
					out << "\n" << model << "\t" << name << "\t" << make << "\t" << price;
				}
				else
				{
					cout << "\n Car model\tcar Name\tCar make\tCar price\n";
					cout << "\n" << model << "\t\t" << name << "\t\t" << make << "\t\t" << price;
				}
			}
		}
		remove("car.txt");
		addcar();
	}
	void searchcar()
	{
		int a, b, d;
		string c;
		system("cls");
		cout << " 1. Search car by model \n 2. Search car by make \n 3. Search car by price \n Please select an above option : ";
		cin >> a;
		for (int i = 0; i < 3; i++)
		{
			if (a < 1 || a > 3)
			{
				cout << " Invalid Input Try Again : ", cin >> a;
			}
		}
		if (a == 1)
		{
			system("cls");
			cout << " Enter Car model to search : ", cin >> b;
			ifstream in("car.txt", ios::in);
			while (!in.eof())
			{
				in >> model >> name >> make >> price;
				if (b == model)
				{
					cout << "\n Car model\tCar Name\tCar make\tCar price\n";
					cout << "\n" << model << "\t\t" << name << "\t\t" << make << "\t\t" << price << endl;
				}
			}
		}
		else if (a == 2)
		{
			system("cls");
			cout << " Enter Car make to search : ", cin >> c;
			ifstream in("car.txt", ios::in);
			while (!in.eof())
			{
				in >> model >> name >> make >> price;
				if (c == make)
				{
					cout << "\n Car model\tCar Name\tCar make\tCar price\n";
					cout << "\n" << model << "\t\t" << name << "\t\t" << make << "\t\t" << price << endl;
				}
			}
		}
		else if (a == 3)
		{
			system("cls");
			cout << " Enter Car price to search : ", cin >> d;
			ifstream in("car.txt", ios::in);
			while (!in.eof())
			{
				in >> model >> name >> make >> price;
				if (d == price)
				{
					cout << "\n Car model\tCar Name\tCar make\tCar price\n";
					cout << "\n" << model << "\t\t" << name << "\t\t" << make << "\t\t" << price << endl;
				}
			}
		}
	}
	void delcar()
	{
		int c;
		cout << " Enter Car model to be deleted : ", cin >> c;
		{
			cout << "\n Car model\tCar Name\tCar Make\tCar price\n";
			ofstream out("TEMP.txt", ios::out);
			ifstream in("car.txt", ios::in);
			while (!in.eof())
			{
				in >> model >> name >> make >> price;
				if (c != model)
				{
					cout << "\n" << model << "\t\t" << name << "\t\t" << make << "\t\t" << price;
					ofstream out("TEMP.txt", ios::app);
					out << "\n" << model << "\t" << name << "\t" << make << "\t" << price;
				}
			}
		}
		remove("car.txt");
	}
	void viewcar()
	{
		cout << endl;
		cout << "\n Car model\tCar Name\tCar make\tCar price\n";
		ifstream in("car.txt", ios::in);
		while (!in.eof())
		{
			in >> model >> name >> make >> price;
			cout << "\n" << model << "\t\t" << name << "\t\t" << make << "\t\t" << price << endl;
		}
		cout << "\n\n";
	}
};

class request :public car
{
protected:
	int userid = 0;
	string fname = "";
public:
	void addrequest()
	{
		cout << "\n\nPlease enter the following data.\n\n";
		cout << " Enter User ID : ", cin >> userid;
		cout << " Enter First Name : ", cin >> fname;
		cout << " Enter Car Model : ", cin >> model;
		cout << " Enter Car Make : ", cin >> make;
		ofstream out("request.txt", ios::app);
		out << "\n" << userid << "\t" << fname << "\t" << model << "\t" << make;
		cout << "\n Your Data has been saved.\n\n";
	}
	void approverequest()
	{
		int e;
		char a;
		cout << " Enter User ID to be Approved : ", cin >> e;
		ifstream in("request.txt", ios::in);
		while (!in.eof())
		{
			in >> userid >> fname >> model >> make;
			if (e == userid)
			{
				cout << "\n Do You Want To Approve Request (Y/N) : ";
				cin >> a;
				if (a == 'y' || a == 'Y')
				{
					cout << "\n Request Approved";
				}
				else
				{
					cout << "\n Request Removed";
				}
			}
			else
			{
				cout << " No request Found";
			}
		}
	}
	void freecar()
	{
		int c;
		cout << " Enter ID of user to free the car : ", cin >> c;
		{
			cout << "\n User ID\tFirst Name\tmodel\tmake\n";
			ofstream out("TEMP.txt", ios::out);
			ifstream in("request.txt", ios::in);
			while (!in.eof())
			{
				in >> userid >> fname >> model >> make;
				if (c != userid)
				{
					cout << "\n" << userid << "\t\t" << fname << "\t\t" << model << "\t\t" << make;
					ofstream out("TEMP.txt", ios::app);
					out << "\n" << userid << "\t" << fname << "\t" << model << "\t" << make;
				}
			}
		}
		remove("request.txt");
	}
	void viewrequest()
	{
		cout << endl;
		cout << "\n User ID\tFirst Name\tCar Model\tCar Make\n";
		ifstream in("user.txt", ios::in);
		while (!in.eof())
		{
			in >> userid >> fname >> model >> make;
			cout << "\n" << userid << "\t\t" << fname << "\t\t" << model << "\t\t" << make << endl;
		}
		cout << "\n\n";
	}
};
class user :public request
{
protected:
	int phonenum = 0;
	string lname = "", pass = "";
public:
	void adduser()
	{
		cout << "\n\n Please enter the following data.\n\n";
		cout << " Enter User ID : ", cin >> userid;
		cout << " Enter First Name : ", cin >> fname;
		cout << " Enter Last Name : ", cin >> lname;
		cout << " Enter Phone Number : ", cin >> phonenum;
		cout << " Enter Password : ", cin >> pass;
		ofstream out("user.txt", ios::app);
		out << "\n" << userid << "\t" << fname << "\t" << lname << "\t" << phonenum << "\t" << pass;
		cout << "\n Your Data has been saved.\n\n";
	}
	void edituser()
	{
		int e;
		cout << " Enter ID of User to be edited : ", cin >> e;
		{
			ofstream out("TEMP.txt", ios::out);
			ifstream in("user.txt", ios::in);
			while (!in.eof())
			{
				in >> userid >> fname >> lname >> phonenum >> pass;
				if (e != userid)
				{
					ofstream out("TEMP.txt", ios::app);
					out << "\n" << userid << "\t" << fname << "\t" << lname << "\t" << phonenum << "\t" << pass;
				}
				else
				{
					cout << "\n User ID\tFirst Name\tLast Name\tPhone Number\tPassword\n";
					cout << "\n" << userid << "\t\t" << fname << "\t\t" << lname << "\t\t" << phonenum << "\t\t" << pass;
				}
			}
		}
		remove("user.txt");
		adduser();
	}
	void verifyuser()
	{
		int a, b;
		char d;
		string e;
	start13:
		cout << " Enter your User ID : ", cin >> a;
		cout << " Enter your Password : ", cin >> e;
		ifstream in("user.txt", ios::in);
		while (!in.eof())
		{
			in >> userid >> fname >> lname >> phonenum >> pass;
			if (a == userid && e == pass)
			{
				system("cls");
			start14:
				cout << " 1. Search Car \n 2. Make Request \n\n Please Choose an above option : ";
				cin >> b;
				for (int i = 0; i < 3; i++)
				{
					if (b < 1 || b > 2)
					{
						cout << " Invalid Input Try Again : ";
						cin >> b;
					}
				}
				if (b == 1)
				{
					system("cls");
					searchcar();
				}
				else if (b == 2)
				{
					system("cls");
					addrequest();
				}
				else
				{
					for (int i = 0; i < 3; i++)
					{
						if (b < 1 || b > 2)
						{
							cout << " Invalid Input Try Again : ";
							cin >> b;
						}
					}
				}
			}
			else
			{
				cout << " Invalid option Try again\n\n";
				goto start13;
			}
			cout << "\n Do you want to try again (Y/N) : ";
			cin >> d;
			if (d == 'y' || d == 'Y')
			{
				goto start14;
			}
			else
			{
				cout << " Thank You ";
			}
		}
	}
	void searchuser()
	{
		int d;
		cout << " Enter unique ID to search specific user data : ", cin >> d;
		ifstream in("user.txt", ios::in);
		while (!in.eof())
		{
			in >> userid >> fname >> lname >> phonenum >> pass;
			if (d == userid)
			{
				cout << "\n User ID\tFirst Name\tLast Name\tPhone Number\tPassword\n";
				cout << "\n" << userid << "\t\t" << fname << "\t\t" << lname << "\t\t" << phonenum << "\t\t" << pass << endl;
			}
		}
	}
	void deluser()
	{
		int c;
		cout << " Enter ID of user to be deleted : ", cin >> c;
		{
			cout << "\n User ID\tFirst Name\tLast Name\tPhone Number\n";
			ofstream out("TEMP.txt", ios::out);
			ifstream in("user.txt", ios::in);
			while (!in.eof())
			{
				in >> userid >> fname >> lname >> phonenum;
				if (c != userid)
				{
					cout << "\n" << userid << "\t\t" << fname << "\t\t" << lname << "\t\t" << phonenum;
					ofstream out("TEMP.txt", ios::app);
					out << "\n" << userid << "\t" << fname << "\t" << lname << "\t" << phonenum;
				}
			}
		}
		remove("user.txt");
	}
	void viewuser()
	{
		cout << endl;
		cout << "\n User ID\tFirst Name\tLast Name\tPhone Number\tPassword\n";
		ifstream in("user.txt", ios::in);
		while (!in.eof())
		{
			in >> userid >> fname >> lname >> phonenum >> pass;
			cout << "\n" << userid << "\t\t" << fname << "\t\t" << lname << "\t\t" << phonenum << "\t\t" << pass << endl;
		}
		cout << "\n\n";
	}
};
void star()
{
	for (int i = 0; i < 60; i++)
	{
		cout << "*";
	}
	cout << endl;
}
int main()
{
	car  c1;
	user u;
	request r;
	int a, a1, a2, a3, d, id;
	char b;
	string pass;
	system("color 1F");
start12:
	star();
	cout << "\t\t WELCOME To SZABIST CAR RENTAL\n\n";
	star();
	cout << "\n If You Are An User Press 1 And For Admin Press 2 : ", cin >> d;
	for (int i = 0; i < 3; i++)
	{
		if (d < 1 || d > 2)
		{
			cout << " Invalid Input Try Again : ", cin >> d;
		}
	}
	if (d == 1)
	{
		u.verifyuser();
	}
	if (d == 2)
	{
		system("cls");
	start13:
		system("cls");
		cout << " Please enter Admin ID  : ", cin >> id;
		cout << endl;
		cout << " Please enter Password : ", cin >> pass;
		if (id == 1234 && pass == "admin123")
		{
		start20:
			system("cls");
			cout << " 1. Car Managment \n 2. User Management \n 3. Request Management \n\n Please choose an above option : ", cin >> a1;
			for (int i = 0; i < 3; i++)
			{
				if (a1 < 1 || a1 > 3)
				{
					cout << " Invalid Input Try Again : ", cin >> a1;
				}
			}
			switch (a1)
			{
			case 1:
			start:
				system("cls");
				cout << " 1. Add Car \n 2. Search Car \n 3. View Cars \n 4. Delete Car \n 5. Edit car \n 6. Main Menu \n 7. Exit \n\n Please choose an above option : ";
				cin >> a;
				for (int i = 0; i < 3; i++)
				{
					if (a < 1 || a > 7)
					{
						cout << " Invalid Input Try Again : ", cin >> a;
					}
				}
				switch (a)
				{
				case 1:
				start1:
					system("cls");
					c1.addcar();
					cout << "\n Do you want to try again (Y/N) : ", cin >> b;
					if (b == 'y' || b == 'Y')
					{
						goto start1;
					}
					else if (b == 'n' || b == 'N')
					{
						goto start;
					}
					else
					{
						for (int i = 0; i < 3; i++)
						{
							cout << " Invalid Input Try Again : ", cin >> b;
						}
					}
					break;
				case 2:
				start2:
					system("cls");
					c1.searchcar();
					cout << "\n Do you want to try again (Y/N) : ", cin >> b;
					if (b == 'y' || b == 'Y')
					{
						goto start2;
					}
					else if (b == 'n' || b == 'N')
					{
						goto start;
					}
					else
					{
						for (int i = 0; i < 3; i++)
						{
							cout << " Invalid Input Try Again : ", cin >> b;
						}
					}
					break;
				case 3:
					system("cls");
					c1.viewcar();
					cout << "\n Do You Want To Go To Main Menu (Y/N) : ", cin >> b;
					if (b == 'y' || b == 'Y')
					{
						goto start;
					}
					else if (b == 'n' || b == 'N')
					{
						return 0;
					}
					else
					{
						for (int i = 0; i < 3; i++)
						{
							cout << " Invalid Input Try Again : ", cin >> b;
						}
					}
					break;
				case 4:
				start4:
					system("cls");
					c1.delcar();
					cout << "\n Do you want to try again (Y/N) : ", cin >> b;
					if (b == 'y' || b == 'Y')
					{
						goto start4;
					}
					else if (b == 'n' || b == 'N')
					{
						goto start;
					}
					else
					{
						for (int i = 0; i < 3; i++)
						{
							cout << " Invalid Input Try Again : ", cin >> b;
						}
					}
					break;
				case 5:
				start5:
					system("cls");
					c1.editcar();
					cout << "\n Do you want to try again (Y/N) : ", cin >> b;
					if (b == 'y' || b == 'Y')
					{
						goto start5;
					}
					else if (b == 'n' || b == 'N')
					{
						goto start;
					}
					else
					{
						for (int i = 0; i < 3; i++)
						{
							cout << " Invalid Input Try Again : ", cin >> b;
						}
					}
					break;
				case 6:
					goto start20;
					break;
				case 7:
					return 0;
				}
			case 2:
			start9:
				system("cls");
				cout << " 1. Add User \n 2. Search User \n 3. View User \n 4. Delete User \n 5. Edit User \n 6. Main Menu \n 7. Exit \n\n Please choose an above option : ";
				cin >> a2;
				for (int i = 0; i < 3; i++)
				{
					if (a2 < 1 || a2 > 7)
					{
						cout << " Invalid Input Try Again : ", cin >> a2;
					}
				}
				switch (a2)
				{
				case 1:
				start6:
					system("cls");
					u.adduser();
					cout << "\n Do you want to try again (Y/N) : ", cin >> b;
					if (b == 'y' || b == 'Y')
					{
						goto start6;
					}
					else if (b == 'n' || b == 'N')
					{
						goto start9;
					}
					else
					{
						for (int i = 0; i < 3; i++)
						{
							cout << " Invalid Input Try Again : ", cin >> b;
						}
					}
					break;
				case 2:
				start7:
					system("cls");
					u.searchuser();
					cout << "\n Do you want to try again (Y/N) : ", cin >> b;
					if (b == 'y' || b == 'Y')
					{
						goto start7;
					}
					else if (b == 'n' || b == 'N')
					{
						goto start9;
					}
					else
					{
						for (int i = 0; i < 3; i++)
						{
							cout << " Invalid Input Try Again : ", cin >> b;
						}
					}
					break;
				case 3:
					system("cls");
					u.viewuser();
					cout << "\n Do You Want To Go To Main Menu (Y/N) : ", cin >> b;
					if (b == 'y' || b == 'Y')
					{
						goto start9;
					}
					else if (b == 'n' || b == 'N')
					{
						return 0;
					}
					else
					{
						for (int i = 0; i < 3; i++)
						{
							cout << " Invalid Input Try Again : ", cin >> b;
						}
					}
					break;
				case 4:
				start10:
					system("cls");
					u.deluser();
					cout << "\n Do you want to try again (Y/N) : ", cin >> b;
					if (b == 'y' || b == 'Y')
					{
						goto start10;
					}
					else if (b == 'n' || b == 'N')
					{
						goto start9;
					}
					else
					{
						for (int i = 0; i < 3; i++)
						{
							cout << " Invalid Input Try Again : ", cin >> b;
						}
					}
					break;
				case 5:
				start11:
					system("cls");
					u.edituser();
					cout << "\n Do you want to try again (Y/N) : ", cin >> b;
					if (b == 'y' || b == 'Y')
					{
						goto start11;
					}
					else if (b == 'n' || b == 'N')
					{
						goto start9;
					}
					else
					{
						for (int i = 0; i < 3; i++)
						{
							cout << " Invalid Input Try Again : ", cin >> b;
						}
					}
					break;
				case 6:
					goto start20;
					break;
				case 7:
					return 0;
				}
			case 3:
			start15:
				system("cls");
				cout << " 1. Approve a Request \n 2. Free a car \n 3. View Requests \n 4. Main Menu \n 5. Exit \n\n Please choose an above option : ";
				cin >> a3;
				for (int i = 0; i < 3; i++)
				{
					if (a3 < 1 || a3 > 5)
					{
						cout << " Invalid Input Try Again : ", cin >> a3;
					}
				}
				switch (a3)
				{
				case 1:
				start17:
					system("cls");
					r.approverequest();
					cout << "\n Do You Want To Go To Main Menu (Y/N) : ", cin >> b;
					if (b == 'y' || b == 'Y')
					{
						goto start15;
					}
					else if (b == 'n' || b == 'N')
					{
						return 0;
					}
					else
					{
						for (int i = 0; i < 3; i++)
						{
							cout << " Invalid Input Try Again : ", cin >> b;
						}
					}
					break;
				case 2:
				start18:
					system("cls");
					r.freecar();
					cout << "\n Do you want to try again (Y/N) : ", cin >> b;
					if (b == 'y' || b == 'Y')
					{
						goto start18;
					}
					else if (b == 'n' || b == 'N')
					{
						goto start15;
					}
					else
					{
						for (int i = 0; i < 3; i++)
						{
							cout << " Invalid Input Try Again : ", cin >> b;
						}
					}
					break;
				case 3:
					system("cls");
					r.viewrequest();
					cout << "\n Do You Want To Go To Main Menu (Y/N) : ", cin >> b;
					if (b == 'y' || b == 'Y')
					{
						goto start15;
					}
					else if (b == 'n' || b == 'N')
					{
						return 0;
					}
					else
					{
						for (int i = 0; i < 3; i++)
						{
							cout << " Invalid Input Try Again : ", cin >> b;
						}
					}
					break;
				case 4:
					goto start20;
					break;
				case 5:
					return 0;
				}
			}
		}
		else
		{
			if (id != 1234 && pass != "admin1234")
			{
				cout << "\n Invalid Input Try Again";
				goto start13;
			}
		}
	}
	cout << endl;
	return 0;
}
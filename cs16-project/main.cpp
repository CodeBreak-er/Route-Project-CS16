#include <iostream>

using namespace std;
class Person
{
protected:
	int id;
	string name, password;
	double balance;
public:
	//Setters:
	void set_id(int id) { this->id = id; }
	void set_name(string name) { this->name = name; }
	void set_password(string password) { this->password = password; }
	void set_balance(double balance) { this->balance = balance; }

	//Getters:
	int get_id() { return id; }
	string get_name() { return name; }
	string get_password() { return password; }
	double get_balance() { return balance; }

	void display()
	{
		cout << "ID Number:" << id << endl;
		cout << "User Name:" << name << endl;
		cout << "Password:" << password << endl;
		cout << "Available Balance:" << balance << endl;
	}


};

class Client : public Person
{

};

class Employee : public Person
{

};

class Admin : public Person
{

};


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

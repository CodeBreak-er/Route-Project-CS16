#include <iostream>
#include <cctype>
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

class Validation{
public:
bool static checkName(string name){
if(name.length() >=5 && name.length() <=20){
    int l=name.length();
    for (int i = 0; i < l; i++){
        if(!isalpha(name[i])){
            cout<<"name must be all alphabetic chars"<<endl;
            break;
            return false;
        }
    }
    return true;
}else{
cout<<"Name must be between 5 & 20 in size"<<endl;
return false;
}
}

 bool static checkPassword(string password){
if(password.length() >=8 && password.length() <=20){

    return true;
}else{
cout<<"Password must be between 8 & 20 in size"<<endl;
return false;
}
}

bool static checkSalary(double salary){
if(salary <5000){
        cout<<"salary must be minimum 5000"<<endl;
    return false;
}else{
return true;
}
}

bool static checkBalance(double balance){
if(balance <1500){
        cout<<"balance must be minimum 1500"<<endl;
    return false;
}else{
return true;
}
}
};
int main()
{
   Validation::checkName("wwdddsddsdsdsdsdsdsdsdsdsdsdsdsdsdsdsdsdsdssdddw");
Validation::checkPassword("ww1dsw");
Validation::checkBalance(200);
Validation::checkSalary(20000);
}

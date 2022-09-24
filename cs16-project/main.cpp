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
    Person()
    {
        this->name="";
        this->password="";
        this->balance=0;
    }
    Person(string name,string password,double balance)
    {

        Validation::checkName(name)?this->name = name:cout<<"Name must be between 5 & 20 in size"<<endl;
        Validation::checkPassword(password)?this->password = password: cout<<"Password must be between 8 & 20 in size"<<endl;
        Validation::checkBalance(balance)&&this->balance = balance;
    }
    //Setters:
    void set_id(int id)
    {
        this->id = id;
    }
    void set_name(string name)
    {
        Validation::checkName(name)?this->name = name:cout<<"Name must be between 5 & 20 in size"<<endl
    }
    void set_password(string password)
    {
        Validation::checkPassword(password)?this->password = password: cout<<"Password must be between 8 & 20 in size"<<endl;
    }
    void set_balance(double balance)
    {
Validation::checkBalance(balance)&&this->balance = balance:
    }

    //Getters:
    int get_id()
    {
        return id;
    }
    string get_name()
    {
        return name;
    }
    string get_password()
    {
        return password;
    }
    double get_balance()
    {
        return balance;
    }

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
protected:
    double salary;

    //constructor
public:
    Employee()
    {
        this->salary=0;
    }
    Employee(string name, string password,double balance, double salary):Person( name, password,balance)
    {
        Validation::checkSalary(salary)&&this->salary= salary;
    }
    //Setter:
    void setSalary(double salary)
    {
        Validation::checkSalary(salary)&&this->salary= salary;
    }
    void setLogin(int id,string password )
    {
        this->id = id;
        this->password = password;
    }


    //Getters:
    double getSalary()
    {
        return this->salary;
    }

    //display employee his info
    void display()
    {
        Person::display();
        cout << "Available Salary:" << this->salary << endl;

    }
};

class Admin : public Employee
{
private :
    int EmployeeCount;
    Employee oneEmployee[100];
public :
    void addEmployee
    {
        int id;
        string name, password;
        double balance;
        cout << "Please Enter Employee Name : "  ;
        cin >> name;
        cout << "Please Enter Employee ID : "  ;
        cin >> id;
        cout << "Please Enter Employee Password : "  ;
        cin >> password;
        cout << "Please Enter Employee balance : "  ;
        cin >> balance;
        Employee Employee (id,name,password,balance)
    }
    void editEmployee
    {
        cout << "Please enter the name of the employee you need to edit\n";
        string name;
        cin >> name;
        bool edited = false;
        for (int i =0; i < EmployeeCount; i++ )
        {
            if(Employee.get_name() == name)
            {
                edited = true;
                edited = true;
                cout << "Press 1 to edit name\n";
                cout << "Press 2 to edit password\n";
                cout << "Press 3 to edit salary\n";
                int option;
                cin >> option;
                if(option == 1)
                {
                    cout << "please enter the new name: ";
                    cin >> name;
                    if (checkName(name) == true)
                        Employee[i].set_name(name);
                    else
                        cout<<"name must be all alphabetic chars " ;
                }
                else if(option == 2)
                {
                    string password;
                    cout << "Please enter the new password : ";
                    cin >> password;
                    if (checkPassword(password) == true)
                        Employee[i].set_password(password);
                    else
                        cout << "Password must be between 8 & 20 in size " ;
                }
                else
                {
                    int salary;
                    cout << "Please enter the new salary: ";
                    cin >> salary;
                    if (checkSalary(salary) == true)
                        Employee[i].setEmp_salary(salary);
                    else
                        cout << "salary must be minimum 5000 " ;
                }
                break;
            }
        }
        Admin()
        {
            EmployeeCount = 0;
        }
    }
}
void listAllEmployees()
{
    cout << "Starting to list all employees...\n";
    for(int i = 0 ; i < EmployeeCount ; i++)
    {
        oneEmployee[i].display();
    }
    cout << "Finished listing all employees...\n";
}
};

class Validation
{
public:
    bool static checkName(string name)
    {
        if(name.length() >=5 && name.length() <=20)
        {
            int l=name.length();
            for (int i = 0; i < l; i++)
            {
                if(!isalpha(name[i]))
                {
                    cout<<"name must be all alphabetic chars"<<endl;
                    break;
                    return false;
                }
            }
            return true;
        }
        else
        {
            cout<<"Name must be between 5 & 20 in size"<<endl;
            return false;
        }
    }

    bool static checkPassword(string password)
    {
        if(password.length() >=8 && password.length() <=20)
        {

            return true;
        }
        else
        {
            cout<<"Password must be between 8 & 20 in size"<<endl;
            return false;
        }
    }

    bool static checkSalary(double salary)
    {
        if(salary <5000)
        {
            cout<<"salary must be minimum 5000"<<endl;
            return false;
        }
        else
        {
            return true;
        }
    }

    bool static checkBalance(double balance)
    {
        if(balance <1500)
        {
            cout<<"balance must be minimum 1500"<<endl;
            return false;
        }
        else
        {
            return true;
        }
    }
};
int main()
{

    string name, password;
    double balance;
    double salary;
    Employee e("ahmed","123",0,5000);

    cout<<"Enter your name: "<<" ";
    cin>>name;
    cout<<"Enter your password: "<<" ";
    cin>>password;
    //files created
    FILE* ClientText=fopen("Clients.txt","a");
    fclose(ClientText);
    FILE* EmployeeText=fopen("Employees.txt","a");
    fprintf(EmployeeText,e("ahmed","123",0,5000));
    fclose(EmployeeText);
    FILE* AdminText=fopen("Admin.txt","a");
    fclose(AdminText);

}

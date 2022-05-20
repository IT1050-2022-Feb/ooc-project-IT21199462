#include<stdio.h>
#include<cstring>

#include "User.h"
#include "Admin.h"
#include "Agent.h"

using namespace std;

int main()
{
  User* customer1=new Customer();// Creating object in Customer
	User* Agent1=new Agent();// Creating object in Agent
	User* admin1=new Admin();// Creating object in Admin


  cout << "\t-Customer-\n";
	customer1->verifyLogin();
	customer1->displayDetails();
	cout<<endl;
	
	cout << "\t-Agent-\n";
	Agent1->verifyLogin();
	Agent1->displayDetails();
	cout<<endl;
	
	cout << "\t-Admin-\n";
	admin1->verifyLogin();
	admin1->displayDetails();
	cout<<endl;

  delete customer1; 
	delete Agent1; 
	delete admin1; 

return 0;
  
}

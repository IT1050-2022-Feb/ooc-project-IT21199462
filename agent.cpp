#include <iostream>
#include <string>
using namespace std;

Agent::Agent(){
	
	agent_ID="";
	password="";
	
}
Agent::Agent(string Name,string Address,int pnumber,string email,string agentid,string pass,int pid,int disid,int percentage,Feedback *f)
:User(string Name,string Address,string email)
{
	
	agent_ID=agentid;
	password=pass;
	feedback[0]=f;
	
	
}

Agent::~Agent()
{
	
	cout<<"Agent account deleting"<<endl;
	
}



#include "User.h"


class Agent:public User{
	
	private:
		string agent_ID;
		string password;
		
	public:
		Agent(string Name,string Address,string email,string agentid,string pass,int pid,int disid,int percentage,Feedback *f);
		Agent();
		~Agent();
		void addInsuaranceDetails();
		void approveFeedbacks();
	
	
};

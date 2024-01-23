#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
std::string Name;
char Option;
string headTime;











	cout<<"Hi, my name is chat doctor! I am built to help you with every issue concerning your health as well as help you to connect you to a medical service personnel if your situation requires one.";

	cout<<"Enter your name:";
	std::getline(std::cin, Name);

    std::cout << "Alright then!, Welcome " << userName << ", thank you for reaching out! hope your concern is addressed to your maximum satisfaction." << std::endl;
    cout<<"This is a list of my capabilities:"<<endl;   
    cout<<"1.Basic service(First aid)"<<endl;
    cout<<"2.Health Consultancy"<<endl;
    cout<<"3.Sexual and Reproductive health"<<endl;
    cout<<"4.Mental health"<<endl;
    cout<<"5.Speak to a physician online"
    cout<<"Choose an option out of my capabilities"<<endl;
    cin>>Option;
    if (Option== 1)
    {
    	cout<<"1.Headache"<<endl;
    	cout<<"2.Stomach Ache"<<endl;
    	cout<<"3.Nausea"<<endl;
    	cout<<"4.BodyPains"<<endl;

    	cout<<"Enter your Ailment"<<endl;
    	cin>>ailMent;
    if (ailMent== 1)
    	{
    		cout<<"How long have you been experiencing these headaches?(Less than a week/more than a week) *keep your reply in one case/Turn on the capslock*"
    		Cin>>headTime;
    		if (headTime== "less than a week"|| headTime=="LESS THAN A WEEK")
    		{
    			cout<<"Alright! Are you experiencing nausea, vomiting, or sensitivity to light or sound? Yes or No"<<endl;
    			cin>>Ans;
    			else{
    				cout<<""
    			}

    		}
    	}	
    }
	return 0;
}
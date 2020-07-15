#include<iostream>
using namespace std;
void function(){
	cout<<"\nYOU ARE NOT OLDER ENOUGH";
}

class student
{
	public:
	int roll,age;
	char name[30],clas[10];
	void enter()
	{
			cout<<"enter the student name:";
		cin>>name;
		cout<<"\nenter the student age:";
		cin>>age;
		cout<<"\nenter the student class";
		cin>>clas;
		cout<<"\nenter the roll no:";
		cin>>roll;
	
}
	

	void display()
	{
		if(age<=10){
			function();
		}else
		{
		
		cout<<"\nAge\tName\tRoll\tClass";
		cout<<"\n"<<age<<"\t"<<name<<"\t"<<roll<<"\t"<<clas;
	}
}

};
	

int main()
{
	class student s;
	s.enter();
	s.display();
}

	

#include<iostream>
using namespace std;
	void transaction()
	{
		int password,amount,choice,deposite,withdraw,key,balance=0;
	
	
	cout<<"\nenter your choice:";
			cin>>choice;

	
			switch(choice)
			{
				case 1:
					cout<<"\nyour balance is="<<balance;
					cout<<"\nenter the deposit amount=";
					cin>>amount;
					balance = balance+deposite;
					cout<<"\nyour balance is== "<<amount;
					break;
					case 2:
						
						cout<<"\nenter your balance=";
						cin>>balance;
						cout<<"\nenter your withdraw amount=";
						cin>>withdraw;
						if(withdraw>balance)
						{
						cout<<"You have a insufficient balance";
						cout<<"\nDo you want another transaction?";
						transaction();
						
							
						}
						else
						{
						balance=balance-withdraw;
						cout<<"you have withdraw amount is ="<<withdraw<<"\nyour balance is="<<balance;
							
						}
						break;
						case 3:
							cout<<"\nYour balance is="<<balance;
							break;
							case 4:
								cout<<"\nIf you want exit  press 1 if no then press 2:";
								cin>>key;
								if(key==1){
									cout<<"\nThankyou for using ATM Service";
								}
								else
								{
									transaction();
									
								
									
								}
						

							
					
			}
		}
		
		
int main()
{
    string username;
    int password;

	cout<<"plz enter the username=";
	cin>>username;
	cout<<"\nEnter the password=";
	cin>>password;
	if(username=="ibtsam6"&&password==12345)
	{
	

	
		    cout<<"Welcome the ATM\n";
			cout<<"1.Deposite the Amount\n";
			cout<<"2.Withdraw\n";
			cout<<"3.Balance\n";
			cout<<"4.Quit\n";
			transaction();
			
	
	
	
}

	else{
			
		cout<<"\nincorrect credentials";
		
	}
	
	
}
	


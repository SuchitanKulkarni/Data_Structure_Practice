#include<iostream>
#include<string>

#define N 20

#define SERIOUS 10
#define NONSERIOUS 5
#define CHECKUP 1

using namespace std;


class Que
{

	string Q[N];  //Size of Queue
	int Pr[N];   //FOR CATAGORY OF Patient 
	int r ,f ;
	public:
	Que()
	{
		r=-1;
		f=-1;
	}
	void enqueue(string name,int p)//Enqueue function to insert data and its priority in queue
	{
		int i;
		if((f==0)&&(r==N-1)) //Check if Queue is full
			cout<<"Queue is full";
		else 
		{
			if(f==-1) 
			{              //if Queue is empty
				f = r = 0;
				Q[r] = name;         //FIRST ENTRY
				Pr[r] = p;           //FIRST ENTRY

			}
	
			else 
			{                //second patient onwards
				for(i = r;i>=f;i--) 
				{
					if(p>Pr[i]) //if priority of the new patient is > exixting patient then shift the existing patient one place right
					{
						Q[i+1] = Q[i];
						Pr[i+1] = Pr[i];	
					}
					
				else
				{
				  break;	
				 } 
				
				}
			Q[i+1] = name;
			Pr[i+1] = p;
			r++;
			}	
		}

	}
	void print() 
	{           //print the data of Queue
		int i;
		for(i=f;i<=r;i++) 
		{
			cout << " \n |  Patient's Name - "<<Q[i];
			switch(Pr[i]) 
			{
				case 1: 
					cout << " |  |  Priority - 'Checkup'     |  " << endl;
					break;
					
				case 5:
					cout << " |  |  Priority - 'Non-serious' |  " << endl;
					break;
					
				case 10:
					cout << " |  |  Priority - 'Serious'     |  " << endl;
					break;
					
				default:
					cout << " |  |  Priority not found       |  " << endl;
			}
		}
	}

	void dequeue() 
	{ 								//remove the data from front
		if(f == -1) 
		{
			cout<<"\nQueue is Empty";
		}	
		else 
		{
			cout<<"\ndeleted Element = "<<Q[f]<<endl;
	
			if(f==r)
			{
				f = r = -1;
			} 
			 
			else
			{
			f++;	
			 } 
		}
	}
};

int main() 
{
	Que q;
	string name;
	int opt,n,i,p;
	
while(1) 
 {
	cout << "\n.........................  MENU  .................... \n \n1) Insert Data in Queue" << endl 
		<< " \n2) show the Data in Queue " << endl <<" \n3) Delete data from the Queue" 
		<< endl <<" \n4) Exit\n\n"<< endl;
		cout<<"Enter Your Choice :- ";
		
	cin >> opt;
		switch(opt) 
		{
			case 1:
				cout << "\nEnter the number of patinents you want to enter : " ;
				cin >> n;
				i = 0;
				while(i < n) 
				{
						cout << "\nEnter your name of the patient : ";
						cin >> name;
				
						cout << "\nEnter your Priorities\n (0: Serious, 1: Non-serious, 2: General checkup) : ";
						cin >> p;
						switch(p) 
						{
							case 0: 
								q.enqueue(name,SERIOUS);
								break;
							case 1: 
								q.enqueue(name,NONSERIOUS);
								break;
							case 2: 
								q.enqueue(name,CHECKUP);
								break;
							
						}
						
					i++;
				}
				break;
				
			case 2:
				q.print();
				break;
				
			case 3:
				 q.dequeue();
				break;
				
			case 4:
				exit(0);
				
			default:
				cout<<"\nIncorrect Choice"<<endl;

		}
	}
        return 0;
}






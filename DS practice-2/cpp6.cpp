#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Item
{
	public:
		char name[20];
		int quality,cost,code;
		
	    bool operator ==(const Item &i1)
		{
			if(code==i1.code)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			if(code<i1.code)
			{
				return 1;
			}
			else
			{
				return 0;
			}
	    }
			vector<Item> o1;
			void print(Item &i1);
			void display();
			void search();
			void dlt();
			void insert();
			bool compare(const Item &i1,const Item &i2)
			{
				return (i1.code<i2.code);
			}
			
		
		
};
int mian()
{
	 int ch;
	 do
	 {
	 	cout<<"-----------MENU---------------";
	 	cout<<"\n1.Insert\n2.display\n3.search\n4.sort\n5.Delete\n6.Exit";
	 	cout<<"\nEnter your choice";
	 	cin>>ch;
	 	
	 	switch(ch)
	 	{
	 		case 1 : insert();
	 		        break;
	 	    case 2: display();
	 	            break;
	 	    case 3 :serach();
	 	            break;
	 	    case 4 : sort(o1.begin(),o1.end(),compare);
	 	             cout<<"sorted array";
	 	             display();
	 	             break;
	 	    case 5 : dlt();
	 	             break;
	 	    case 6 : exit(0);
	 	
		 }
	 	
	 }while(ch!=7);
}

void insert()
{
	Item i1;
	cout<<"enter the name if item";
	cin>>i1.name;
	cout<<"enter the quality of item";
	cin>>i1.quality;
	cout<<"enter the cost of item";
	cin>>i1.cost;
	cout<<"enter the code of the item";
	cin>>i1.code;
	o1.push_back(i1);
	
}
void display()
{
	for_each(o1.begin,o1.end(),print);
	
	
}
void print(Item &i1)
{
	cout<<"name of item"<<i1.name;
	cout<<"qualitiy of item"<<i1.quality;
	cout<<"cost of item"<<i1.cost;
	cout<<"code of item"<<i1.code;
	cout<<"\n\n";
}
void search()
{
	vector<Item>::iterator p;
	Item i1;
	cout<<"Enter thecode of item to search";
	cin>>i1.code;
	p=find(o1.begin(),o1.end(),i1);
	if(p==o1.end())
	{
		cout<<"not found";
		
	}
	else
	{
		cout<<"found";
	}

}
void dlt()
{
	vectoe<Item>::iterator p;
	Item i1;
	cout<<"enter the code of item to delete";
	cin>>i1.code;
	p=find(o1.begin(),o1.end(),i1);
	if(p==o1.end())
	{
		 cout<<"not found";
	}
	else
	{
		o1.erase(p);
		cout<<"Deleted";
		
	}
}

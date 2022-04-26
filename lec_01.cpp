#include<iostream>
//#include<conio.h>

 using namespace std;
class student{
	private:
		int roll_no;
		char sub1g, sub2g, sub3g;
		
		public:
			void get_data(){
				cout<<"enter roll_no."<<endl;
				cin>>roll_no;
				cout<<"subject 1 grade:"<<endl;
				cin>>sub1g;
				cout<<"subject 2 grade:"<<endl;
				cin>>sub2g;
				cout<<"subject 3 grade:"<<endl;
				cin>>sub3g;
				
			}
			
			void display(){
				cout<<"roll_no"<<roll_no<<endl;
				cout<<"subject 1 grade:"<<sub1g;
				
			
				cout<<"subject 2 grade:"<<sub2g;
				
				
				cout<<"subject 3 grade:"<<sub3g;
				
				
			}
};
			int main(){
				student ob1;
			    student ob2;// where an object is created 
				
				ob1.get_data();
				ob2.get_data();
				ob1.display();
			    ob2.display();
				//getch();
				return 0;
			}
			


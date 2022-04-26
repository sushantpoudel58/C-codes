#include<iostream>
//#include<conio.h>

 using namespace std;
class student{
	private:
		int roll_no;
		char sub1g, sub2g, sub3g;
		
		public:
			void get_data(){
				cout<<"enter roll_no.";
				cin>>roll_no;
				cout<<"subject 1 grade:";
				cin>>sub1g;
				cout<<"subject 2 grade:";
				cin>>sub2g;
				cout<<"subject 3 grade:";
				cin>>sub3g;
				
			}
			
			void display();/*{ //memeber function prototyping
				cout<<"roll_no"<<roll_no<<endl;
				cout<<"subject 1 grade:"<<sub1g;
				
			
				cout<<"subject 2 grade:"<<sub2g;
				
				
				cout<<"subject 3 grade:"<<sub3g;
				
				
			}*/
		};
		void student::display(){
				cout<<"roll_no"<<roll_no<<endl;
				cout<<"subject 1 grade:"<<sub1g<<endl;
				
			
				cout<<"subject 2 grade:"<<sub2g<<endl;
				
				
				cout<<"subject 3 grade:"<<sub3g<<endl;
				
		}
			int main(){
				student ob[3];
				int x;
				for(x=0; x<3; x++)
				ob[x].get_data();
				
				for(x=0; x<3; x++)
				ob[x].display();
				getch();
			}
			


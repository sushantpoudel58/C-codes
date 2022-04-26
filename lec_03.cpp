//
#include<iostream>


using namespace std;

class calculat{
		float a,b;
		
		public:
			void setdata(){
				cout<<"enter two number:";
				cin>>a>>b;
				
			}
			void sum(){
				cout<<"the sum of "<<a<<" and "<<b<<" is:"<<a+b<<endl;
			}
			void diff(){
				float d;
				if(a>b)
				d=a-b;
				else
				d=b-a;
				cout<<"\n the diff of number ="<<d;
			}
			void prod();
				
			void quot();	
};

void calculat::prod(){
	cout<<"\n product ="<<a*b;
}
void calculat::quot(){
	float qt;
	if(a>b)
	qt=a/b;
	else
	qt=b/a;
	cout<<"\n quotient ="<<qt;
}

int main(){
	calculat obj;
	obj.setdata();
	obj.sum();
	obj.diff();
	obj.prod();
	obj.quot();

	return 0;

}
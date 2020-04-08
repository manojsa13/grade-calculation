
#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d[20],e=0,tot=0,g=0;
	cout<<"Enter the number of subject :: ";
	cin>>a;
	for(int i=0;i<a;i++)
	{
		i=c;
		cout<<"\nEnter the mark of the subject "<<++c<<" = ";
		cin>>d[i];
	
    }
    for(int i=0;i<a;i++)
    {
    		e=e+d[i];
		
	}
	
    tot=a*100;
     g=e/a;
     
    if(e<=tot&&e>(-1))
     {
     	cout<<"\nTOTAL MARK OF THE STUDENT IS "<<e;
     	cout<<"\nAVERAGE MARK OF THE STUDENT IS "<<g;
     	if(g>=90)
     	cout<<"\nTHE GRADE OPTAINED BY THE THE STUDENT IS S";
     	else if(g>=80)
     	cout<<"\nTHE GRADE OPTAINED BY THE THE STUDENT IS A";
		else if(g>=70)
     	cout<<"\nTHE GRADE OPTAINED BY THE THE STUDENT IS B";
		else if(g>=60)
     	cout<<"\nTHE GRADE OPTAINED BY THE THE STUDENT IS C";
     	else if(g>=50)
     	cout<<"\nTHE GRADE OPTAINED BY THE THE STUDENT IS D";
     	else if(g>=40)
     	cout<<"\nTHE GRADE OPTAINED BY THE THE STUDENT IS E";
     	else
     	cout<<"\nTHE GRADE OPTAINED BY THE THE STUDENT IS F";
    }
    else
    cout<<"\nERROR!!!!";
    return 0;
    
}

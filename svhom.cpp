#include<iostream>
using namespace std;
#include<stdio.h>
#include<fstream>
class scho
{
public:
	char name[20];
	char fname[20];
	char mname[20];
	int d,m,y;
	int roll,k;
	float per,tile;
	int mark,r;
	int score;
	int chec;
	public:
		void D();
		void X();
		void in();
		int check(){
			cout<<"Do YOU WANT TO CHECK ANOTHER SCHOLARSHIP"<<endl;
			cout<<"1    - YES"<<endl<<"2    - NO"<<endl;
			cin>>chec;
	return chec;
		}
}S1;
void scho::D()
{
	cout<<"\n\n \t\t *****************WELCOME TO THE LOVELY PROFESSIONAL UNIVERSITY SCHOLARHIP SCHEME************"<<endl<<endl;
	cout<<"ENTER YOUR NAME\n\n"<<endl;
	gets(name);
	cout<<"\n\nENTER YOUR FATHER NAME\n\n"<<endl;
	gets(fname);
	cout<<"\n\nENTER YOUR MOTHER NAME\n\n"<<endl;
	gets(mname);
	cout<<"\n\nENTER YOUR DOB"<<endl;
	cout<<"\n\nENTER DAY"<<endl;
	cin>>d;
	cout<<"\n\nENTER MONTH"<<endl;
	cin>>m;
	cout<<"\n\nENTER YEAR"<<endl;
	cin>>y;
	cout<<d<<"/"<<m<<"/"<<y<<endl;
	
	
}
void scho::X()
		{
		
			
			cout<<"\n\n###LPU PROGRAMS####\n\n";
			cout<<"=======================================================\n";
			cout<<"|\t             **PROGRAMS***                    |\n";
			cout<<"=======================================================\n";
			cout<<"|S.NO      ||     PROGRAME NAME                       |\n";
			cout<<"===========||==========================================\n";
			cout<<"|1.        ||     ENGINEERING                         |\n";
			cout<<"|2.        ||     MANAGEMENT                          |\n";
			cout<<"|3.        ||     SCIENCE                             |\n";
			cout<<"|4.        ||     ARCHITECTURE                        |\n";
			cout<<"|5.        ||     LAW                                 |\n";
			cout<<"|6.        ||     ECONOMICS                           |\n";
			cout<<"|7.        ||     ARTS                                |\n";
			cout<<"=======================================================\n";
			cout<<"\n\n\n\n\n\n\n\n";
			cout<<"ENTER THE CORRESPOND NUMBER OF PROGRAM FROM THE ABOVE TABLE\n\n"<<endl;
			cin>>k;
			if(k==1)
			{
		     cout<<"YOU CHOOSE ENGINEERING\n\n";
			 cout<<"====================================================================\n";
			cout<<"|S.NO      ||     BRANCH NAME                        ||FEE/SEM(INR)|\n";
			cout<<"===========||========================================||==============\n";
			cout<<"|1.        ||     COMPUTER SCIENCE & ENGINEERING     || 94500       |\n";
			cout<<"|2.        ||     MECHANICAL ENGINEERING             || 94500       |\n";
			cout<<"|3.        ||     ELECTRICAL ENGINEERING             || 94500       |\n";
			cout<<"|4.        ||     ELECTRONICS ENGINEERING            || 94500       |\n";
			cout<<"|5.        ||     CHEMICAL ENGINEERING               || 94500       |\n";
			cout<<"|6.        ||     AEROSPACE ENGINEERING              || 94500       |\n";
			cout<<"|7.        ||     AUTOMOBILE ENGINEERING             || 94500       |\n";
			cout<<"=====================================================================\n";
			
		    }
		else if(k==2)
			
			{
			cout<<"YOU CHOOSE MANAGEMENT"<<endl;
			cout<<"=====================================================================\n";
			cout<<"|S.NO      ||     BRANCH NAME                        ||FEE/SEM(INR)|\n";
			cout<<"===========||========================================||==============\n";
			cout<<"|1.        ||     B.SC(AIRLINES,TOURISM)             || 44500       |\n";
			cout<<"|2.        ||     BBA                                || 75500       |\n";
			cout<<"|3.        ||     DIPLOMA IN AIRLINES                || 44500       |\n";
			cout<<"|4.        ||     BHMCT                              || 59500       |\n";
			cout<<"=====================================================================\n";
			
				
			}
		else if(k==3)
			
			{
			cout<<"YOU CHOOSE SCIENCE"<<endl;
			cout<<"=====================================================================\n";
			cout<<"|S.NO      ||     BRANCH NAME                        ||FEE/SEM(INR)|\n";
			cout<<"===========||========================================||==============\n";
			cout<<"|1.        ||     B.SC(AIRLINES,TOURISM)             || 44500       |\n";
			cout<<"|2.        ||     BBA                                || 75500       |\n";
			cout<<"|3.        ||     DIPLOMA IN AIRLINES                || 44500       |\n";
			cout<<"|4.        ||     BHMCT                              || 59500       |\n";
			cout<<"=====================================================================\n";
			
				
				
			}
		else if(k==4)
			
			{
			cout<<"YOU CHOOSE ARCHITECTURE"<<endl;
			cout<<"=====================================================================\n";
			cout<<"|S.NO      ||     BRANCH NAME                        ||FEE/SEM(INR)|\n";
			cout<<"===========||========================================||==============\n";
			cout<<"|1.        ||     B.Arch                             || 92500       |\n";
			cout<<"=====================================================================\n";
			
				
			}
		else if(k==5)
		
			{
			cout<<"YOU CHOOSE LAW"<<endl;
			cout<<"=====================================================================\n";
			cout<<"|S.NO      ||     BRANCH NAME                        ||FEE/SEM(INR)|\n";
			cout<<"===========||========================================||==============\n";
			cout<<"|1.        ||     B.A LL.B(HONS)                     || 69500       |\n";
			cout<<"|2.        ||     B.COM LL.B(HONS)                   || 69500       |\n";
			cout<<"|3.        ||     BBA LL.B(HONS)                     || 69500       |\n";
			cout<<"=====================================================================\n";
			
				
			}
		else if(k==6)
			
			{
			cout<<"YOU CHOOSE ECONOMICS"<<endl;
	        cout<<"=====================================================================\n";
			cout<<"|S.NO      ||     BRANCH NAME                        ||FEE/SEM(INR)|\n";
			cout<<"===========||========================================||==============\n";
			cout<<"|1.        ||     B.SC(HONS.)ECONOMICS               || 39500       |\n";
			cout<<"|2.        ||     INTEGRATED B.SC ECONOMICS          || 39500       |\n";
			cout<<"=====================================================================\n";
			
			}
		else if(k==7)
		
			{
			cout<<"YOU CHOOSE PROGRAM ARTS"<<endl;
			cout<<"=====================================================================\n";
			cout<<"|S.NO      ||     BRANCH NAME                        ||FEE/SEM(INR)|\n";
			cout<<"===========||========================================||==============\n";
			cout<<"|1.        ||     B.A(PROFESSIONAL)                  || 27500       |\n";
			cout<<"|2.        ||     B.A(HONS)                          || 27500       |\n";
			cout<<"|3.        ||     B.A(LIBERALS)                      || 27500       |\n";
			cout<<"=====================================================================\n";
			
			}
			
			
			
		}
		void scho:: in()
		{
			cout<<"LPU scholarship scheme(LPU-SS)\n\n\n"<<endl<<endl;
				cout<<"===================================================================="<<endl;
			cout<<"scholarship is available on the basis of:"<<endl;
			cout<<"===================================================================="<<endl;
			cout<<"1. 12th percentage"<<endl;
			cout<<"2. JEE main score"<<endl;
			cout<<"3. LPUNEST score"<<endl;
			cout<<"4. State board topper"<<endl;
			cout<<"5. performance in sports "<<endl;
			cout<<"===================================================================="<<endl;
			cout<<"press 1 to 5 to check scholarship\n\n\n"<<endl;
			int n;
			cout<<"enter from 1 to 5 number"<<endl;
		c:	cin>>n;
			
			
			  if(n==1)
			  {
			  	cout<<"you choose scholarship based on 12th ppercentage\n\n"<<endl;
			  	cout<<"enter 12th class roll no\n\n"<<endl;
			  	cin>>S1.roll;
			  	cout<<"enter 12th percentage\n\n"<<endl;
			  	cin>>S1.per;
			  	int per=S1.per;
			  	if(per<=60)
                cout<<"scholarship available only to those whose 12th percentage is above 60\n\n"<<endl;
				 
				 if(per>60 && per<70)
				 cout<<"Hello Mr "<<S1.name<<"  your scholarship is INR30000/sem\n\n"<<endl;
				else if(per>=70 &&per<80)
				 cout<<"Hello Mr "<<S1.name<<"  your scholarship is INR40000/sem\n\n"<<endl;
				else if(per>=80 && per<90)
				 cout<<"Hello Mr "<<S1.name<<"  your scholarship is INR50000/sem\n\n"<<endl;
            	 else if(per>=90 && per<99.5)
				 cout<<"Hello Mr "<<S1.name<<"  your scholarship is INR20000/sem\n\n"<<endl;	
							  	
			  }
			  else if(n==2)
			  {
			      cout<<"you choose scholarship based on Jee main score\n\n"<<endl;
			      cout<<"enter your jee main roll no\n\n"<<endl;
			      cin>>S1.roll;
			      cout<<"enter your jee main score\n\n"<<endl;
			      cin>>S1.mark;
			      int mark=S1.mark;
			      if(mark<=90)
			      cout<<"scholarship available only to those whose marks is above 90\n\n"<<endl;
			      
			    if(mark>90 && mark<126)
				 cout<<"Hello Mr "<<S1.name<<"  your scholarship is INR65000/sem\n\n"<<endl;
				 if(mark>125 &&mark<151)
				 cout<<"Hello Mr "<<S1.name<<"  your scholarship is INR70000/sem\n\n"<<endl;
				 if(mark>150 && mark<201)
				 cout<<"Hello Mr "<<S1.name<<"  your scholarship is INR75000/sem\n\n"<<endl;
            	  if(mark>200 && mark<251)
				 cout<<"Hello Mr "<<S1.name<<"  your scholarship is INR80000/sem\n\n"<<endl;
				 if(mark>250 && mark<301)
				 cout<<"Hello Mr "<<S1.name<<"  your scholarship is INR85000/sem\n\n"<<endl;
				 if(mark>300 && mark<361)
				 cout<<"Hello Mr "<<S1.name<<"  your scholarship is INR90000/sem\n\n"<<endl;
			  }
			  else if(n==3)
			  {
			    cout<<"you choose scholarship based on LPUNEST score\n\n "<<endl;
			  	cout<<"enter LPUNEST roll no\n\n"<<endl;
			  	cin>>S1.roll;
			  	int roll=S1.roll;
			  	cout<<"enter LPUNEST SCORE\n\n"<<endl;
			  	cin>>S1.score;
	int score=S1.score;
			  	if(score<=90)
			    cout<<"scholarship available only to those whose marks is above 200(>69%)\n\n"<<endl;
			    if(score>200 && score<=240)
				 cout<<"Hello Mr "<<S1.name<<"U R in top next 15%(21%-35%)  your scholarship is INR30000/sem\n\n"<<endl;
				 if(score>240 && score<=280)
				 cout<<"Hello Mr "<<S1.name<<"U R in top next 10%(11%-20%)  your scholarship is INR40000/sem\n\n"<<endl;
				 if(score>280 && score<=320)
				 cout<<"Hello Mr "<<S1.name<<"U R in top 10%  your scholarship is INR50000/sem\n\n"<<endl;
            	  if(score>320 && score<360)
				 cout<<"Hello Mr "<<S1.name<<"  your scholarship is INR75000/sem\n\n"<<endl;
			  }
			  else if(n==4)
			  {
			    cout<<"you choose scholarship based on state rank holder\n\n "<<endl;
			  	cout<<"enter your state roll no\n\n"<<endl;
			  	cin>>roll;
			  	cout<<"enter your percentile\n\n "<<endl;
			  	cin>>tile;
			  	cout<<"enter your RANK in your individual board\n\n"<<endl;
			  	cin>>r;
			  	if(r>10)
			  	cout<<"scholarship available only top 10 topper of your individual board\n\n"<<endl;
			  	if(r==1)
			  	cout<<"Hello Mr "<<S1.name<<"  your scholarship is INR70000/sem\n\n"<<endl;
			  	if(r==2)
			  	cout<<"Hello Mr "<<S1.name<<"  your scholarship is INR65000/sem\n\n"<<endl;
			  	if(r==3)
			  	cout<<"Hello Mr "<<S1.name<<"  your scholarship is INR60000/sem\n\n"<<endl;
			  	if(r==4)
			  	cout<<"Hello Mr "<<S1.name<<"  your scholarship is INR55000/sem\n\n"<<endl;
			  	if(r==5)
			  	cout<<"Hello Mr "<<S1.name<<"  your scholarship is INR50000/sem\n\n"<<endl;
			  	if(r==6)
			  	cout<<"Hello Mr "<<S1.name<<"  your scholarship is INR45000/sem\n\n"<<endl;
			  	if(r==7)
			  	cout<<"Hello Mr "<<S1.name<<"  your scholarship is INR40000/sem\n\n"<<endl;
			  	if(r==8)
			  	cout<<"Hello Mr "<<S1.name<<"  your scholarship is INR35000/sem\n\n"<<endl;
			  	if(r==9)
			  	cout<<"Hello Mr "<<S1.name<<"  your scholarship is INR30000/sem\n\n"<<endl;			

			  	if(r==10)
			  	cout<<"Hello Mr "<<S1.name<<"  your scholarship is INR25000/sem\n\n"<<endl;
			  }
			  else if(n==5)
			  {
			      cout<<"you choose scholarship based on performnce in sports\n\n  "<<endl<<endl;
			      cout<<"scholarship is available only for state,district and national level champion\n\n"<<endl<<endl;
			      cout<<"if U R National level champion your scholarship is INR45000\n\n"<<endl<<endl;
			      cout<<"if U R state level champion your scholarship is INR39000\n\n"<<endl<<endl;
			      cout<<"if U R  district level champion your scholarship is INR29000\n\n"<<endl<<endl;
			      
			  }
			  if(n>5)
			  {
			      cout<<"ENTER VALID NUMBER"<<endl;
			      goto c;
			  }
	    	
				
			
			
		}
		
int main()
{int u;
    S1.D();
	S1.X();
cx:	S1.in();
	u=S1.check();
	 if(u==1)
	 {
		 goto cx;
	 }
	 ofstream file;
	 file.open("student.txt",ios::app);
	 file<<"STUDENT NAME :"<<S1.name<<endl;
	 file<<"FATHER NAME :"<<S1.fname<<endl;
	 file<<"MOTHER NAME :"<<S1.mname<<endl;
	 file<<"STUDENT NAME :"<<S1.name<<endl;
	 file<<"DATE OF BIRTH :"<<S1.d<<"/"<<S1.m<<"/"<<S1.y<<endl;
	 file<<"SCORE IN HSC :"<<S1.per<<endl;
	 file<<"______________________________________________________________________________________________________________________"<<endl;
	 file.close();
	 	return 0;
	
}

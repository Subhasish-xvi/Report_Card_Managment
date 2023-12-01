//Report Card Management Project...
#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
#include<unistd.h>
#include<cstdio>
using namespace std ;
class Report
{
 	public:
 		string password;
 		char name[100];
 		char roll[15];
 		char semester[15];
 		char dob[16];
 		char address[100];
 		float marks[5];
		float mark;	
 		float total,per;
		char grade;
		string sub1,sub2,sub3,sub4,sub5; 		
 		
 	public:
 		void welcome(){												//Welcome page
		 	cout<<"\n\t\t--------------------------------------------";											
			cout<<"\n\t\t     WELCOME TO CREATIVE TECHNO COLLEGE\n";
			cout<<"\n\t\t--------------------------------------------";
			sleep(1);
//			cout<<"\n\n\t\t--------------------------------------------";											
			cout<<"\n\t\t      REPORT CARD MANAGEMENT SYSTEM\n\n";
			cout<<"\t\t--------------------------------------------";
			sleep(1);
//			getch();
		}
		void setpsw(){				// password set for teacher login
			password="2021";
		}
		
		int getmark100(float mark){					//function to take mark out of 100 & <= 100, not more than 100
			level1:
			{
				if(mark<=100){
					return mark;
				}
				else{
					cout<<"\nEnter Correct Mark Out Of 100 : ";
					cin>>mark;
					goto level1;
				}
			}
		}
	//BSC SUBJECT
		void bscSubject(string seme)
		{
			if(seme=="1st_Semester")
			{
				sub1="Programmming using c : ";
				sub2="Digital Logic : ";
				sub3="Math : ";
				sub4="EVS : ";

			}
			if(seme=="2nd_Semester")
			{
				sub1="Programmming using c++ : ";
				sub2="Data Structure : ";
				sub3="Physics : ";
				sub4="English : ";
			}
			if(seme=="3rd_Semester")
			{
				sub1="Programmming using JAVA : ";
				sub2="DBS : ";
				sub3="Python : ";
				sub4="DMS : ";
				sub5="Algebra : ";
			}
			if(seme=="4th_Semester")
			{
				sub1="Operatying System : ";
				sub2="Computer Network : ";
				sub3="Computer Graphics : ";
				sub4="Android Programming : ";
				sub5="Physics : ";
			}
			if(seme=="5th_Semester")
			{
				sub1="Web Technology : ";
				sub2="Software Engineering : ";
				sub3="Numerical Techniques : ";
				sub4="Unix Shell Programming : ";
			}
			if(seme=="6th_Semester")
			{
				sub1="Artificial Inteligence : ";
				sub2="Algorithm Design Techniques : ";
				sub3="Data Science : ";
				sub4="Data Mining : ";
			}
		}
	//BCA SUBJECT
		void bcaSubject(string seme)
		{
			if(seme=="1st_Semester")
			{
				sub1="Programming using c : ";
				sub2="Digital Logic : ";
				sub3="Management : ";
				sub4="EVS : ";
			}
			if(seme=="2nd_Semester")
			{
				sub1="Programmming using c++ : ";
				sub2="Data Structure : ";
				sub3="Statistics : ";
				sub4="Communication English : ";
			}
			if(seme=="3rd_Semester")
			{
				sub1="Programmming using JAVA : ";
				sub2="Computer Organization : ";
				sub3="Python : ";
				sub4="DMS : ";
				sub5="Business Accountaing : ";
			}
			if(seme=="4th_Semester")
			{
				sub1="Operatying System : ";
				sub2="Computer Network : ";
				sub3="Database System : ";
				sub4="Android Programming : ";
				sub5="Business Economics : ";
			}
			if(seme=="5th_Semester")
			{
				sub1="Web Technology : ";
				sub2="Software Engineering : ";
				sub3="Data Mining : ";
				sub4="Unix Programming : ";
			}
			if(seme=="6th_Semester")
			{
				sub1="Computer Graphics : ";
				sub2="Numerical Techniques : ";
				sub3="Data Science : ";
				sub4="E-Commerces : ";
			}
		}
		
		
//BBA SUBJECT
		void bbaSubject(string seme)
		{
			if(seme=="1st_Semester")
			{
				sub1="Introduction To Bussiness : ";
				sub2="English Literature : ";
				sub3="Quantitative Techniques for management : ";
				sub4="Financial Accounting : ";
			}
			if(seme=="2nd_Semester")
			{
				sub1="Economics : ";
				sub2="Management Theory & practice : ";
				sub3="Cost & Management Accounting : ";
				sub4="Computer For Management : ";
			}
			if(seme=="3rd_Semester")
			{
				sub1="Psychology For Managemnt : ";
				sub2="Business Ethics & Corporate Goverance : ";
				sub3="Banking & Insurance : ";
				sub4="Business & Corporate Law : ";
				sub5="Communicative English : ";
			}
			if(seme=="4th_Semester")
			{
				sub1="Financial Management : ";
				sub2="Marketing Management : ";
				sub3="Human Resource Management : ";
				sub4="Production & Operation Management : ";
				sub5="Environmental Studies : ";
			}
			if(seme=="5th_Semester")
			{
				sub1="Organizational Behaviour : ";
				sub2="Financial Market & Institution : ";
				sub3="Advertisement & Sale Promotion : ";
				sub4="Management Info. System & DSS : ";
				sub4="Indian Society & Culture : ";
			}
			if(seme=="6th_Semester")
			{
				sub1="Research Methodology : ";
				sub2="Enterpreneurship & Small Business Management : ";
				sub3="Organization Change & Development : ";
				sub4="Dissertation & Viva-voce : ";
				sub4="E-Business : ";
			}
//			else{
//				cout<<"\n Invalid Semester";
//			}
		}
		
	//input function for BSC
		void inputbsc(string seme)
		{
			cout<<"\nEnter Student Details : \n";
			cin.ignore();
			cout<<"Enter The Name Of Student : ";
			cin.getline(name,sizeof(name));
			cout<<"Enter The Roll No : ";
			cin.getline(roll,sizeof(roll));
			cout<<"Enter The Address : ";
			cin.getline(address,sizeof(address));
			cout<<"Enter D.O.B : ";
			cin.getline(dob,sizeof(dob));
			
			cout<<"  Enter Marks : "<<endl;
			cout<<"----------------";
			if(seme=="3rd_Semester" || seme=="4th_Semester")
			{
				bscSubject(seme);
				cout<<endl<<sub1<<" : ";
				cin>>mark;
				marks[0]=getmark100(mark);
				cout<<sub2<<" : ";
				cin>>mark;
				marks[1]=getmark100(mark);
				cout<<sub3<<" : ";
				cin>>mark;
				marks[2]=getmark100(mark);
				cout<<sub4<<" : ";
				cin>>mark;
				marks[3]=getmark100(mark);
				cout<<sub5<<" : ";
				cin>>mark;
				marks[4]=getmark100(mark);
				total = marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
				per = total/5;
			}
			else
			{
				bscSubject(seme);
				cout<<endl<<sub1<<" : ";
				cin>>mark;
				marks[0]=getmark100(mark);
				cout<<sub2<<" : ";
				cin>>mark;
				marks[1]=getmark100(mark);
				cout<<sub3<<" : ";
				cin>>mark;
				marks[2]=getmark100(mark);
				cout<<sub4<<" : ";
				cin>>mark;
				marks[3]=getmark100(mark);
				total = marks[0]+marks[1]+marks[2]+marks[3];
				per = total/4;
			}
		}
		
	//input function for BCA
		void inputbca(string seme)
		{
			cout<<"\nEnter Student Details : \n";
			getch();
			cin.ignore();
			cout<<"Enter The Name Of Student : ";
			cin.getline(name,sizeof(name));
			cout<<"Enter The Roll No : ";
			cin.getline(roll,sizeof(roll));
			cout<<"Enter The Address : ";
			cin.getline(address,sizeof(address));
			cout<<"Enter D.O.B : ";
			cin.getline(dob,sizeof(dob));
			
			cout<<"  Enter Marks : "<<endl;
			cout<<"----------------";
			if(seme=="3rd_Semester" || seme=="4th_Semester")
			{
				bcaSubject(seme);
				cout<<endl<<sub1<<" : ";
				cin>>mark;
				marks[0]=getmark100(mark);
				cout<<sub2<<" : ";
				cin>>mark;
				marks[1]=getmark100(mark);
				cout<<sub3<<" : ";
				cin>>mark;
				marks[2]=getmark100(mark);
				cout<<sub4<<" : ";
				cin>>mark;
				marks[3]=getmark100(mark);
				cout<<sub5<<" : ";
				cin>>mark;
				marks[4]=getmark100(mark);
				total = marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
				per = total/5;
			}
			else
			{
				bcaSubject(seme);
				cout<<endl<<sub1<<" : ";
				cin>>mark;
				marks[0]=getmark100(mark);
				cout<<sub2<<" : ";
				cin>>mark;
				marks[1]=getmark100(mark);
				cout<<sub3<<" : ";
				cin>>mark;
				marks[2]=getmark100(mark);
				cout<<sub4<<" : ";
				cin>>mark;
				marks[3]=getmark100(mark);
				total = marks[0]+marks[1]+marks[2]+marks[3];
				per = total/4;
			}
		}
		
	//input function for BBA
		void inputbba(string seme)
		{
			cout<<"\nEnter Student Details : \n";
			getch();
			cin.ignore();
			cout<<"Enter The Name Of Student : ";
			cin.getline(name,sizeof(name));
			cout<<"Enter The Roll No : ";
			cin.getline(roll,sizeof(roll));
			cout<<"Enter The Address : ";
			cin.getline(address,sizeof(address));
			cout<<"Enter D.O.B : ";
			cin.getline(dob,sizeof(dob));
			
			cout<<"  Enter Marks : "<<endl;
			cout<<"----------------";
			if(seme=="1st_Semester" || seme=="2nd_Semester")
			{
				bbaSubject(seme);
				cout<<endl<<sub1<<" : ";
				cin>>mark;
				marks[0]=getmark100(mark);
				cout<<sub2<<" : ";
				cin>>mark;
				marks[1]=getmark100(mark);
				cout<<sub3<<" : ";
				cin>>mark;
				marks[2]=getmark100(mark);
				cout<<sub4<<" : ";
				cin>>mark;
				marks[3]=getmark100(mark);
				total = marks[0]+marks[1]+marks[2]+marks[3];
				per = total/4;
			}
			else
			{
				bbaSubject(seme);
				cout<<endl<<sub1<<" : ";
				cin>>mark;
				marks[0]=getmark100(mark);
				cout<<sub2<<" : ";
				cin>>mark;
				marks[1]=getmark100(mark);
				cout<<sub3<<" : ";
				cin>>mark;
				marks[2]=getmark100(mark);
				cout<<sub4<<" : ";
				cin>>mark;
				marks[3]=getmark100(mark);
				cout<<sub5<<" : ";
				cin>>mark;
				marks[4]=getmark100(mark);
				total = marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
				per = total/5;
			}
		}
		
		//output for BSC
		void outputbsc(string seme){
			cout<<"Name : "<<name<<endl;
			cout<<"Roll No : "<<roll<<endl;
			cout<<"Semester : "<<seme<<endl;
			cout<<"Address : "<<address<<endl;
			cout<<"D.O.B : "<<dob<<endl;
			cout<<"Student Marks : "<<endl<<endl;
			if(seme=="3rd_Semester" || seme=="4th_Semester")
			{
				bscSubject(seme);
				cout<<endl<<sub1<<" : "<<marks[0];
				
				cout<<sub2<<" : "<<marks[1];
				
				cout<<sub3<<" : "<<marks[2];
				
				cout<<sub4<<" : "<<marks[3];
			
				cout<<sub5<<" : "<<marks[4];
				
				cout<<"Total : "<<total<<endl;
				cout<<"Percentage : "<<per<<endl;
			}
			else
			{
				bscSubject(seme);
				cout<<endl<<sub1<<" : "<<marks[0];
				cout<<sub2<<" : "<<marks[1];
				cout<<sub3<<" : "<<marks[2];
				cout<<sub4<<" : "<<marks[3];
				cout<<"Total : "<<total<<endl;
				cout<<"Percentage : "<<per<<endl;
			}
			cout<<endl<<endl;
		}
		
		//output for BCA
		void outputbca(string seme){
			cout<<"Name : "<<name<<endl;
			cout<<"Roll No : "<<roll<<endl;
			cout<<"Semester : "<<seme<<endl;
			cout<<"Address : "<<address<<endl;
			cout<<"D.O.B : "<<dob<<endl;
			cout<<"Student Marks : "<<endl;
			if(seme=="3rd_Semester" || seme=="4th_Semester")
			{
				bcaSubject(seme);
				cout<<endl<<sub1<<" : "<<marks[0];
				
				cout<<sub2<<" : "<<marks[1];
				
				cout<<sub3<<" : "<<marks[2];
				
				cout<<sub4<<" : "<<marks[3];
			
				cout<<sub5<<" : "<<marks[4];
				
				cout<<"Total : "<<total<<endl;
				cout<<"Percentage : "<<per<<endl;
			}
			else
			{
				bcaSubject(seme);
				cout<<endl<<sub1<<" : "<<marks[0];
				cout<<sub2<<" : "<<marks[1];
				cout<<sub3<<" : "<<marks[2];
				cout<<sub4<<" : "<<marks[3];
				cout<<"Total : "<<total<<endl;
				cout<<"Percentage : "<<per<<endl;
			}
			cout<<endl<<endl;
		}
		
		//output for BBA
		void outputbba(string seme){
			cout<<"Name : "<<name<<endl;
			cout<<"Roll No : "<<roll<<endl;
			cout<<"Semester : "<<seme<<endl;
			cout<<"Address : "<<address<<endl;
			cout<<"D.O.B : "<<dob<<endl;
			cout<<"Student Marks : "<<endl;
			if(seme=="1st_Semester" || seme=="2nd_Semester")
			{
				bbaSubject(seme);
				cout<<endl<<sub1<<" : "<<marks[0];
				
				cout<<sub2<<" : "<<marks[1];
				
				cout<<sub3<<" : "<<marks[2];
				
				cout<<sub4<<" : "<<marks[3];
			
				cout<<sub5<<" : "<<marks[4];
				
				cout<<"Total : "<<total<<endl;
				cout<<"Percentage : "<<per<<endl;
			}
			else
			{
				bbaSubject(seme);
				cout<<endl<<sub1<<" : "<<marks[0];
				cout<<sub2<<" : "<<marks[1];
				cout<<sub3<<" : "<<marks[2];
				cout<<sub4<<" : "<<marks[3];
				cout<<"Total : "<<total<<endl;
				cout<<"Percentage : "<<per<<endl;
			}
			cout<<endl<<endl;
		}
		
		void Grade(){
			if(per>=90)
				grade='A';
			else if(per>=80)
				grade='B';
			else if(per>=70)
				grade='c';
			else if(per>=60)
				grade='D';
			else if(per>=30)
				grade='E';
			else
				grade='F';		
		}
};
 

void loginMenu();			
void teacherlogin();
void studentlogin();
void EXIT();
void BSC();
void BCA();
void BBA();
void Exit();
void addrecord(string filename,string seme);
void display_list(string filename,string seme);
void search(string filename,string seme);
void modify(string filename,string seme);
void delet(string filename,string seme);
void bscreport(string filename,string seme);
void bcareport(string filename,string seme);
void bbareport(string filename,string seme);


//LOGOIN MENU
void loginMenu(){
	system("cls");
	cout<<"\t\t-----------------------------------------------";
	cout<<"\n\t\t\tREPORT CARD MANAGEMENT SYSTEM\t\n";
	cout<<"\t\t-----------------------------------------------";

	int c;
	cout<<"\n\n 1. TEACHER LOGIN \t\t 2. STUDENT LOGIN \t\t 3. EXIT \n\n ";
	cout<<"Choose Login Type : ";
	cin>>c;
	
	level1 : 
	{
		switch(c){
			case 1 : teacherlogin();
			break;
			case 2 : studentlogin();
			break;
			case 3 : EXIT();
			break;
			default : cout<<"\n Invalid Choice...\n\n Enter Correct Choice : ";
					  cin>>c;
					  goto level1;
			break;
		}	
	}
}																	//complete

//TEACHER LOGIN
 void teacherlogin(){
 	system("cls");
 	cout<<"\t\t-----------------------------------------------";
	cout<<"\n\t\t\tREPORT CARD MANAGEMENT SYSTEM\t\n";
	cout<<"\t\t-----------------------------------------------";
	Report obj;
	obj.setpsw();
	char psw[20];
	int c, count=0;
	cin.ignore();
	cout<<"\nEnter The Password : ";
	cin.getline(psw,sizeof(psw));
//	cout<<psw<<endl;
//	getch();
	pswlevel:
	{

		if(psw==obj.password){
			cout<<"\n 1. BSC \t\t 2. BCA \t\t 3. BBA \t\t 4. EXIT \n\n Choose The Course : ";
//			cin.ignore();
			cin>>c;
			courselevel:
			{
				switch(c){
					case 1 : BSC();
					break;
					case 2 : BCA();
					break;
					case 3 : BBA();
					break;
					case 4 : Exit();
					break;
					default : cout<<"\nInvalid Choice... \n Please Enter The Correct Choice : ";
							  cin>>c;
							  goto courselevel;
					break;
				}
			}
		}
		else
		{
			cout<<"\nIncorrect Password...\n ";
			count++;
			if(count>=3){
				sleep(1);
				loginMenu();
			}
			cin.ignore();
			cout<<"\n Enter Correct Password : ";
			cin.getline(psw,sizeof(psw));
			cout<<psw;
			goto pswlevel;
		}
	}
}																		//COMPLEATE


//STUDENT LOGIN
void studentlogin(){
	system("cls");
 	cout<<"\t\t-----------------------------------------------";
	cout<<"\n\t\t\tREPORT CARD MANAGEMENT SYSTEM\t\n";
	cout<<"\t\t-----------------------------------------------";
	int c,s;
	string seme;
	Report obj;
	cout<<"\n\n 1. BCS REPORT\t\t 2. BCA REPORT\t\t 3. BBA REPORT\t\t 4.EXIT \n\n : ";
	
	stdtasklevel:
	{
		cout<<"Choose Your Course : ";						
		cin>>c;
		cout<<"\n 1. Semester1 \n 2. Semester2 \n 3.Semester3 \n 4.Semester4 \n 5.Semester5 \n 6.Semester6 \n\n Choose The Semester : ";
		cin>>s;
		semelevel:
		{
			switch(s)
			{
				case 1 : seme="1st_Semester";
				break;
				case 2 : seme="2nd_Semester";
				break;
				case 3 : seme="3rd_Semester";
				break;
				case 4 : seme="4th_Semester";
				break;
				case 5 : seme="5th_Semester";
				break;
				case 6 : seme="6th_Semester";
				break;
				default : cout<<"\n Invalid Semester...\n";
						  cout<<"Please Choose The Semester : ";
						  cin>>s;
						  goto semelevel;
			}
//			cout<<"\nSEMESTER : "<<seme<<endl;
		}
		switch(c){
			case 1 : bscreport("BSC.txt",seme);
			break;
 			case 2 : bcareport("BCA.txt",seme);
			break;
			case 3 : bbareport("BBA.txt",seme);
			break;
			case 4 : Exit();
			break;
			default : cout<<"\nInvalid Choice... \n ";
					  sleep(1);
					  cout<<"Please Enter Correct Chooice : ";
					  cin>>c;
					  goto stdtasklevel;
		}
	}
	cout<<"\nPress Enter To Exit ";
	getch();
	loginMenu()	;															// COMPLEATE
}


void BSC(){
	system("cls");
 	cout<<"\t\t-----------------------------------------------";
	cout<<"\n\t\t\tREPORT CARD MANAGEMENT SYSTEM\t\n";
	cout<<"\t\t-----------------------------------------------";
	Report obj;
	int c,s;
	string seme;
	cout<<"\n 1. Semester1 \n 2. Semester2 \n 3.Semester3 \n 4.Semester4 \n 5.Semester5 \n 6.Semester6 \n\n Choose The Semester : ";
	cin>>s;
	semelevel:
	{
		switch(s)
		{
			case 1 : seme="1st_Semester";
			break;
			case 2 : seme="2nd_Semester";
			break;
			case 3 : seme="3rd_Semester";
			break;
			case 4 : seme="4th_Semester";
			break;
			case 5 : seme="5th_Semester";
			break;
			case 6 : seme="6th_Semester";
			break;
			default : cout<<"\n Invalid Semester...\n";
					  cout<<"Please Choose The Semester : ";
					  cin>>s;
					  goto semelevel;
		}
//		cout<<"\nSEMESTER : "<<seme<<endl;
	}
	cout<<"\n 1. Add Record \n 2. Show Report \n 3.Search \n 4.Modify \n 5.Delete \n 6.Exit \n\n Enter The Choice : ";
	cin>>c;
	
	tasklevel:
	{
		switch(c){
			case 1 : addrecord("BSC.txt",seme);
			break;
			case 2 : display_list("BSC.txt",seme);
			break;
			case 3 : search("BSC.txt",seme);
			break;
			case 4 : modify("BSC.txt",seme);
			break;
			case 5 : delet("BSC.txt",seme);
			break ;
			case 6 : Exit();
			break;
			default : cout<<"\n\nInvalid Choice \n please Choose Again : ";
					  cin>>c;
					  goto tasklevel;
			break;
			c=0;			  
		}
	}
	cout<<"\nPress Enter To Exit ";
	getch();
	loginMenu();
}

void BCA(){
	system("cls");
 	cout<<"\t\t-----------------------------------------------";
	cout<<"\n\t\t\tREPORT CARD MANAGEMENT SYSTEM\t\n";
	cout<<"\t\t-----------------------------------------------";
	Report obj;
	int c,s;
	string seme;
	cout<<"\n 1. Semester1 \n 2. Semester2 \n 3.Semester3 \n 4.Semester4 \n 5.Semester5 \n 6.Semester6 \n 7.Exit \n\n Choose The Semester : ";
	cin>>s;
	semelevel:
	{
		switch(s)
		{
			case 1 : seme="1st_Semester";
			break;
			case 2 : seme="2nd_Semester";
			break;
			case 3 : seme="3rd_Semester";
			break;
			case 4 : seme="4th_Semester";
			break;
			case 5 : seme="5th_Semester";
			break;
			case 6 : seme="6th_Semester";
			break;
			case 7 : Exit();
			break;
			default : cout<<"\n Invalid Semester...\n";
					  cout<<"Please Choose The Semester : ";
					  cin>>s;
					  goto semelevel;
		}
//		cout<<"\nSEMESTER : "<<seme<<endl;
	}
	cout<<"\n 1. Add Record \n 2. Show Report \n 3.Search \n 4.Modify \n 5.Delete \n 6.Exit \n\n Enter The Choice : ";
	cin>>c;
	
	tasklevel:
	{
		switch(c){
			case 1 : addrecord("BCA.txt",seme);
			break;
			case 2 : display_list("BCA.txt",seme);
			break;
			case 3 : search("BCA.txt",seme);
			break;
			case 4 : modify("BCA.txt",seme);
			break;
			case 5 : delet("BCA.txt",seme);
			break ;
			case 6 : Exit();
			break;
			default : cout<<"\n\nInvalid Choice \n please Choose Again : ";
					  cin>>c;
					  goto tasklevel;
			break;
			c=0;			  
		}
	}
	cout<<"\nPress Enter To Exit ";
	getch();
	loginMenu();
}

void BBA(){
	system("cls");
 	cout<<"\t\t-----------------------------------------------";
	cout<<"\n\t\t\tREPORT CARD MANAGEMENT SYSTEM\t\n";
	cout<<"\t\t-----------------------------------------------";
	Report obj;
	int c,s;
	string seme;
	cout<<"\n 1. Semester1 \n 2. Semester2 \n 3.Semester3 \n 4.Semester4 \n 5.Semester5 \n 6.Semester6 \n\n Choose The Semester : ";
	cin>>s;
	semelevel:
	{
		switch(s)
		{
			case 1 : seme="1st_Semester";
			break;
			case 2 : seme="2nd_Semester";
			break;
			case 3 : seme="3rd_Semester";
			break;
			case 4 : seme="4th_Semester";
			break;
			case 5 : seme="5th_Semester";
			break;
			case 6 : seme="6th_Semester";
			break;
			default : cout<<"\n Invalid Semester...\n";
					  cout<<"Please Choose The Semester : ";
					  cin>>s;
					  goto semelevel;
		}
		cout<<"\nSEMESTER : "<<seme<<endl;
	}
	cout<<"\n 1. Add Record \n 2. Show Report \n 3.Search \n 4.Modify \n 5.Delete \n 6.Exit \n\n Enter The Choice : ";
	cin>>c;
	
	tasklevel:
	{
		switch(c){
			case 1 : addrecord("BBA.txt",seme);
			break;
			case 2 : display_list("BBA.txt",seme);
			break;
			case 3 : search("BBA.txt",seme);
			break;
			case 4 : modify("BBA.txt",seme);
			break;
			case 5 : delet("BBA.txt",seme);
			break ;
			case 6 : Exit();
			break;
			default : cout<<"\n\nInvalid Choice \n please Choose Again : ";
					  cin>>c;
					  goto tasklevel;
			break;
			c=0;			  
		}
	}
	cout<<"\nPress Enter To Exit ";
	getch();
	loginMenu();
}


////////////////////////////////////////////////////////////////////////////////////compleate

//ADD RECORD
void addrecord(string filename,string seme){
	system("cls");
 	cout<<"\t\t-----------------------------------------------";
	cout<<"\n\t\t\tREPORT CARD MANAGEMENT SYSTEM\t\n";
	cout<<"\t\t-----------------------------------------------";
	fstream f;
	Report obj;
	int d=0;
	f.open(filename.c_str(), ios::app | ios::out);
	
	if(filename=="BSC.txt"){
		obj.inputbsc(seme);
		obj.Grade();
	}
	else if(filename=="BCA.txt"){
		obj.inputbca(seme);
		obj.Grade();
	}
	else{
		obj.inputbba(seme);	
		obj.Grade();
	}
	
//	obj.input();
//	obj.Grade();
	f.write((char *)&obj,sizeof(obj));
	if(f){
		cout<<"\n\n\tData Added Successfully...\n\n";
		getch();
		f.close();
	}
	else{
		cout<<"\n\n\tData Not Added...\n\n";
		getch();
		f.close();
	}
		
	cout<<"\nTo Add Data Again Press 1 Else Press 0";
	cin>>d;
	if(d==1){
		addrecord(filename,seme);
	}
	else{
		if(filename=="BSC.txt"){
			BSC();
		}
		else if(filename=="BCA.txt"){
			BCA();
		}
		else{
			BBA();	
		}
	}
}																				// COMPLEATE

//SHOW REPORT
void display_list(string filename,string seme){
	system("cls");
 	cout<<"\t\t-----------------------------------------------";
	cout<<"\n\t\t\tREPORT CARD MANAGEMENT SYSTEM\t\n";
	cout<<"\t\t-----------------------------------------------";
	fstream f;
	Report obj;
	int d=0;
	f.open(filename.c_str(), ios::in );
	if(!f){
		cout<<"\n\nFile Not Found...\n";
	}
	else{
		cout<<"\n\nStudent Details Are : \n";
//		while(f.read((char *)&obj,sizeof(obj))){
		if(filename=="BSC.txt"){
			while(f.read((char *)&obj,sizeof(obj))){
				obj.outputbsc(seme);
			}			
		}
		if(filename=="BCA.txt"){
			while(f.read((char *)&obj,sizeof(obj))){
				obj.outputbca(seme);
			}
		}
		if(filename=="BBA.txt"){
			while(f.read((char *)&obj,sizeof(obj))){
				obj.outputbba(seme);	
			}
		}
		getch();
	}
	f.close();
	
	cout<<"\nTo Show Data Again Press 1 Else Press 0";
	cin>>d;
	if(d==1){
		display_list(filename,seme);
	}
	else{
		if(filename=="BSC.txt"){
			BSC();
		}
		if(filename=="BCA.txt"){
			BCA();
		}
		if(filename=="BBA.txt"){
			BBA();	
		}
	}
}																				// COMPLEATE

//SEARCH
void search(string filename,string seme){
	system("cls");
 	cout<<"\t\t-----------------------------------------------";
	cout<<"\n\t\t\tREPORT CARD MANAGEMENT SYSTEM\t\n";
	cout<<"\t\t-----------------------------------------------";
	int flag=0,c=0;
	char Roll[15];
	fstream f;
	Report obj;
	f.open(filename.c_str(), ios::in);
	if(!f){
		cout<<"\n\nFile Not Exit...\n";
	}
	else{
		cin.ignore();
		cout<<"\nEnter The Roll No To Search : ";
		cin.getline(Roll,sizeof(Roll));
//		cout<<Roll<<endl;
		cout<<"\n\n\nStudent Details Are : \n\n";
		while(f.read((char *)&obj,sizeof(obj)))
		{
			string r=obj.roll;			
			if(r==Roll){
//				obj.output();
				if(filename=="BSC.txt"){
					obj.outputbsc(seme);
					flag=1;
				}
				if(filename=="BCA.txt"){
					obj.outputbca(seme);
					flag=1;
				}
				if(filename=="BBA.txt"){
					obj.outputbba(seme);
					flag=1;	
				}
				getch();
			}
			
			if(flag==1)
				break;				
		}
		if(flag==0){
			cout<<"\n Data Not Found...\n";
		}
	}
	f.close();
	cout<<"\nTo Search Again Press 1 Else Press Any Number : ";
	cin>>c;
	if(c==1)
		search(filename,seme);
	else
	{
		if(filename=="BSC.txt"){
			BSC();
		}
		if(filename=="BCA.txt"){
			BCA();
		}
		if(filename=="BBA.txt"){
			BBA();	
		}
	}		
}																					// COMPLEATE


//MODIFY
void modify(string filename,string seme){
	system("cls");
 	cout<<"\t\t-----------------------------------------------";
	cout<<"\n\t\t\tREPORT CARD MANAGEMENT SYSTEM\t\n";
	cout<<"\t\t-----------------------------------------------";
	int flag=0,c=0;
	char Roll[15];
	string roll;
	Report obj;
	fstream f;
	fstream f1;
	f.open(filename.c_str(), ios::in | ios::out);
	f1.open("temp.txt", ios::out);
	
	char file1[] = "temp.txt";	//file name store in string variable to rename
	char file2[8];
	if(filename=="BSC.txt"){
		strcpy(file2,"BSC.txt");	//file name store in string variable to rename
	}
	else if(filename=="BCA.txt"){
		strcpy(file2,"BCA.txt");
	}
	else{
		strcpy(file2,"BBA.txt");	
	}
	
	cin.ignore();	//here cin.ignore() write because when it run 1st time run correctlly but when user Again want to search other report immediately the it can skip the input part...
	cout<<"\nEnter The Roll No To Modify : ";
	cin.getline(Roll,sizeof(Roll));
//	cout<<Roll<<endl;

	if(!f){
		cout<<"\n\n\n\t\t File Not Exit\n";
	}
	else{
		while(f.read((char *) &obj,sizeof(obj))){
			roll = obj.roll;
//			cout<<roll<<endl;
//			cout<<Roll<<endl;
			if(roll==Roll)
			{
				if(filename=="BSC.txt"){
					obj.inputbsc(seme);
					obj.Grade();
				}
				else if(filename=="BCA.txt"){
					obj.inputbca(seme);
					obj.Grade();
				}
				else{
					obj.inputbba(seme);	
					obj.Grade();
				}
	
				f1.write((char *) &obj,sizeof(obj));
				flag=1;
				getch();
			}
			else{
				f1.write((char *)&obj, sizeof(obj));
			}
		}
		if(flag==0){
			cout<<"\n\n\t\tRoll No. Not Match...\n";
			getch();
			f1.close();
			f.close();
			remove("temp.txt");
		}
		if(flag==1){
			cout<<"\n\n\t\tSuccessfully Modified...\n\n";
			getch();
			f1.close();
			f.close();
			remove(file2);
			int r = rename(file1,file2);    //syntax: rename(name/string_varible_which_is_rename , new_name/string_variable)
//			cout<<endl<<r;
			getch();
		}
	}
	cout<<"\n\n\tTo Modify Other Data Press 1 Else Press Any Number : ";
	cin>>c;
	if(c==1){
		modify(filename,seme);
	}
	else{
		if(filename=="BSC.txt"){
			BSC();
		}
		if(filename=="BCA.txt"){
			BCA();
		}
		if(filename=="BBA.txt"){
			BBA();	
		}
	}
}


//DELETE
void delet(string filename,string seme){
	system("cls");
 	cout<<"\t\t-----------------------------------------------";
	cout<<"\n\t\t\tREPORT CARD MANAGEMENT SYSTEM\t\n";
	cout<<"\t\t-----------------------------------------------";
	int flag=0,c=0;
	char Roll[15];
	string roll;
	Report obj;
	fstream f;
	fstream f1;
	f.open(filename.c_str(), ios::in | ios::out);
	f1.open("temp.txt", ios::out);
	
	char file1[] = "temp.txt";	//file name store in string variable to rename
	char file2[8];
	
	if(filename=="BSC.txt"){
		strcpy(file2,"BSC.txt");	//file name store in string variable to rename
	}
	else if(filename=="BCA.txt"){
		strcpy(file2,"BCA.txt");
	}
	else{
		strcpy(file2,"BBA.txt");	
	}
	
	cin.ignore();	//here cin.ignore() write because when it run 1st time run correctlly but when user Again want to search other report immediately the it can skip the input part...
	cout<<"\nEnter The Roll No To Modify : ";
	cin.getline(Roll,sizeof(Roll));
	
	
	if(!f){
		cout<<"\n\n\n\t\t File Not Exit\n";
	}
	else{
		while(f.read((char *) &obj,sizeof(obj))){
			roll = obj.roll;
			if(roll!=Roll){
				f1.write((char *)&obj, sizeof(obj));
//				cout<<roll<<endl;
//				cout<<Roll<<endl;
			}
			else{
				flag=1;
			}
		}
		if(flag==0){
			cout<<"\n\n\t\tRoll No. Not Match...\n";
			getch();
			f1.close();
			f.close();
			remove("temp.txt");
		}
		if(flag==1){
			cout<<"\n\n\t\tSuccessfully Delete...\n\n";
			getch();
			f1.close();
			f.close();
			remove(file2);
			rename(file1,file2);    //syntax: rename(name/string_varible_which_is_rename , new_name/string_variable),,, the 1st variable file1 name changed by the 2nd varible file2
		}
	}
	cout<<"\n\n\tTo Delete Other Data Press 1 Else Press Any Number : ";
	cin>>c;
	if(c==1){
		delet(filename,seme);
	}
	else{
		if(filename=="BSC.txt"){
			BSC();
		}
		if(filename=="BCA.txt"){
			BCA();
		}
		if(filename=="BBA.txt"){
			BBA();	
		}
	}
}																		
				
///////////////////////////////////////////////////////////////////////////////////compleate

//BSC REPORT FOR STUDENT LOGIN
void bscreport(string filename,string seme){
	system("cls");
    cout<<"\t\t-----------------------------------------------";
	cout<<"\n\t\t\tREPORT CARD MANAGEMENT SYSTEM\t\n";
	cout<<"\t\t-----------------------------------------------";
	sleep(2);
	int flag=0,c=0;
	char Roll[15];
	fstream f;
	Report obj;
	f.open(filename.c_str(), ios::in);
	if(!f){
		cout<<"\n\nFile Not Exit...\n";
	}
	else{
		cin.ignore();
		cout<<"\nEnter The Roll No To Search : ";
		cin.getline(Roll,sizeof(Roll));
//		cout<<Roll<<endl;
		cout<<"\n\n\nStudent Details Are : \n\n";
		while(f.read((char *)&obj,sizeof(obj)))
		{
			string r=obj.roll;						
			if(r==Roll){
				obj.outputbsc(seme);
				flag=1;
				getch();
			}
			if(flag==1)
				break;				
		}
		if(flag==0){
			cout<<"\n Data Not Found...\n";
		}
	}
	f.close();
	cout<<"\nTo Search Again Press 1 Else Press Any Number : ";
	cin>>c;
	if(c==1)
		bscreport(filename,seme);
	else
	{
		studentlogin();
	}		
}																					// COMPLEATE

//BCA REPORT FOR STUDENT LOGIN
void bcareport(string filename,string seme){
	system("cls");
 	cout<<"\t\t-----------------------------------------------";
	cout<<"\n\t\t\tREPORT CARD MANAGEMENT SYSTEM\t\n";
	cout<<"\t\t-----------------------------------------------";
	sleep(2);
	int flag=0,c=0;
	char Roll[15];
	fstream f;
	Report obj;
	f.open(filename.c_str(), ios::in);
	if(!f){
		cout<<"\n\nFile Not Exit...\n";
	}
	else{
		cin.ignore();
		cout<<"\nEnter The Roll No To Search : ";
		cin.getline(Roll,sizeof(Roll));
//		cout<<Roll<<endl;
		cout<<"\n\n\nStudent Details Are : \n\n";
		while(f.read((char *)&obj,sizeof(obj)))
		{
			string r=obj.roll;						
			if(r==Roll){
				obj.outputbca(seme);
				flag=1;
				getch();
			}
			if(flag==1)
				break;				
		}
		if(flag==0){
			cout<<"\n Data Not Found...\n";
		}
	}
	f.close();
	cout<<"\nTo Search Again Press 1 Else Press Any Number : ";
	cin>>c;
	if(c==1)
		bcareport(filename,seme);
	else
	{
		studentlogin();
	}		
}																					// COMPLEATE


//BBA REPORT FOR STUDENT LOGIN
void bbareport(string filename,string seme){
	system("cls");
    cout<<"\t\t-----------------------------------------------";
	cout<<"\n\t\t\tREPORT CARD MANAGEMENT SYSTEM\t\n";
	cout<<"\t\t-----------------------------------------------";
	sleep(2);
	int flag=0,c=0;
	char Roll[15];
	fstream f;
	Report obj;
	f.open(filename.c_str(), ios::in);
	if(!f){
		cout<<"\n\nFile Not Exit...\n";
	}
	else{
		cin.ignore();
		cout<<"\nEnter The Roll No To Search : ";
		cin.getline(Roll,sizeof(Roll));
//		cout<<Roll<<endl;
		cout<<"\n\n\nStudent Details Are : \n\n";
		while(f.read((char *)&obj,sizeof(obj)))
		{
			string r=obj.roll;				
			if(r==Roll){
				obj.outputbba(seme);
				flag=1;
				getch();
			}
			if(flag==1)
				break;				
		}
		if(flag==0){
			cout<<"\n Data Not Found...\n";
		}
	}
	f.close();
	cout<<"\nTo Search Again Press 1 Else Press Any Number : ";
	cin>>c;
	if(c==1)
		bbareport(filename,seme);
	else
	{
		studentlogin();
	}		
}																					// COMPLEATE


//EXIT2
void Exit(){
	loginMenu();
}
void EXIT(){
	system("cls");
	cout<<"\t\t-----------------------------------------------";
	cout<<"\n\t\t\tREPORT CARD MANAGEMENT SYSTEM\t\n";
	cout<<"\t\t-----------------------------------------------";
	cout<<"\n\n\n\n\n\n\n\t\t\t\tTHANK YOU...\n\n";
	getch();
	exit(0);
}


int main()
{
	Report R;
	R.welcome();
	loginMenu();
	return 0;
}

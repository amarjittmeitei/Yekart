#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<cstring>
#include<fstream>
using namespace std;

void logo();

string mainstore[8]={"MANGANG","LUWANG","KHUMAN","ANGOM","MOIRANG","KHABANGANBA","SALANGLEISANGTHEM",""};
struct st1
{
	string yumnak;
	string more[6];
	string data;
	int id;
	

};

struct st2
{
	string yumnak;
	string more[6];
	string data;
	int id;
};

struct st3
{
	string yumnak;
	string more[6];
	string data;
	int id;
};

struct st4
{
	string yumnak;
	string more[6];
	string data;
	int id;
};

struct st5
{
	string yumnak;
	string more[6];
	string data;
	int id;
};

struct st6
{
	string yumnak;
	string more[6];
	string data;
	int id;
};

struct st7
{
	string yumnak;
	string more[6];
	string data;
	int id;
};

st1 mangang[300];
st2 luwang[200];
st3 khuman[300];
st4 angom[200];
st5 moirang[150];
st6 salang[100];
st7 kha[150];

class kanglei
{
	private:
		string surname1;
		string surname2;
		string yek1;
		string yek2;
		int code[7]={0,0,0,0,0,0,0};

	public:
	//	string yek11,_2,_3,_4,_5,_6,_7;
		void find();
		void check();//string &, string &);
		void yinfo(int);
		void Rasi();
		void getRes();
		void about();
		void report();
		
		int find_lowLevel(string);
		int sairuk(string,string);
		void yinfo_lowLevel(char);
		void suggestion(string,int);
		
		void MangangPlugIn();
		void LuwangPlugIn();
		void KhumanPlugIn();
		void AngomPlugIn();
		void MoirangPlugIn();
		void SalangPlugIn();
		void KhaPlugIn();
		
};

int kanglei::find_lowLevel(string a)
{
	int i=0,flag=0;
	string yek;
	while(i<260)	//mangang
	{
		string temp=mangang[i].yumnak;
		int cmp=a.compare(temp);
		if(cmp==0)
		{
			code[flag]=1;
			flag++;
		}
		i++;
	}
	i=0;
	while(i<120)	//luwang
	{
		string temp=luwang[i].yumnak;
		int cmp=a.compare(temp);
		if(cmp==0)
		{
			code[flag]=2;
			flag++;
		}
		i++;
	}
	i=0;
	while(i<220)	//khuman
	{
		string temp=khuman[i].yumnak;
		int cmp=a.compare(temp);
		if(cmp==0)
		{
			code[flag]=3;
			flag++;
		}
		i++;
	}
	i=0;
	while(i<110)	//angom
	{
		string temp=angom[i].yumnak;
		int cmp=a.compare(temp);
		if(cmp==0)
		{
			code[flag]=4;
			flag++;
		}
		i++;
	}
	i=0;
	while(i<100)	//moirang
	{
		string temp=moirang[i].yumnak;
		int cmp=a.compare(temp);
		if(cmp==0)
		{
			code[flag]=5;
			flag++;
		}
		i++;
	}
	i=0;
	while(i<70)	//khabanganba
	{
		string temp=kha[i].yumnak;
		int cmp=a.compare(temp);
		if(cmp==0)
		{
			code[flag]=6;
			flag++;
		}
		i++;
	}
	i=0;
	while(i<70)	//sarangleisangthem
	{
		string temp=salang[i].yumnak;
		int cmp=a.compare(temp);
		if(cmp==0)
		{
			code[flag]=7;
			flag++;
		}
		i++;
	}
	return flag;
}

int kanglei::sairuk(string yek1,string yek2)
{
	if((yek1=="MOIRANG" && yek2=="ANGOM") || (yek2=="MOIRANG" && yek1=="ANGOM"))
		return 1;
	else if((yek1=="KHUMAN" && yek2=="LUWANG") || (yek2=="KHUMAN" && yek1=="LUWANG"))
		return 1;
	else if((yek1=="KHABANGANBA" && yek2=="SALANGLEISANGTHEM") || (yek2=="KHABANGANBA" && yek1=="SALANGLEISANGTHEM"))
		return 1;
	else if((yek1=="KHABANGANBA" && yek2=="MOIRANG") || (yek2=="KHABANGANBA" && yek1=="MOIRANG"))
		return 1;

	else 
		return 0;
}

void kanglei::suggestion(string a,int dev=1)
{
	cout<<"\n  SUGGESTION\n";
	cout<<"-------------------"<<endl;
	int first=-1,last=-1;
	int flag=0,jump;
	int c1=0,c2,c3,j;
	while((first==-1 || last==-1) && c1<260)
	{
		if(first==-1 && mangang[c1].yumnak[0]==surname1[0])
			first=c1;
		if(first!=-1 && mangang[c1].yumnak[0]!=surname1[0])
			last=c1-1;
		c1++;
		if(c1==260)
			goto lu;
	}
	if(dev==1)
		cout<<first<<'\t'<<last<<endl;
	c1=1;
	jump=first;
	c3=last;
	while(jump<c3)
	{
		if(dev==1)
			cout<<c1<<'.';
		jump=c2=first;
		c3=last;
		flag=0;
		while(flag!=2 && jump<last)
		{
		//	cout<<',';
			if(flag!=1 && mangang[jump].yumnak[c1]==surname1[c1])
			{
				first=jump;
				flag=1;
			}
			if(flag==1 && mangang[jump].yumnak[c1]!=surname1[c1])
			{
				last=jump-1;
				flag=2;
			}
			jump++;
			if(dev==1)
			{
				cout<<flag<<'\t'<<jump<<'\t'<<first<<'\t'<<last<<"....";
				cout<<flag<<'\t'<<jump<<'\t'<<c2<<'\t'<<c3<<endl;
			}
		}
	
		c1++;
	}
	for(int i=first,j=0;i<=last;i++,j++)
	{
		cout<<mangang[i].yumnak<<'\n';
	}
	
	//luwang
	lu:
	first=-1,last=-1;
	flag=0,c1=0;
	while((first==-1 || last==-1) &&c1<120)
	{
		if(first==-1 && luwang[c1].yumnak[0]==surname1[0])
			first=c1;
		if(first!=-1 && luwang[c1].yumnak[0]!=surname1[0])
			last=c1-1;
		c1++;
		if(c1==120)
			goto kh;
	}

	if(dev==1)
		cout<<first<<'\t'<<last<<endl;
	c1=1;
	jump=first;
	c3=last;
	while(jump<c3)
	{
		if(dev==1)
			cout<<c1<<'.';
		jump=c2=first;
		c3=last;
		flag=0;
		while(flag!=2 && jump<last)
		{
		//	cout<<',';
			if(flag!=1 && luwang[jump].yumnak[c1]==surname1[c1])
			{
				first=jump;
				flag=1;
			}
			if(flag==1 && luwang[jump].yumnak[c1]!=surname1[c1])
			{
				last=jump-1;
				flag=2;
			}
			jump++;
			if(dev==1)
			{
				cout<<flag<<'\t'<<jump<<'\t'<<first<<'\t'<<last<<"....";
				cout<<flag<<'\t'<<jump<<'\t'<<c2<<'\t'<<c3<<endl;
			}
		}
	
		c1++;
	}
	for(int i=first,j=0;i<=last;i++,j++)
	{
		cout<<luwang[i].yumnak<<'\n';
	}
	
	//khuman
	kh:
	first=-1,last=-1;
	flag=0,c1=0;
	while((first==-1 || last==-1) && c1<220)
	{
				
		if(first==-1 && khuman[c1].yumnak[0]==surname1[0])
			first=c1;
		if(first!=-1 && khuman[c1].yumnak[0]!=surname1[0])
			last=c1-1;
		c1++;
		if(c1==220)
			goto an;
	}
	
	if(dev==1)
		cout<<first<<'\t'<<last<<endl;
	c1=1;
	jump=first;
	c3=last;
	while(jump<c3)
	{
		if(dev==1)
			cout<<c1<<'.';
		jump=c2=first;
		c3=last;
		flag=0;
		while(flag!=2 && jump<last)
		{
		//	cout<<',';
			if(flag!=1 && khuman[jump].yumnak[c1]==surname1[c1])
			{
				first=jump;
				flag=1;
			}
			if(flag==1 && khuman[jump].yumnak[c1]!=surname1[c1])
			{
				last=jump-1;
				flag=2;
			}
			jump++;
			if(dev==1)
			{
				cout<<flag<<'\t'<<jump<<'\t'<<first<<'\t'<<last<<"....";
				cout<<flag<<'\t'<<jump<<'\t'<<c2<<'\t'<<c3<<endl;
			}
		}
	
		c1++;
	}

	for(int i=first,j=0;i<=last;i++,j++)
	{
		cout<<khuman[i].yumnak<<'\n';
	}
	
	//angom
	an:
	first=-1,last=-1;
	flag=0,c1=0;
	while((first==-1 || last==-1 )&& c1<110)
	{
				
		if(first==-1 && angom[c1].yumnak[0]==surname1[0])
			first=c1;
		if(first!=-1 && angom[c1].yumnak[0]!=surname1[0])
			last=c1-1;
		c1++;
		if(c1==110)
			goto mo;
	}
	
	if(dev==1)
		cout<<first<<'\t'<<last<<endl;
	c1=1;
	jump=first;
	c3=last;
	while(jump<c3)
	{
		if(dev==1)
			cout<<c1<<'.';
		jump=c2=first;
		c3=last;
		flag=0;
		while(flag!=2 && jump<last)
		{
		//	cout<<',';
			if(flag!=1 && angom[jump].yumnak[c1]==surname1[c1])
			{
				first=jump;
				flag=1;
			}
			if(flag==1 && angom[jump].yumnak[c1]!=surname1[c1])
			{
				last=jump-1;
				flag=2;
			}
			jump++;
			if(dev==1)
			{
				cout<<flag<<'\t'<<jump<<'\t'<<first<<'\t'<<last<<"....";
				cout<<flag<<'\t'<<jump<<'\t'<<c2<<'\t'<<c3<<endl;
			}
		}
	
		c1++;
	}

	for(int i=first,j=0;i<=last;i++,j++)
	{
		cout<<angom[i].yumnak<<'\n';
	}
	
	//moirang
	mo:
	first=-1,last=-1;
	flag=0,c1=0;
	while((first==-1 || last==-1) && c1<105)
	{
				
		if(first==-1 && moirang[c1].yumnak[0]==surname1[0])
			first=c1;
		if(first!=-1 && moirang[c1].yumnak[0]!=surname1[0])
			last=c1-1;
		c1++;
		if(c1==105)
			goto kha;
	}
	
	if(dev==1)
		cout<<first<<'\t'<<last<<endl;
	c1=1;
	jump=first;
	c3=last;
	while(jump<c3)
	{
		if(dev==1)
			cout<<c1<<'.';
		jump=c2=first;
		c3=last;
		flag=0;
		while(flag!=2 && jump<last)
		{
		//	cout<<',';
			if(flag!=1 && moirang[jump].yumnak[c1]==surname1[c1])
			{
				first=jump;
				flag=1;
			}
			if(flag==1 && moirang[jump].yumnak[c1]!=surname1[c1])
			{
				last=jump-1;
				flag=2;
			}
			jump++;
			if(dev==1)
			{
				cout<<flag<<'\t'<<jump<<'\t'<<first<<'\t'<<last<<"....";
				cout<<flag<<'\t'<<jump<<'\t'<<c2<<'\t'<<c3<<endl;
			}
		}
	
		c1++;
	}

	for(int i=first,j=0;i<=last;i++,j++)
	{
		cout<<moirang[i].yumnak<<'\n';
	}
	
	//kha
	kha:
	first=-1,last=-1;
	flag=0,c1=0;
	while((first==-1 || last==-1)  && c1<70)
	{
		if(first==-1 && kha[c1].yumnak[0]==surname1[0])
			first=c1;
		if(first!=-1 && kha[c1].yumnak[0]!=surname1[0])
			last=c1-1;
		c1++;
		if(c1==70)
			goto sa;
	}
	
	if(dev==1)
		cout<<first<<'\t'<<last<<endl;
	c1=1;
	jump=first;
	c3=last;
	while(jump<c3)
	{
		if(dev==1)
			cout<<c1<<'.';
		jump=c2=first;
		c3=last;
		flag=0;
		while(flag!=2 && jump<last)
		{
		//	cout<<',';
			if(flag!=1 && kha[jump].yumnak[c1]==surname1[c1])
			{
				first=jump;
				flag=1;
			}
			if(flag==1 && kha[jump].yumnak[c1]!=surname1[c1])
			{
				last=jump-1;
				flag=2;
			}
			jump++;
			if(dev==1)
			{
				cout<<flag<<'\t'<<jump<<'\t'<<first<<'\t'<<last<<"....";
				cout<<flag<<'\t'<<jump<<'\t'<<c2<<'\t'<<c3<<endl;
			}
		}
	
		c1++;
	}

	for(int i=first,j=0;i<=last;i++,j++)
	{
		cout<<kha[i].yumnak<<'\n';
	}
	
	//salang
	sa:
	first=-1,last=-1;
	flag=0,c1=0;
	while((first==-1 || last==-1 )&& c1<70)
	{
				
		if(first==-1 && salang[c1].yumnak[0]==surname1[0])
			first=c1;
		if(first!=-1 && salang[c1].yumnak[0]!=surname1[0])
			last=c1-1;
		c1++;
		if(c1==70)
		{
			cout<<"No suggestable surname available\n";
			return;
		}
	}
	
	if(dev==1)
		cout<<first<<'\t'<<last<<endl;
	c1=1;
	jump=first;
	c3=last;
	while(jump<c3)
	{
		if(dev==1)
			cout<<c1<<'.';
		jump=c2=first;
		c3=last;
		flag=0;
		while(flag!=2 && jump<last)
		{
		//	cout<<',';
			if(flag!=1 && salang[jump].yumnak[c1]==surname1[c1])
			{
				first=jump;
				flag=1;
			}
			if(flag==1 && salang[jump].yumnak[c1]!=surname1[c1])
			{
				last=jump-1;
				flag=2;
			}
			jump++;
			if(dev==1)
			{
				cout<<flag<<'\t'<<jump<<'\t'<<first<<'\t'<<last<<"....";
				cout<<flag<<'\t'<<jump<<'\t'<<c2<<'\t'<<c3<<endl;
			}
		}
	
		c1++;
	}

	for(int i=first,j=0;i<=last;i++,j++)
	{
		cout<<salang[i].yumnak<<'\n';
	}
	
	
	
}

void kanglei::find()
{
	fi1:
	char temp;
	int flag=0,i=0,c1=0;
	char msg;
	system("CLS");
	cout<<"\n---------------YEKART---------------\n";
	cout<<"\n You can check the YEK of your surname here"<<endl;
	cout<<"\n\t1-continue\n\t0-back"<<endl;
	temp=getch();
	fflush(stdin);
	system("CLS");
	cout<<"\n---------------YEKART---------------\n";
	cout<<"\n You can check the YEK of your surname here"<<endl;
	if(temp=='1')
	{
		cout<<"\n\tEnter your Surname: ";
		cin>>surname1;
		while(surname1[i]!='\0')
		{
			surname1[i]=toupper(surname1[i]);
			i++;
		}
		i=0;
		i=find_lowLevel(surname1);
		if(i==0)
		{
			
			cout<<"\n  Sorry your surname is not found please check the spelling \n";
			suggestion(surname1,0);
			cout<<"\n----> "<<surname1<<" not found these are some suggestion\n";
			fi3:
			cout<<"\n\n\t1. Try angain\n\t0. Back\n\t4. Analyse (for developer only !!)";
			msg=getch();
			fflush(stdin);
			switch(msg)
			{
				case '0':
					return;
					break;
				case '1':
					goto fi1;
					break;
				case '4':
					suggestion(surname1);
					getch();
				default:
					fflush(stdin);
					cout<<"\nPlease select a correct option"<<endl;
					getch();
					goto fi3;
			}
			
			
		}
		else
		{
			cout<<"\n\t"<<surname1<<" ----> ";
			for(i=0;i<find_lowLevel(surname1);i++)
				cout<<mainstore[code[i]-1]<<' ';
			fi2:
			cout<<"\n\t\t\t\t1-Know more\n\t\t\t\t0-Continue"<<endl;
			char temp2=getch();
			fflush(stdin);
			switch(temp2)
			{
				case '1':
					system("CLS");
					cout<<"\n---------------YEKART---------------\n";
					cout<<"\n You can check the YEK of your surname here"<<endl;
					if(find_lowLevel(surname1)>1)
					{
						cout<<"\t"<<surname1<<" ----> ";
						for(i=0;i<find_lowLevel(surname1);i++)
							cout<<mainstore[code[i]-1]<<' ';
						cout<<"\n\nYOUR SURNAME HAVE MORE THAN ONE YEK"<<endl;
						for(i=0;i<find_lowLevel(surname1);i++)
						{
							yek1=mainstore[code[i]-1];
							yinfo(0);
							cout<<"----------------------\n";
							Sleep(300);
						}
						cout<<"\n\n\n\t\t\t------>Press any key to continue";
						fflush(stdin);
						getch();
					}
					else
					{
						yek1=mainstore[code[0]-1];
						cout<<"\t"<<surname1<<" ----> "<<yek1<<endl;
						yinfo(0);
						cout<<"\n\n\n\t\t\t------>Press any key to continue";
						fflush(stdin);
						getch();
						
					}
					
				case '0':
					return;
				default:
					cout<<"please select correct option"<<endl;
					goto fi2;
			}
		}
	}
	else if(temp=='0')
		return;
	else
	{
		cout<<"\n---->Please select the correct option\n\tpress any key to continue"<<endl;
		getch();
		fflush(stdin);
		goto fi1;
	}
}

void kanglei::check()
{
	ch1:
	int i=0,j,flag=0,point=0,pc=0,msg1;
	string yek,yum,sai;
	char name1[30];
	char name2[30];
	char title[100]; sprintf_s(title, "%s\\Desktop\\Report_", std::getenv("USERPROFILE"));
//	char title[100]="Report_";
	char temp;
	ch2:
	system("CLS");
	cout<<"\n---------------YEKART---------------\n";
	cout<<"\n You can check meitei relationship restriction with your partner"<<endl;
	cout<<"\n\t1-continue\n\t0-back"<<endl;
	temp=getch();
	fflush(stdin);
	
	system("CLS");
	cout<<"\n---------------YEKART---------------\n";
	cout<<"\n You can check meitei relationship restriction with your partner"<<endl;
	if(temp=='1')
	{
		
		cout<<"\n\tYour surname: ";
		cin>>surname1;
		while(surname1[i]!='\0')
		{
			surname1[i]=toupper(surname1[i]);
			i++;
		}
		i=0;
	//	yek1=mainstore[find_lowLevel(surname1)];
		if(find_lowLevel(surname1)==0)
		{
			msg1=MessageBox(NULL,"SURNAME NOT FOUND!\nPlease check the spelling or report it on main menu report option.","YEKART", MB_RETRYCANCEL|MB_ICONWARNING|MB_DEFBUTTON1|MB_TOPMOST|MB_DEFBUTTON1);
			if(msg1==2)
				return;
			else if(msg1=4)
				goto ch2;
		}
	//	else
	//		yek1=mainstore[code[0]-1]; //change needed
		cout<<"\tYour name: ";
		fflush(stdin);
		gets(name1);
		//cin>>name1;
	
		cout<<"\n\tPartner's surname: ";
		cin>>surname2;
		while(surname2[i]!='\0')
		{
			surname2[i]=toupper(surname2[i]);
			i++;
		}
	//	yek2=mainstore[find_lowLevel(surname2)];
		if(find_lowLevel(surname2)==0)
		{
			msg1=MessageBox(NULL,"SURNAME NOT FOUND!\nPlease check the spelling or report it on main menu report option.","YEKART", MB_RETRYCANCEL|MB_ICONWARNING|MB_DEFBUTTON1|MB_TOPMOST|MB_DEFBUTTON1);
			if(msg1==2)
				return;
			else if(msg1=4)
				goto ch2;
				
		}
	//	else
	//		yek2=mainstore[code[0]-1];  //change needed
		cout<<"\tPartner's name: ";
		fflush(stdin);
		gets(name2);
		//cin>>name2;
		
		for(i=0;name1[i]!='\0';i++)
			name1[i]=toupper(name1[i]);
		for(i=0;name2[i]!='\0';i++)
			name2[i]=toupper(name2[i]);
		
		cout<<"____________________________________________"<<endl;
		cout<<"\n\t"<<name1<<endl;
		cout<<"\t"<<surname1<<"\n\t";
		for(i=0;i<find_lowLevel(surname1);i++)
			cout<<mainstore[code[i]-1]<<" ";
		cout<<"\n\n\t"<<name2<<endl;
		cout<<"\t"<<surname2<<"\n\t";
		for(i=0;i<find_lowLevel(surname2);i++)
			cout<<mainstore[code[i]-1]<<" ";
		
		point=0;
		if(surname1!=surname2)
		{
			yum="NO";
			point+=20;
		}
		else
			yum="YES (ATTENTION NEEDED!)";
		flag=0;
		for(i=0;i<find_lowLevel(surname1);i++)
		{
			yek1=mainstore[code[i]-1];
			for(j=0;j<find_lowLevel(surname2);j++)
			{
				yek2=mainstore[code[j]-1];
				if(yek1==yek2)
				{
					yek="Yes (ATTENTION NEEDED!)";
					flag=1;
					break;
				}
				else
					yek="NO";
			}
			if(flag==1)
				break;
		}
		
		if(yek=="NO")
			point+=70;
		
		flag=0;
		for(i=0;i<find_lowLevel(surname1);i++)
		{
			yek1=mainstore[code[i]-1];
			for(j=0;j<find_lowLevel(surname2);j++)
			{
				yek2=mainstore[code[j]-1];
				if(sairuk(yek1,yek2))
				{
					sai="Yes (ATTENTION NEEDED!)";
					flag=1;
					break;
				}
				else
					sai="NO";
			}
			if(flag==1)
				break;
		}
		if(sai=="NO")
			point+=10;
			
		cout<<"\n\n   REPORT:"<<endl;//20,70,10
		cout<<"\n\tYumnam Manaba\t"<<yum;
		cout<<"\n\tYek Thoknaba\t"<<yek;
		cout<<"\n\tSairuk Tinaba\t"<<sai<<endl;	
		
//		pc=point/10;
		cout<<"\n   Marriage Excepted by:   ";
		cout<<"|";
		for(i=0;i<point/5;i++)
		{
			cout<<"\3";
			Sleep(100-i*5);
		}
		for(;i<20;i++)
			cout<<" ";
		cout<<"|";
		Sleep(100);
		cout<<"   "<<point<<"%";
		Sleep(100);
		ch3:
		cout<<"\n\n1-Download Report\n0-Back";
		fflush(stdin);
		temp=getch();
		if(temp=='1')
		{
			
			cout<<"\n____________________________________________"<<endl;
		
			strcat(title,name1);
			strcat(title,"_");
			strcat(title,name2);
			strcat(title,".txt");
		
			ofstream out;
			out.open(title);
			if(!out)
			{
				cout<<"\nSorry cannot download you report. Please report the problem on main menu report option"<<endl;
				goto ch3;
			}
			out<<"\tFROM YEKART-\n\n\n";
			out<<"Your name: "<<name1<<endl;
			out<<"Your Surname: "<<surname1<<endl;
			out<<"Your Yek: ";//yek1<<endl;
			for(i=0;i<find_lowLevel(surname1);i++)
				out<<mainstore[code[i]-1]<<" ";
			out<<"\n\nPartner's name: "<<name2<<endl;
			out<<"Partner's surname: "<<surname2<<endl;
			out<<"Partner's Yek: ";//yek2<<endl;
			for(i=0;i<find_lowLevel(surname2);i++)
				out<<mainstore[code[i]-1]<<" ";
			out<<"\n\n\tReport: "<<endl;
			out<<"\t    Yumnak manaba\t"<<yum<<endl;
			out<<"\t    Yek Thoknaba\t"<<yek<<endl;
			out<<"\t    Sairuk tinaba\t"<<sai<<endl;
			out<<"\nCONCLUSION: Marriage accepted by: "<<point<<'%';
			out<<"    |";
			for(i=0;i<point/5;i++)
				out<<"|";
			while(i<20)
			{
				out<<" ";
				i++;
			}
			out<<"|"<<endl;
			out<<"\nSUGGESTION: This is not the final result. You can go to other professional person"<<endl;
			out.close();
			cout<<"\nYour report is saved"<<endl;
			cout<<"File name: "<<title<<endl;
			cout<<"Press any key to continue"<<endl;
			fflush(stdin);
			getch();
		}
		else if(temp=='0')
			return;
		else
		{
			cout<<"\n---->Please select the correct option\n\tpress any key to continue"<<endl;
			getch();
			fflush(stdin);
			goto ch3;
		}
		
	}
	else if(temp=='0')
		return;
	else
	{
		cout<<"\n---->Please select the correct option\n\tpress any key to continue"<<endl;
		getch();
		fflush(stdin);
		goto ch1;
	}
//	return;
}

void kanglei::yinfo(int ctr=1)
{
	yi1:
	fflush(stdin);
	int flag=0,msg1;
	if(ctr==1)
	{
		system("CLS");
		cout<<"\n---------------YEKART---------------\n";
		cout<<"\n Enter the Yek you want to know about: ";
		cin>>yek1;
		for(int i=0;yek1[i]!='\0';i++)
			yek1[i]=toupper(yek1[i]);
		
	}
	for(int i=0;i<7;i++)
			if(yek1==mainstore[i])
				flag=1;
	if(flag!=1)
	{
		msg1=MessageBox(NULL,"Yek not found","Yek not found",MB_RETRYCANCEL|MB_ICONWARNING|MB_DEFBUTTON1|MB_TOPMOST);
		if(msg1==2)
			return;
		else if(msg1=4)
			goto yi1;
	}
			
	
	if(flag==1)
	{
		yinfo_lowLevel(yek1[2]);
		cout<<"\n    "<<yek1<<" ga Sairuk tinaba Yek sing: \n\n";
		for(int i=0;i<7;i++)
			if(sairuk(yek1,mainstore[i]))
				cout<<'\t'<<yek1<<" ga "<<mainstore[i]<<" ga Sairuk tinei\n";
		if(ctr!=0)
		{
			cout<<"\npress any key to continue";
			getch();
			fflush(stdin);
		}
	}
}

void kanglei::getRes()
{
	ge1:
	ofstream out2;
	char title[100]; sprintf_s(title, "%s\\Desktop\\", std::getenv("USERPROFILE"));

	char ctr,ctr2,ctr3,ch;
	ge2:
	int count=0;
	system("CLS");
	cout<<"\n---------------YEKART---------------\n";
	cout<<"\n You can get and download these resources "<<endl;
			cout<<"\n\t1.Mangang yeki yumnak sing";
			cout<<"\n\t2.Luwang yeki yumnak sing";
			cout<<"\n\t3.Khuman yeki yumnak sing";
			cout<<"\n\t4.Angom yeki yumnak sing";
			cout<<"\n\t5.Moirang yeki yumnak sing";
			cout<<"\n\t6.Khabanganba yeki yumnak sing";
			cout<<"\n\t7.Salangleisangthem yeki yumnak sing";
//			cout<<"\n\t8.All Surnames / Apunba Yumnak";
			cout<<"\n\t0.Back";
			fflush(stdin);
			ctr2=getch();
			switch(ctr2)
			{
				case '1':
					ge3:
					system("CLS");
					cout<<"\n---------------YEKART---------------\n";
					cout<<"\n MANGANG YEKKI YUMNAK SING"<<endl;
					cout<<"-------------------------------"<<endl;
					ch='a';
					while(isalpha(ch))
					{
						cout<<count+1<<". "<<mangang[count].yumnak<<endl;
						count++;
						ch=mangang[count].yumnak[0];
					}
					cout<<"\n\t1.Download Resource\n\t0.Continue";
					fflush(stdin);
					ctr3=getch();
					switch(ctr3)
					{
						case '1':
							strcat(title,"mangangYumnak_YEKART.txt");
							out2.open(title);
							out2<<"\n MANGANG YEKKI YUMNAK SING\tYEKART"<<endl;
							out2<<"--------------------------------------------"<<endl;
							out2<<"\n\tIratpa numit: Engagi taramangani (15) ni panba";
							out2<<"\n\tMachu: Angangba (RED)";
							out2<<"\n\tThang: Chakthang";
							out2<<"\n\tLei: Thambal Angangba";
							out2<<"\n\tHei: Thamchet";
							out2<<"\n\tNga: Sareng angangba\n"<<endl;
							ch='a';
							count=0;
							while(isalpha(ch))
							{
								out2<<count+1<<". "<<mangang[count].yumnak<<endl;
								count++;
								ch=mangang[count].yumnak[0];
							}
							out2<<"\n By M Amarjit";
							out2.close();
							break;
						case '0':
							goto ge2;
							break;
						default:
							cout<<"-----> Please select a correct option"<<endl;
							goto ge3;
					}
					break;
				
				case '2':	
					//luwang
					ge4:
					count=0;
					system("CLS");
					cout<<"\n---------------YEKART---------------\n";
					cout<<"\n LUWANG YEKKI YUMNAK SING"<<endl;
					cout<<"-------------------------------"<<endl;
					ch='a';
					while(isalpha(ch))
					{
						cout<<count+1<<". "<<luwang[count].yumnak<<endl;
						count++;
						ch=luwang[count].yumnak[0];
					}
					cout<<"\n\t1.Download Resource\n\t0.Continue";
					fflush(stdin);
					ctr3=getch();
					switch(ctr3)
					{
						case '1':
							strcat(title,"luwangYumnak_YEKART.txt");
							out2.open(title);
							out2<<"\n LUWANG YEKKI YUMNAK SING\tYEKART"<<endl;
							out2<<"------------------------------------------"<<endl;
							out2<<"\n\tIratpa Numit: Wakching gi taramangani(15) panba";
							out2<<"\n\tMachu: Angouba (WHITE)";
							out2<<"\n\tThang: Tondumba";
							out2<<"\n\tLei: Melei";
							out2<<"\n\tHei: Kihom";
							out2<<"\n\tNga: Sareng Angouba";
							out2<<"\n\tSing: Heikru sing\n"<<endl;
							ch='a';
							count=0;
							while(isalpha(ch))
							{
								out2<<count+1<<". "<<luwang[count].yumnak<<endl;
								count++;
								ch=luwang[count].yumnak[0];
							}
							out2<<"\n By M Amarjit";
							out2.close();
							break;
						case '0':
							goto ge2;
							break;
						default :
							cout<<"----->\n Please select a correct option"<<endl;
							goto ge4;
					}
					break;
				
				case '3':	
					//khuman
					ge5:
					count=0;
					system("CLS");
					cout<<"\n---------------YEKART---------------\n";
					cout<<"\n KHUMAN YEKKI YUMNAK SING"<<endl;
					cout<<"-------------------------------"<<endl;
					ch='a';
					while(isalpha(ch))
					{
						cout<<count+1<<". "<<khuman[count].yumnak<<endl;
						count++;
						ch=khuman[count].yumnak[0];
					}
					cout<<"\n\t1.Download Resource\n\t0.Continue";
					fflush(stdin);
					ctr3=getch();
					switch(ctr3)
					{
						case '1':
							strcat(title,"khumanYumnak_YEKART.txt");
							out2.open(title);
							out2<<"\n KHUMAN YEKKI YUMNAK SING\tYEKART"<<endl;
							out2<<"\n\tIratpa numit: Sajibu gi taramangani(15) panba";
							out2<<"\n\tMachu: Amuba (BLACK)";
							out2<<"\n\tThang: Tonkakpa";
							out2<<"\n\tLei: Leisang";
							out2<<"\n\tHei: Heibong";
							out2<<"\n\tNga: Sareng mayanglen amuba";
							out2<<"\n\tSing: Chaokhong\n"<<endl;
							ch='a';
							count=0;
							while(isalpha(ch))
							{
								out2<<count+1<<". "<<khuman[count].yumnak<<endl;
								count++;
								ch=khuman[count].yumnak[0];
							}
							out2<<"\n By M Amarjit";
							out2.close();
							break;
						case '0':
							goto ge2;
							break;
						default:
							cout<<"----->\n Please select a correct option"<<endl;
							goto ge5;
					}
					break;
				
				case '4':
					//angom
					ge6:
					count=0;
					count=0;
					system("CLS");
					cout<<"\n---------------YEKART---------------\n";
					cout<<"\n ANGOM YEKKI YUMNAK SING"<<endl;
					cout<<"-------------------------------"<<endl;
					ch='a';
					while(isalpha(ch))
					{
						cout<<count+1<<". "<<angom[count].yumnak<<endl;
						count++;
						ch=angom[count].yumnak[0];
					}
					cout<<"\n\t1.Download Resource\n\t0.Continue";
					fflush(stdin);
					ctr3=getch();
					switch(ctr3)
					{
						case '1':
							strcat(title,"angomYumnak_YEKART.txt");
							out2.open(title);
							out2<<"\n ANGOM YEKKI YUMNAK SING\tYEKART"<<endl;
							out2<<"-------------------------------"<<endl;
							out2<<"\n\tIratpa numit: Engen gi taranithoini (12) panba";
							out2<<"\n\tMachu: Napu / Napu machu (YELLOW)";
							out2<<"\n\tThang: Pukakthang";
							out2<<"\n\tLei: Tharo angouba";
							out2<<"\n\tHei: Heibong";
							out2<<"\n\tNga: Sareng angouba\n"<<endl;
							ch='a';
							count=0;
							while(isalpha(ch))
							{
								out2<<count+1<<". "<<angom[count].yumnak<<endl;
								count++;
								ch=angom[count].yumnak[0];
							}
							out2<<"\n By M Amarjit";
							out2.close();
							break;
						case '0':
							goto ge2;
							break;
						default:
							cout<<"----->\n Please select a correct option"<<endl;
							goto ge6;
					}
					break;
				case '5':
					//moirang
					ge7:
					count=0;
					system("CLS");
					cout<<"\n---------------YEKART---------------\n";
					cout<<"\n MOIRANG YEKKI YUMNAK SING"<<endl;
					cout<<"-------------------------------"<<endl;
					ch='a';
					while(isalpha(ch))
					{
						cout<<count+1<<". "<<moirang[count].yumnak<<endl;
						count++;
						ch=moirang[count].yumnak[0];
					}
					cout<<"\n\t1.Download Resource\n\t0.Continue";
					fflush(stdin);
					ctr3=getch();
					switch(ctr3)
					{
						case '1':
							strcat(title,"moirangYumnak_YEKART.txt");
							out2.open(title);
							out2<<"\n MOIRANG YEKKI YUMNAK SING\tYEKART"<<endl;
							out2<<"-------------------------------"<<endl;
							out2<<"\n\tIratpa numit: Lamta gi taranithoini (12) panba";
							out2<<"\n\tMachu: Mungang / Mulang / Khamen Machu (VIOLET)";
							out2<<"\n\tThang: Yentokshaba";
							out2<<"\n\tLei: Yerum Lei";
							out2<<"\n\tHei: Kangrou / Heitup";
							out2<<"\n\tNga: Sareng napu\n";
							ch='a';
							count=0;
							while(isalpha(ch))
							{
								out2<<count+1<<". "<<moirang[count].yumnak<<endl;
								count++;
								ch=moirang[count].yumnak[0];
							}
							out2<<"\n By M Amarjit";
							out2.close();
							break;
						case '0':
							goto ge2;
							break;
						default:
							cout<<"----->\n Please select a correct option"<<endl;
							goto ge7;
					}
					break;
				
				case '6':
					//kha
					ge8:
					count=0;
					system("CLS");
					cout<<"\n---------------YEKART---------------\n";
					cout<<"\n KHABANGANBA YEKKI YUMNAK SING"<<endl;
					cout<<"-------------------------------"<<endl;
					ch='a';
					while(isalpha(ch))
					{
						cout<<count+1<<". "<<kha[count].yumnak<<endl;
						count++;
						ch=kha[count].yumnak[0];
					}
					cout<<"\n\t1.Download Resource\n\t0.Continue";
					fflush(stdin);
					ctr3=getch();
					switch(ctr3)
					{
						case '1':
							strcat(title,"khabanganbaYumnak_YEKART.txt");
							out2.open(title);
							out2<<"\n KHABANGANBA YEKKI YUMNAK SING\tYEKART"<<endl;
							out2<<"-------------------------------"<<endl;
							out2<<"\n\tIratpa numit: Kalengi taramangani(15) panba";
							out2<<"\n\tMachu: Atiya machu (SKY BLUE)";
							out2<<"\n\tThang: Chinnaiba";
							out2<<"\n\tLei: Leisang";
							out2<<"\n\tHei: Heiba";
							out2<<"\n\tNga: Sareng Ngangna langba\n";
							ch='a';
							count=0;
							while(isalpha(ch))
							{
								out2<<count+1<<". "<<kha[count].yumnak<<endl;
								count++;
								ch=kha[count].yumnak[0];
							}
							out2<<"\n By M Amarjit";
							out2.close();
							break;
						case '0':
							goto ge2;
							break;
						default:
							cout<<"----->\n Please select a correct option"<<endl;
							goto ge8;
					}
					break;
				case '7':
					//salang
					ge9:
					count=0;
					system("CLS");
					cout<<"\n---------------YEKART---------------\n";
					cout<<"\n SALANGLEISANGTHEM YEKKI YUMNAK SING"<<endl;
					cout<<"-------------------------------"<<endl;
					ch='a';
					while(isalpha(ch))
					{
						cout<<count+1<<". "<<salang[count].yumnak<<endl;
						count++;
						ch=salang[count].yumnak[0];
					}
					cout<<"\n\t1.Download Resource\n\t0.Continue";
					fflush(stdin);
					ctr3=getch();
					switch(ctr3)
					{
						case '1':
							strcat(title,"salangleishangthemYumnak_YEKART.txt");
							out2.open(title);
							out2<<"\n SALANGLEISHANGTHEM YEKKI YUMNAK SING\tYEKART"<<endl;
							out2<<"-------------------------------"<<endl;
							out2<<"\n\tIratpa numit: Phairen gi Taratarukni (16) panba";
							out2<<"\n\tMachu: Asangba (GREEN)";
							out2<<"\n\tThang: Khunthong thang";
							out2<<"\n\tLei: Leisang";
							out2<<"\n\tHei: Hei manamnaiba";
							out2<<"\n\tNga: Sareng sangna langba\n";
							ch='a';
							count=0;
							while(isalpha(ch))
							{
								out2<<count+1<<". "<<salang[count].yumnak<<endl;
								count++;
								ch=salang[count].yumnak[0];
							}
							out2<<"\n By M Amarjit";
							out2.close();
							break;
						case '0':
							goto ge2;
							break;
						default:
							cout<<"----->\n Please select a correct option"<<endl;
							goto ge9;
					}
					break;
				
				case '0':
					return;
				default:
					cout<<"\n-----> Please enter a correct option Press any key to continue"<<endl;
					fflush(stdin);
					getch();
					goto ge2;
				break;
			}
}

void kanglei::about()
{
	system("CLS");
	cout<<"\n---------------YEKART---------------\n";
	cout<<"\n\tThis programe is made to give some data about Meitei yek salai and yumnak (surnames)."<<endl;
	cout<<"This programe is also trying to make easy on checking the relationship restriction for meitei marriage rule with their surnames.";
	cout<<"\nYou can check the yek of your surname here and download resources."<<endl;
	cout<<"\n\n\n  THANK YOU A LOT FOR USING YEKART \2 \2\t\tAMARJIT MOIRANGTHEM.";
	cout<<"\n\n\n\t\t\t------>Press any key to continue";
	fflush(stdin);
	getch();
	return;
}

void kanglei::report()
{
	system("CLS");
	cout<<"\n---------------YEKART---------------\n";
	cout<<"If you want to suggest something or you got something  wrong sorry for that please inform on the following contact"<<endl;
	cout<<"\n Call: +91 9362092772";
	cout<<"\n Whatsapp: +91 9362092772";
	cout<<"\n Email: amarjitmoirangcha13@gmail.com";
	cout<<"\n Amarjit Moirangthem\n Heirok part 2 bazar, Thoubal, Manipur, India 795148";
	cout<<"\n\n\tTHANK YOU FOR USING YEKART"<<endl;
	cout<<"\n\n\n\t\t\t------>Press any key to continue";
	fflush(stdin);
	getch();
	return;
}


int main()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	system("color B7");
	cout<<endl<<endl;
	logo();
	cout<<endl;
	SetConsoleTextAttribute(h,13);
	cout<<"  Press any key to continue";//<<endl;
	getch();
	system("color B0");
	system("CLS");
	kanglei ama;
	
	//yek data plug in
	ama.MangangPlugIn();
	ama.LuwangPlugIn();
	ama.KhumanPlugIn();
	ama.AngomPlugIn();
	ama.MoirangPlugIn();
	ama.KhaPlugIn();
	ama.SalangPlugIn();
	
	ma1:
	char flow;
	int msg;
	system("CLS");

	cout<<"\n------------------------------------YEKART-----------------------------------------\n";
	cout<<"\n                                  MAIN MENU";
	cout<<"\n                                -------------"<<endl;
	cout<<"\n  1. CHECK MEITEI MARRIAGE RESTRICTION _(ADOMGI KHANGNAJABADUGA LUHONGBA YAGADRA?)";
	cout<<"\n  2. FIND YOUR YEK _(ADOMGI YEK KARINO?)";
	cout<<"\n  3. ABOUT A YEK _(ADOMGI YEK KI AKUPPA)";
	cout<<"\n  4. GET RESOURCES";
	cout<<"\n  5. ABOUT";
	cout<<"\n  6. REPORT";
	cout<<"\n  0. EXIT";
	cout<<"\n                             Press the corresponding number to select the option.";
	cout<<"\n____________________________________________________________________________________";
	cout<<"\n                                                                           m amarjit";
	fflush(stdin);
	flow=getch();
	switch(flow)
	{
		case '1':
			ama.check();
			goto ma1;
			break;
		case '2':
			ama.find();
			goto ma1;
			break;
		case '3':
			ama.yinfo();
			goto ma1;
			break;
		case '4':
			ama.getRes();
			goto ma1;
			break;
		case '5':
			ama.about();
			goto ma1;
			break;
		case '6':
			ama.report();
			goto ma1;
		case '0':
			msg=MessageBox(NULL,"Do you want to exit","YEKART",MB_YESNO|MB_ICONWARNING|MB_DEFBUTTON1|MB_TOPMOST|MB_DEFBUTTON1);
			if(msg==6)
				return 0;
			else if(msg=7)
				goto ma1;
		default:
			goto ma1;
		
	}
	
	
	
	return 0;
}

void logo()
{
	cout<<"                                         +#####.        *##########*-    .###############+\n";
	cout<<"                                        -@@@@@@%        #@@@@%%%@@@@@@=  .@@@@@@@@@@@@@@@*\n";
	cout<<"                                       .@@@@%@@@+       #@@@#    .%@@@@        *@@@@      \n";
	cout<<" ..     ..   .......   ..     ..       #@@@+.@@@@-      #@@@#     %@@@%        *@@@@      \n";
	cout<<"-@@#   #@@: #@@@@@@@. +@@: .#@@-      +@@@%  =@@@@.     #@@@@####@@@@*.        *@@@@      \n";
	cout<<" .%@%:%@#.  #@@.....  +@@:=@@+       -@@@@=:::%@@@#     #@@@@@@@@@@%.          *@@@@      \n";
	cout<<"   #@@@*    #@@@%%%#  +@@@@@=       .@@@@@@@@@@@@@@+    #@@@#  :%@@@@-         *@@@@      \n";
	cout<<"    @@%     #@@       +@@=+@@*.     #@@@#=-----+@@@@-   #@@@#    *@@@@*.       *@@@@      \n";
	cout<<"    @@%     #@@#####. +@@: :%@@-   +@@@@.       #@@@@.  #@@@#     :@@@@@-      *@@@@      \n";
	cout<<endl;
	cout<<"-@@@@@@@@@@@@@@@=+@@@@+-@@@@@@@@@@@@@@@@+          :@@@@@@@@@@@@@@@: +@@@@@@#%@%@@*   =@@-    -%@= \n";
	cout<<" *@@-.     .=@@+:@@  @@.*@@ -@@- @@+ *@%            *@@. %@# *@%    #@%:   =@@* .@@- +@@-   :%@%-  \n";
	cout<<" #@#         %@* -#%%*: *@@ :@@: @@+ *@%            %@*  %@* *@%    @@=     @@+  ==:*@@%**+*@@=    \n";
	cout<<" :@@*==: -==#@%:        *@@ :@@: @@+ :=-            %@#  %@* *@%    @@@@@@@@@@+      ====*@@@@@#:  \n";
	cout<<"   -@@@= +@@*:          *@@ :@@: @@+                +@@: %@* *@%    @@*:::::@@+          #@%  +@@: \n";
	cout<<"  =%@#:   =@@+          *@@ :@@: @@+                 +@@*%@* *@%-**.@@=     @@+          #@%. :@@- \n";
	cout<<" *@%-      .*@@@.       *@@@@@@@@@@+                  .+#@@@@@@@@#=:@@@@@@@@@@+          .*@@@@%=  \n";
	cout<<"  .           :.        ............                      .:::.     ...........             ..     ";
}

//----> THIS IS DATA BASE OF THE PROGRME DON'T CHANGE IT!!

void kanglei::yinfo_lowLevel(char yek)
{
	switch(yek)
	{
		case 'N':
			cout<<"\n    MANGANG YEK\n";
			Sleep(100);
			cout<<"\n\tIratpa numit: Engagi taramangani (15) ni panba";
			Sleep(100);
			cout<<"\n\tMachu: Angangba (RED)";
			Sleep(100);
			cout<<"\n\tThang: Chakthang";
			Sleep(100);
			cout<<"\n\tLei: Thambal Angangba";
			Sleep(100);
			cout<<"\n\tHei: Thamchet";
			Sleep(100);
			cout<<"\n\tNga: Sareng angangba"<<endl;
			Sleep(100);
			break;
		case 'W':
			cout<<"\n    LUWANG YEK\n";
			Sleep(100);
			cout<<"\n\tIratpa Numit: Wakching gi taramangani(15) panba";
			Sleep(100);
			cout<<"\n\tMachu: Angouba (WHITE)";
			Sleep(100);
			cout<<"\n\tThang: Tondumba";
			Sleep(100);
			cout<<"\n\tLei: Melei";
			Sleep(100);
			cout<<"\n\tHei: Kihom";
			Sleep(100);
			cout<<"\n\tNga: Sareng Angouba";
			Sleep(100);
			cout<<"\n\tSing: Heikru sing"<<endl;
			Sleep(100);
			break;
		case 'U':
			cout<<"\n    KHUMAN YEK\n";
			Sleep(100);
			cout<<"\n\tIratpa numit: Sajibu gi taramangani(15) panba";
			Sleep(100);
			cout<<"\n\tMachu: Amuba (BLACK)";
			Sleep(100);
			cout<<"\n\tThang: Tonkakpa";
			Sleep(100);
			cout<<"\n\tLei: Leisang";
			Sleep(100);
			cout<<"\n\tHei: Heibong";
			Sleep(100);
			cout<<"\n\tNga: Sareng mayanglen amuba";
			Sleep(100);
			cout<<"\n\tSing: Chaokhong\n";
			Sleep(100);
			break;
		case 'G':
			cout<<"\n    ANGOM YEK\n";
			Sleep(100);
			cout<<"\n\tIratpa numit: Engen gi taranithoini (12) panba";
			Sleep(100);
			cout<<"\n\tMachu: Napu / Napu machu (YELLOW)";
			Sleep(100);
			cout<<"\n\tThang: Pukakthang";
			Sleep(100);
			cout<<"\n\tLei: Tharo angouba";
			Sleep(100);
			cout<<"\n\tHei: Heibong";
			Sleep(100);
			cout<<"\n\tNga: Sareng angouba\n";
			Sleep(100);
			break;
		case 'I':
			cout<<"\n    MOIRANG YEK\n";
			Sleep(100);
			cout<<"\n\tIratpa numit: Lamta gi taranithoini (12) panba";
			Sleep(100);
			cout<<"\n\tMachu: Mungang / Mulang / Khamen Machu (VIOLET)";
			Sleep(100);
			cout<<"\n\tThang: Yentokshaba";
			Sleep(100);
			cout<<"\n\tLei: Yerum Lei";
			Sleep(100);
			cout<<"\n\tHei: Kangrou / Heitup";
			Sleep(100);
			cout<<"\n\tNga: Sareng napu\n";
			Sleep(100);
			break;
		case 'A':
			cout<<"\n    KHABANGANBA YEK \n";
			Sleep(100);
			cout<<"\n\tIratpa numit: Kalengi taramangani(15) panba";
			Sleep(100);
			cout<<"\n\tMachu: Atiya machu (SKY BLUE)";
			Sleep(100);
			cout<<"\n\tThang: Chinnaiba";
			Sleep(100);
			cout<<"\n\tLei: Leisang";
			Sleep(100);
			cout<<"\n\tHei: Heiba";
			Sleep(100);
			cout<<"\n\tNga: Sareng Ngangna langba\n";
			Sleep(100);
			break;
		case 'L':
			cout<<"\n    SALANGLEISANGTHEM YEK\n";
			Sleep(100);
			cout<<"\n\tIratpa numit: Phairen gi Taratarukni (16) panba";
			Sleep(100);
			cout<<"\n\tMachu: Asangba (GREEN)";
			Sleep(100);
			cout<<"\n\tThang: Khunthong thang";
			Sleep(100);
			cout<<"\n\tLei: Leisang";
			Sleep(100);
			cout<<"\n\tHei: Hei manamnaiba";
			Sleep(100);
			cout<<"\n\tNga: Sareng sangna langba\n";
			Sleep(100);
			break;
		default:
			MessageBox(NULL,"Yek info low Level invalid entry","Yek not found",MB_OK|MB_ICONSTOP|MB_DEFBUTTON1|MB_TOPMOST);
			
			
			
			
	}
}

void kanglei::MangangPlugIn()
{
mangang[0].yumnak="AHEIBAM";
mangang[1].yumnak="ACHURAM";
mangang[2].yumnak="AHANTHEM";
mangang[3].yumnak="AKHENGBAM";
mangang[4].yumnak="AKHOM";
mangang[5].yumnak="ATOM";
mangang[6].yumnak="AYEKPAM";
mangang[7].yumnak="CHAKAMAYUM";
mangang[8].yumnak="CHANAMBAM";
mangang[9].yumnak="CHANINGHANBAM";
mangang[10].yumnak="CHANINGSENBAM";
mangang[11].yumnak="CHANNABAM";
mangang[12].yumnak="CHANJHANBAM";
mangang[13].yumnak="CHARAIMAYUM";
mangang[14].yumnak="CHAROIBAM"; //[khuman]
mangang[15].yumnak="CHEROM";
mangang[16].yumnak="CHINGKHAM";
mangang[17].yumnak="CHIROM";
mangang[18].yumnak="CHONGJAMBAM";
mangang[19].yumnak="CHONJHONBAM";
mangang[20].yumnak="CHONGTHAM";
mangang[21].yumnak="CHORIBAM";
mangang[22].yumnak="HAKWANTHEM";
mangang[23].yumnak="HAODEIBAM";
mangang[24].yumnak="HAOKHOM";
mangang[25].yumnak="HAYINGTHEM";
mangang[26].yumnak="HEIBITHABAM";
mangang[27].yumnak="HEIRANGKHONGJAM";
mangang[28].yumnak="HEIRANGLEISANGBAM";
mangang[29].yumnak="HEIRANGTHOKCHAM";
mangang[30].yumnak="HEIROM"; // [angom]
mangang[31].yumnak="HEISNAM";
mangang[32].yumnak="HEMNAM"; //[angom]
mangang[33].yumnak="HICHAM";
mangang[34].yumnak="HIRINGTHEM";
mangang[35].yumnak="HIROM";
mangang[36].yumnak="HODAM";
mangang[37].yumnak="HODAMNGATHAM";
mangang[38].yumnak="HUIDROM";
mangang[39].yumnak="HUIREM"; //[angom]
mangang[40].yumnak="HUIRONGBAM"; //[luwang]
mangang[41].yumnak="HUIYONGBAM";
mangang[42].yumnak="HOUBIYAM";
mangang[43].yumnak="IKHOISANGBAM";
mangang[44].yumnak="IKWANTHEM";
mangang[45].yumnak="IPUMSANGBAM";
mangang[46].yumnak="IPUSANGBAM"; //[luwang]
mangang[47].yumnak="IRENGBAM";
mangang[48].yumnak="IROM";
mangang[49].yumnak="IROMSINAM";
mangang[50].yumnak="IRUMBAM";
mangang[51].yumnak="IRUNGBAM";
mangang[52].yumnak="ISENBAM";
mangang[53].yumnak="KAISAM";
mangang[54].yumnak="KAMBAM";
mangang[55].yumnak="KANGABAM";
mangang[56].yumnak="KANGASANGBAM";
mangang[57].yumnak="KANGHUJAM";
mangang[58].yumnak="KANGSENBAM";
mangang[59].yumnak="KAYENPAIBAM";
mangang[60].yumnak="KEISHAM"; //[angom] [salangleisangthem]
mangang[61].yumnak="KEITHELLAKPAM"; //[moirang]
mangang[62].yumnak="KHAMBAM"; //[khabanganba]	
mangang[63].yumnak="HAMNAM"; //[luwang]
mangang[64].yumnak="KHOIDONGBAM";
mangang[65].yumnak="KHOIROM";
mangang[66].yumnak="KHOISHNAM"; //[angom] [salangleisangthem] 
mangang[67].yumnak="KHUMANCHAIPAM";
mangang[68].yumnak="KHUMANKEIRAKPAM";
mangang[69].yumnak="KHUMANLAMBAM";
mangang[70].yumnak="KHONGNAM";
mangang[71].yumnak="KHAMLANGSANGBAM";
mangang[72].yumnak="KHANAM";
mangang[73].yumnak="KHANGJAPAM";
mangang[74].yumnak="KHUNJAM"; //[luwang]
mangang[75].yumnak="KHUNJHAM";
mangang[76].yumnak="KHURAILATPAM";
mangang[77].yumnak="KHURIRENBAM"; //[salngleisangthem]
mangang[78].yumnak="KHUNJAHUNBAM";
mangang[79].yumnak="KHUNDOM";
mangang[80].yumnak="KHUNDRAKPAM";
mangang[81].yumnak="KHURIYENBAM";
mangang[82].yumnak="KHWAIRAKPAM"; //[moirang]
mangang[83].yumnak="KONGABAM";
mangang[84].yumnak="ONGBAJAM"; //[luwang] 
mangang[85].yumnak="KONGACHAM";
mangang[86].yumnak="KONGPAM"; //[angom] 
mangang[87].yumnak="KONSAM"; //[khuman] [angom] [moirang][salangleisangthem] 
mangang[88].yumnak="KONUHAOBAM";
mangang[89].yumnak="LAICHANBAM";
mangang[90].yumnak="LAIKANGBAM"; //[luwang]
mangang[91].yumnak="LAISANGBAM"; //[angom]
mangang[92].yumnak="LAITAM";
mangang[93].yumnak="LAITONJAM";
mangang[94].yumnak="LAITONJAM"; //[angom]
mangang[95].yumnak="LANGTEN";
mangang[96].yumnak="LANGTEMAN"; //[luwang]
mangang[97].yumnak="LANGPOKLAKPAM";
mangang[98].yumnak="LANTHAM"; // [khuman]
mangang[99].yumnak="LEICHOIBAM";
mangang[100].yumnak="LEICHOMBAM"; //leichonbam
mangang[101].yumnak="LEIMALEIRAKPAM";
mangang[102].yumnak="LEIMAPOKPAM";
mangang[103].yumnak="LEIMARAKPAM";
mangang[104].yumnak="LEIMARAM";
mangang[105].yumnak="LEIMASANGBAM";
mangang[106].yumnak="LEISONGBAM";
mangang[107].yumnak="LEIUSHUNGBAM";
mangang[108].yumnak="LIUNUNGBAM";
mangang[109].yumnak="LEISANGBAM";
mangang[110].yumnak="LEIYUNGSHUNGBAM";
mangang[111].yumnak="LEMBAM";
mangang[112].yumnak="LOITAM"; //[salangleisangthem]
mangang[113].yumnak="LOITONGBAM";
mangang[114].yumnak="LOITONGBAM";
mangang[115].yumnak="LOUKRAKPAM";
mangang[116].yumnak="LOURANGBAM";
mangang[117].yumnak="LOUREMBAM";
mangang[118].yumnak="LOURIYAM";
mangang[119].yumnak="LOUSAMBAM";
mangang[120].yumnak="LOURUNGBAM";
mangang[121].yumnak="LUKRAM";
mangang[122].yumnak="MAIRENBAM";
mangang[123].yumnak="MAYANGLAMBAM";
mangang[124].yumnak="MOICHAM";
mangang[125].yumnak="MORAM";// [luwang]
mangang[126].yumnak="MOIBUNGLOKPAM";
mangang[127].yumnak="MOIRANGNINGTHOUMAYUM";
mangang[128].yumnak="MUTUM";
mangang[129].yumnak="NAHAKPAM";// [luwang] 
mangang[130].yumnak="NAKAMBAM";
mangang[131].yumnak="NAMEIRAKPAM";
mangang[132].yumnak="NAMOIJAM";// [moirang]
mangang[133].yumnak="NAMOIRAKPAM";
mangang[134].yumnak="NANDEIBAM";// [moirang] [khabanganba]
mangang[135].yumnak="NAODAM";
mangang[136].yumnak="NAOKONSANGBAM";
mangang[137].yumnak="NAOREM";
mangang[138].yumnak="NAOROIBAM"; //[luwang]
mangang[139].yumnak="NATHAM";
mangang[140].yumnak="NAYANGLAMBAMUTUM";
mangang[141].yumnak="NGANGAM";
mangang[142].yumnak="NGANGOM";// [luwang] [moirang]
mangang[143].yumnak="NGANGKHARUNGBAM";
mangang[144].yumnak="NGANGOMYUMDANGBAM";
mangang[145].yumnak="NGARIYANBAM";
mangang[146].yumnak="NGATHEM"; // [salangleisangthem]
mangang[147].yumnak="NINGTHOUJAM";
mangang[148].yumnak="NONGMAIJAM";
mangang[149].yumnak="NONGTHOMBAM";//[luwang] [angom]
mangang[150].yumnak="NONGMEIKAPAM";
mangang[151].yumnak="NOULAM";
mangang[152].yumnak="NUMITLEISANGBAM";
mangang[153].yumnak="PAONAM"; //[angom]
mangang[154].yumnak="POUNAM";
mangang[155].yumnak="PAOPAM";
mangang[156].yumnak="PEBAM";
mangang[157].yumnak="PECHIMAYUM";
mangang[158].yumnak="PHAIREMBAM";// [khuman]
mangang[159].yumnak="PHAJOUBAM";
mangang[160].yumnak="PHAMDOM";
mangang[161].yumnak="PHELEM";
mangang[162].yumnak="PHICHAM";
mangang[163].yumnak="PHIJAM";// [khabanganba]
mangang[164].yumnak="PHIJAPHIBAM";
mangang[165].yumnak="PHILEM";
mangang[166].yumnak="PHOURUNGBAM";
mangang[167].yumnak="PUTHEM";// [moirang]
mangang[168].yumnak="PUNAM";
mangang[169].yumnak="SAANGAISEN";
mangang[170].yumnak="SAGOLHANJABAM";
mangang[171].yumnak="SAGOLSEM";
mangang[172].yumnak="SAIKHOM";
mangang[173].yumnak="SAIREM";// [angom]
mangang[174].yumnak="SANABAM";
mangang[175].yumnak="SANGAISENBAM";
mangang[176].yumnak="SANGAISEM";
mangang[177].yumnak="SANGLENBAM";
mangang[178].yumnak="SANROKPAM";
mangang[179].yumnak="SANGLEM";
mangang[180].yumnak="SANGLELMAYUM";
mangang[181].yumnak="SANGTHOKPAM";
mangang[182].yumnak="SANOUJAM";
mangang[183].yumnak="SANSABAM";
mangang[184].yumnak="SANSAM";
mangang[185].yumnak="SANASAM";
mangang[186].yumnak="SANWAIBAM";
mangang[187].yumnak="SAPAM"; // [khuman]
mangang[188].yumnak="SARUNGBAM";// [moirang]
mangang[189].yumnak="SAWOKPAM";
mangang[190].yumnak="SENJAM";
mangang[191].yumnak="SERAM";// [angom]
mangang[192].yumnak="SHAMSHINBAM";
mangang[193].yumnak="SINAM";// [khuman]
mangang[194].yumnak="SINGAM";
mangang[195].yumnak="SINGGHAM";
mangang[196].yumnak="SINGKHAMBAM";// [moirang]
mangang[197].yumnak="SINGKHAM";
mangang[198].yumnak="SINGKHARAM";
mangang[199].yumnak="SINGKHUBAM";
mangang[200].yumnak="SORAM";// [khuman] 
mangang[201].yumnak="SORENSANGBAM";
mangang[202].yumnak="SOIRAM";
mangang[203].yumnak="SOUGRAKPAM";
mangang[204].yumnak="SUKHAM";
mangang[205].yumnak="SUIREM";
mangang[206].yumnak="TAIBUNGJHAM";
mangang[207].yumnak="TAICHAM";
mangang[208].yumnak="TAKHELLAMBAM";
mangang[209].yumnak="TANGEEJAM";
mangang[210].yumnak="TAYENJAM";
mangang[211].yumnak="TAYUJHAM";
mangang[212].yumnak="TENSHUBAM";
mangang[213].yumnak="THANGANGSHABAM";// [khuman]
mangang[214].yumnak="THANGASHABAM";
mangang[215].yumnak="THINGNAM ";
mangang[216].yumnak="THINGYAM";
mangang[217].yumnak="THONGABAM";
mangang[218].yumnak="THONGKAPAM"; //[salangleisangthem]
mangang[219].yumnak="THONGRAM";
mangang[220].yumnak="THONGRATABAM";
mangang[221].yumnak="THOUDAM";
mangang[222].yumnak="TOIBISAM";
mangang[223].yumnak="TONAMBAM";
mangang[224].yumnak="TONBAM";
mangang[225].yumnak="YAISKULAKPAM";
mangang[226].yumnak="YANGOUYEIBAM";
mangang[227].yumnak="YANGJHRAKPAM";
mangang[228].yumnak="YELWAM";
mangang[229].yumnak="YENKOKPAM";
mangang[230].yumnak="YENSENBAM";
mangang[231].yumnak="YENPOKPAM";
mangang[232].yumnak="YELEM";
mangang[233].yumnak="YUMKHAIBAM";// [angom] [moirang]
mangang[234].yumnak="YUMNAM";
mangang[235].yumnak="YUMNAMKOMSAM";
mangang[236].yumnak="URIKHINBAM";
mangang[237].yumnak="URIKKHINBAM";// [luwang]
mangang[238].yumnak="URIPAM";
mangang[239].yumnak="WAIKHOM";// [luwang]
mangang[240].yumnak="WAIROM";
mangang[241].yumnak="WANGKHARAKPAM";
mangang[242].yumnak="WANGKHEILOURUNGBAM";
mangang[243].yumnak="WANGKHEIMAYUM";
mangang[244].yumnak="WANGKHEIPHAMDOKPAM";
mangang[245].yumnak="WANGKHEIRAKPAM";
mangang[246].yumnak="WARELLAMBAM";
mangang[247].yumnak="WAREPPAM";// [khuman]
mangang[248].yumnak="WAREMBAM";
mangang[249].yumnak="WAREPPAM";
mangang[250].yumnak="YANGAMBAM";// [luwang] [salangleisangthem]
mangang[251].yumnak="YANGNUYENBAM";
mangang[252].yumnak="YANGOUBAM";
mangang[253].yumnak="YENGKHOM";
//mangang[254].yumnak="LEICHOMBAM";
}

void kanglei::LuwangPlugIn()
{
luwang[0].yumnak="ABUJAM";
luwang[1].yumnak="ACHOIBAM";
luwang[2].yumnak="ACHOIBAM";// [angom]
luwang[3].yumnak="ANGAMBAM";
luwang[4].yumnak="ARAMBAM";
luwang[5].yumnak="AREKPAM";
luwang[6].yumnak="ARUBAM";
luwang[7].yumnak="ASANGBAM";// [moirang] 
luwang[8].yumnak="ASANGWANGBAM";
luwang[9].yumnak="ATHOKCHAM";
luwang[10].yumnak="ATHOKPAM";
luwang[11].yumnak="AYEKPAM";// [mangang] [khabanganba] [leisangthem]
luwang[12].yumnak="CHINGJABAM";
luwang[13].yumnak="CHINGGAIBAM";
luwang[14].yumnak="CHONGTHAM";// [khabanganba] [leisangthem]
luwang[15].yumnak="HAORONGBAM";// [moirang] 
luwang[16].yumnak="HAIKHAM";
luwang[17].yumnak="HEIKHAM";
luwang[18].yumnak="HEIKAM";
luwang[19].yumnak="HIJAM";
luwang[20].yumnak="HINAOSABAM";
luwang[21].yumnak="HINGKHANGBAM";
luwang[22].yumnak="HUIRONGBAM";// SALAM 
luwang[23].yumnak="ICHOM";
luwang[24].yumnak="KAMBONGMAYUM";
luwang[25].yumnak="KHOIBAM";// [angom] 
luwang[26].yumnak="KHOKNAM";
luwang[27].yumnak="KHUGAM";
luwang[28].yumnak="KHUJAMMAYUM";
luwang[29].yumnak="KHUMUKCHAM";// [khuman] [khabanganba] 
luwang[30].yumnak="KOIJAM";
luwang[31].yumnak="KONGPACHAM";
luwang[32].yumnak="LAIKANGBAM";
luwang[33].yumnak="LAIKHONGLEMBAM";
luwang[34].yumnak="LAIRENJAM";//[moirang]
luwang[35].yumnak="LAIRONGJAM";
luwang[36].yumnak="LAISOM";
luwang[37].yumnak="LAKPAMSABAM";
luwang[38].yumnak="LEIRONGJAM";
luwang[39].yumnak="LORENGBAM";
luwang[40].yumnak="LOUKHAMBAM";
luwang[41].yumnak="LOUPAM";
luwang[42].yumnak="LUSANGBAM";
luwang[43].yumnak="LUWANGSANGBAM";
luwang[44].yumnak="MAYENGBAM";
luwang[45].yumnak="MAISNAM";
luwang[46].yumnak="METRAM";
luwang[47].yumnak="NGOUBAM";
luwang[48].yumnak="NAHAKPAM";
luwang[49].yumnak="NAMBAM";
luwang[50].yumnak="NANBAM";
luwang[51].yumnak="NAOROIBAM";
luwang[52].yumnak="NAOROIJAM";
luwang[53].yumnak="NINGCHITPAM";
luwang[54].yumnak="NINGACHIKPAM";
luwang[55].yumnak="NGANGBAM";
luwang[56].yumnak="NGANGLOM";
luwang[57].yumnak="NGANGOM";
luwang[58].yumnak="NONGPOKPAM";
luwang[59].yumnak="NONGTHOMBAM";
luwang[60].yumnak="PHAMIHANBAM";
luwang[61].yumnak="PHAMPIBAM";
luwang[62].yumnak="PHEIROIJAM";
luwang[63].yumnak="PUNGKRAIJAM";
luwang[64].yumnak="SAKOKPAM";
luwang[65].yumnak="SALAM";
luwang[66].yumnak="SAMBAKRAM";
luwang[67].yumnak="SAMBANGSAM";
luwang[68].yumnak="SELAM";
luwang[69].yumnak="SENJAM";
luwang[70].yumnak="SHITHANGKHAM";// [moirang]
luwang[71].yumnak="SORAM";
luwang[72].yumnak="SOURAM";
luwang[73].yumnak="TAKHELMAYUM";
luwang[74].yumnak="THAMANGCHAM";
luwang[75].yumnak="THAMANGBAM";
luwang[76].yumnak="THANANGCHAM";
luwang[77].yumnak="THANGJAM";// [khuman] [angom] [moirang] [leisangthem] 
luwang[78].yumnak="THANGJAMSORAM";
luwang[79].yumnak="THANGJAMKHUMUKCHAM"; 
luwang[80].yumnak="THAOROIJAM";
luwang[81].yumnak="THAOTEIBAM";
luwang[82].yumnak="THIRAM";
luwang[83].yumnak="THOUNAOJAM";
luwang[84].yumnak="TINBIJAM";
luwang[85].yumnak="TOIBIJAM";
luwang[86].yumnak="TOIJHAM";
luwang[87].yumnak="TOUMOM";
luwang[88].yumnak="TOUREM";// [khuman] 
luwang[89].yumnak="URIKKHINBAM";
luwang[90].yumnak="UREPKHINBAM";
luwang[91].yumnak="USHAM";
luwang[92].yumnak="WAHENGBAM";
luwang[93].yumnak="WAIKHOM";
luwang[94].yumnak="WAKONTHEM";
luwang[95].yumnak="WANGLENBAM";// [moirang]
luwang[96].yumnak="WANGLELBAM";// [angom] 
luwang[97].yumnak="WANGLEMPAM";
luwang[98].yumnak="YANGAMBAM";
luwang[99].yumnak="YANGKAMPAM";
luwang[100].yumnak="YANGKOPAM";
luwang[101].yumnak="YELANGBAM";// [khabanganba] [leisangthem]
luwang[102].yumnak="YENDREMBAM";
luwang[103].yumnak="YOIRELKBAM";
luwang[104].yumnak="YUMLEMBAM";
luwang[105].yumnak="SOUBAM";
//added
luwang[106].yumnak="MEISNAM";
}

void kanglei::KhumanPlugIn()
{
khuman[0].yumnak="AHONGSANGBAM";
khuman[1].yumnak="AFRAM";
khuman[2].yumnak="AHAIBAM";
khuman[3].yumnak="AHABAM";// [khabanganba]
khuman[4].yumnak="AHEIBAM";// [mangang] [moirang] [leisangthem] 
khuman[5].yumnak="AHONGBAM";
khuman[6].yumnak="AKANGJAM";
khuman[7].yumnak="AKARAM";// [moirang] 
khuman[8].yumnak="AKHAM";
khuman[9].yumnak="AKHOM"; //[leisangthem]
khuman[10].yumnak="AKHUWAM";
khuman[11].yumnak="AKUWAM";
khuman[12].yumnak="AMAKCHAM";
khuman[13].yumnak="AMOM";//[moirang] [leisangthem] 
khuman[14].yumnak="ANGUDAM";
khuman[15].yumnak="ASEIBAHANBAM";
khuman[16].yumnak="ASEM";// [moirang] 
khuman[17].yumnak="ATOM";// [mangang]
khuman[18].yumnak="AYAM";
khuman[19].yumnak="CHABUNGBAM"; 
khuman[20].yumnak="CHANDAM";
khuman[21].yumnak="CHANGGAMMAYUM";
khuman[22].yumnak="CHIKHOM";
khuman[23].yumnak="CHINGKHUBAM";
khuman[24].yumnak="CHINGKHAM";
khuman[25].yumnak="CHONGKHAM"; //[leisangthem]
khuman[26].yumnak="CHONGMOM";// [moirang] 
khuman[27].yumnak="CHUNGKHAM";
khuman[28].yumnak="HANGLEM";// [moirang]
khuman[29].yumnak="HAOBAM";
khuman[30].yumnak="HAOBIJAM";// [khabanganba]
khuman[31].yumnak="HAOIBAM"; //[moirang]
khuman[32].yumnak="HAORONGBAM";
khuman[33].yumnak="HAORUNGBAM";
khuman[34].yumnak="HATRONGBAM";
khuman[35].yumnak="HAWAIBAM";
khuman[36].yumnak="HEIKRUJAM";
khuman[37].yumnak="HEIRAM";// [angom]
khuman[38].yumnak="HENTAKPAM";
khuman[39].yumnak="HOWAIBAM";
khuman[40].yumnak="INABAM";
khuman[41].yumnak="INGLAIBAM";
khuman[42].yumnak="INGLEM";
khuman[43].yumnak="INGUIDAM";
khuman[44].yumnak="INGUDAM";
khuman[45].yumnak="INSENBAM";
khuman[46].yumnak="INTONBAM";
khuman[47].yumnak="JHANABAM";
khuman[48].yumnak="KABAOBAM";
khuman[49].yumnak="KABORUNGBAM";
khuman[50].yumnak="KABRAMBAM";// [moirang] [khabanganba]
khuman[51].yumnak="KABREBAMBAM ";
khuman[52].yumnak="KADAM";
khuman[53].yumnak="KANAM";
khuman[54].yumnak="KANGJAM";
khuman[55].yumnak="KANJEM";
khuman[56].yumnak="KARAM";
khuman[57].yumnak="KOLOM";
khuman[58].yumnak="KHUDEIBAM";
khuman[59].yumnak="KHUNTHAIBAM";
khuman[60].yumnak="KHUYOKANTHEM";// [angom]
khuman[61].yumnak="KIRAM";//[angom] 
khuman[62].yumnak="KHOIRANGBAM";// [angom] 
khuman[63].yumnak="KHOIROM";// [mangang] [leisangthem] 
khuman[64].yumnak="KHONGBANTABAM";
khuman[65].yumnak="KHONGKHUMAKCHAM";
khuman[66].yumnak="KHOIRISUNGBAM";
khuman[67].yumnak="KHUBAM";
khuman[68].yumnak="KHULEM";
khuman[69].yumnak="KHUMANTHEM";
khuman[70].yumnak="KHUTHEIBAM";
khuman[71].yumnak="LAIKHRAM";
khuman[72].yumnak="LAIKHURAM";
khuman[73].yumnak="LAIPUKHRAM";
khuman[74].yumnak="LAISHRAM";
khuman[75].yumnak="LAKHOM";
khuman[76].yumnak="LAMABAM";
khuman[77].yumnak="LAMTOM";
khuman[78].yumnak="LAMBAM";
khuman[79].yumnak="LANGDEM";
khuman[80].yumnak="LANGHEIBAM";
khuman[81].yumnak="LANGGAM";
khuman[82].yumnak="LANGKHAM";
khuman[83].yumnak="LANGKHOMGBAM";
khuman[84].yumnak="LANGLENHANNABAM";
khuman[85].yumnak="LANPHAM";
khuman[86].yumnak="LEISANGTHEM";// [luwang] 
khuman[87].yumnak="LIKMAIJAM";
khuman[88].yumnak="LIMABAM";
khuman[89].yumnak="LOIJAYANGBAM";
khuman[90].yumnak="MAIBAM";
khuman[91].yumnak="MAIPHAAM";
khuman[92].yumnak="MAIPHAM";
khuman[93].yumnak="MAIKHURAM";
khuman[94].yumnak="MAIMAM";
khuman[95].yumnak="MAIMOM";
khuman[96].yumnak="MAINOM";
khuman[97].yumnak="MAIPHURAM";
khuman[98].yumnak="MAIRENGBAM";
khuman[99].yumnak="MEINAM";
khuman[100].yumnak="MEIPHARAM";
khuman[101].yumnak="MEIPHUBAM";
khuman[102].yumnak="MEITANGKEISANGBAM";
khuman[103].yumnak="MEPRAM";
khuman[104].yumnak="MOIJAM";
khuman[105].yumnak="MONGBIJAM";
khuman[106].yumnak="MONGJAM";
khuman[107].yumnak="MONGPHIJAM";
khuman[108].yumnak="MOIRENGBAM";
khuman[109].yumnak="MOIRENGJAM";
khuman[110].yumnak="MOIYANGLANGBAM";
khuman[111].yumnak="MUKHOM";// [angom] 
khuman[112].yumnak="NABAM";
khuman[113].yumnak="NAMRAM";
khuman[114].yumnak="NANBAM";// [luwang]
khuman[115].yumnak="NANSENBAM";
khuman[116].yumnak="NEPRAM";
khuman[117].yumnak="NGAIKHEBAM";
khuman[118].yumnak="NGANGBAM";
khuman[119].yumnak="NGASEPAM";// [angom] [moirang] 
khuman[120].yumnak="NGASEPAM";
khuman[121].yumnak="NINGTHOUKAPAM";
khuman[122].yumnak="OINAM"; //[angom] 
khuman[123].yumnak="PALLAMBAM";
khuman[124].yumnak="PALPUBAM";
khuman[125].yumnak="PANKHAIBAM";
khuman[126].yumnak="PANGKHOIJAM";
khuman[127].yumnak="PHANCHAM";
khuman[128].yumnak="PANGKHEIJAM";
khuman[129].yumnak="PANGKHAIJAM";
khuman[130].yumnak="PANUJAM";
khuman[131].yumnak="PHAIRENJAM";// [moirang] 
khuman[132].yumnak="PHAIRELPAM";
khuman[133].yumnak="PHARENBAM";// [mangang]
khuman[134].yumnak="PONGSANGBAM";// [angom]
khuman[135].yumnak="PUKHRAMBAM";// [moirang] 
khuman[136].yumnak="PUKREM";
khuman[137].yumnak="PUKHRANBAM";// [moirang]
khuman[138].yumnak="SAGAPPAM";
khuman[139].yumnak="SAKAPPAM"; 
khuman[140].yumnak="SAKOPAM";
khuman[141].yumnak="SAKPAM";// [luwang] 
khuman[142].yumnak="SAMOM";// [leisangthem]
khuman[143].yumnak="SAMUKCHAM";
khuman[144].yumnak="SANDHAM";//SHANDHAM//---------------------------------------
khuman[145].yumnak="SANDONGJAM";// [angom] 
khuman[146].yumnak="SANJENBAM";// [khabanganba] 
khuman[147].yumnak="SANKHAM";
khuman[148].yumnak="SANKHOM";
khuman[149].yumnak="SAPAM";// [mangang]
khuman[150].yumnak="SINAM";
khuman[151].yumnak="SOGAISAM";
khuman[152].yumnak="SORAM";// [mangang]
khuman[153].yumnak="SOURAM";
khuman[154].yumnak="TAIBAJAM";
khuman[155].yumnak="TAIPOJAM";
khuman[156].yumnak="TAOBAM";
khuman[157].yumnak="TAOJAM";
khuman[158].yumnak="TAOMOM";
khuman[159].yumnak="TAOPAM";
khuman[160].yumnak="TAOPOM";
khuman[161].yumnak="TAORAMBAM";
khuman[162].yumnak="TAOREM";
khuman[163].yumnak="TENBAM";
khuman[164].yumnak="TENKHAIBAM";
khuman[165].yumnak="TEREM";//[angom]
khuman[166].yumnak="THANGJAM";// [luwang] [ angom] [moirang] [leisangthem]
khuman[167].yumnak="THANGJAM";
khuman[168].yumnak="THAODEM";
khuman[169].yumnak="THONGTHAM";// [luwang]
khuman[170].yumnak="THUMGANBAM";// [angom]
khuman[171].yumnak="THANGATSABAHANGLEM";
khuman[172].yumnak="THIDUJAM";
khuman[173].yumnak="THIDOM";
khuman[174].yumnak="THINGBAIJAM";
khuman[175].yumnak="THINGUJAM";
khuman[176].yumnak="THOIDRINGBAM";
khuman[177].yumnak="THONGAM";
khuman[178].yumnak="THONGCHAM";
khuman[179].yumnak="THONGBAM";
khuman[180].yumnak="THONGANAM";
khuman[181].yumnak="THOUDAM";
khuman[182].yumnak="TILEM";// [ANGOM]
khuman[183].yumnak="TOKPAM";
khuman[184].yumnak="TONJAM";
khuman[185].yumnak="TONKHRAM";
khuman[186].yumnak="TONGKHRAM";
khuman[187].yumnak="TOUKHOM";
khuman[188].yumnak="WAKOM";
khuman[189].yumnak="WANGGOM";
khuman[190].yumnak="WANGKHEM";// [angom] 
khuman[191].yumnak="WANGYELLAMBAM";
khuman[192].yumnak="YAIKHIBAM";
khuman[193].yumnak="YAITHINGBAM";
khuman[194].yumnak="YAMBEM";
khuman[195].yumnak="YANGLEIBAM";
khuman[196].yumnak="YANGLEM";
khuman[197].yumnak="YANGUYEIBAM";
khuman[198].yumnak="YENTAKPAM";
khuman[199].yumnak="YENTHAKPAM";
khuman[200].yumnak="YUKADUM";
khuman[201].yumnak="YUMKHAM";
khuman[202].yumnak="YURENJAM";
khuman[203].yumnak="PUYAM";
//added
khuman[204].yumnak="SHANDHAM";

}

void kanglei::AngomPlugIn()
{
angom[0].yumnak="ACHOIBAM";
angom[1].yumnak="ACHUBAM";
angom[2].yumnak="AKOIJAM";
angom[3].yumnak="ANGOM";
angom[4].yumnak="ANGOMJAMBAM";
angom[5].yumnak="ANGONJAM";
angom[6].yumnak="AKANBAM";
angom[7].yumnak="APANGMAYUM";
angom[8].yumnak="AYENGBAM";
angom[9].yumnak="AYENBAM";
angom[10].yumnak="CHAKPRAM";
angom[11].yumnak="CHINGANGBAM";
angom[12].yumnak="CHINGSHUBAM";
angom[13].yumnak="HAHEIBAM";
angom[14].yumnak="HAIBAM";
angom[15].yumnak="HEIKRAMBAM";
angom[16].yumnak="HEIKRENBAM";
angom[17].yumnak="HEIWAM";
angom[18].yumnak="HEIRAM";//[leisangthem] 
angom[19].yumnak="HEROM";
angom[20].yumnak="HIDAM";
angom[21].yumnak="HIKHAMBAM";
angom[22].yumnak="HITAM";
angom[23].yumnak="HONGNEMSUMBAM";
angom[24].yumnak="IKHOISANGBAM";
angom[25].yumnak="IKUDAM";
angom[26].yumnak="KAIKOM";
angom[27].yumnak="KAIKOMBAM";
angom[28].yumnak="KAMBAM";
angom[29].yumnak="KANGTHEM";
angom[30].yumnak="KHANGENBAM";
angom[31].yumnak="KANGSHUBAM";
angom[32].yumnak="KASNAM"; 
angom[33].yumnak="KEIKOMBAM";
angom[34].yumnak="KHACHENBAM";
angom[35].yumnak="KHANACHAOBAM";
angom[36].yumnak="KHARIBAM";
angom[37].yumnak="KHEKRAM";
angom[38].yumnak="KHOIMOMTABAM";
angom[39].yumnak="KHOIPAM";
angom[40].yumnak="KHOIRANGBAM";// [moirang] 
angom[41].yumnak="KHUMGANBAM";
angom[42].yumnak="KHUMONGMAYUM";
angom[43].yumnak="KHUTYOKANTHEM";// [moirang] 
angom[44].yumnak="KHUTYONTHEM";
angom[45].yumnak="KHUYUMTHEM";// [moirang] 
angom[46].yumnak="KIRAM";// [khuman] [moirang]
angom[47].yumnak="KIYAM";
angom[48].yumnak="KONGBAM";
angom[49].yumnak="LAIRENLAKPAM";
angom[50].yumnak="LANGMAITHEM";
angom[51].yumnak="LEITANTHEM";
angom[52].yumnak="LONGJAM";
angom[53].yumnak="LONGMAITHEM";
angom[54].yumnak="LOURIYANBAM";
angom[55].yumnak="MAMBAM";
angom[56].yumnak="MANDINGBAM";
angom[57].yumnak="MANGSATABAM";
angom[58].yumnak="MANGSHIDAM";
angom[59].yumnak="MONGSHATABAM";
angom[60].yumnak="MOPHANGMAYUM";
angom[61].yumnak="MOIRANGLAISANGBAM";
angom[62].yumnak="MUKHOM";
angom[63].yumnak="MUNGKHOM";// [moirang]
angom[64].yumnak="MUTKHOM";
angom[65].yumnak="NAKPOKHANJABAM";
angom[66].yumnak="NAPAKHANBAM";
angom[67].yumnak="NARUNMBAM";
angom[68].yumnak="NGALENBAM";
angom[69].yumnak="NGANGLENGBAM";
angom[70].yumnak="NGAMUKCHAM";
angom[71].yumnak="NGARENGBAM";
angom[72].yumnak="NGAYENBAM";
angom[73].yumnak="NINGOMBAM";
angom[74].yumnak="NINGTHOUBAM";
angom[75].yumnak="NONGMAITHEM";
angom[76].yumnak="ONGNAM";
angom[77].yumnak="PHURITSABAM";
angom[78].yumnak="POSAMBAMPUTONJAM";
angom[79].yumnak="POTSANGBAM";// [khabanganba] [leisangthem]
angom[80].yumnak="PUNGTOJAM";
angom[81].yumnak="SAIREM";
angom[82].yumnak="SANGAM";
angom[83].yumnak="SANGAMBAM";
angom[84].yumnak="SANGOMBAM";
angom[85].yumnak="SANGDONJAM";
angom[86].yumnak="SANGDONJAM";// [moirang]
angom[87].yumnak="SAROM";
angom[88].yumnak="SAROMKEIKAPAM";
angom[89].yumnak="SENDANGMAYUM";
angom[90].yumnak="SENJAM";
angom[91].yumnak="SHAMBANDURAM";
angom[92].yumnak="SHANGSATAM";
angom[93].yumnak="TELEM";
angom[94].yumnak="THUMGANBAM";// [leisangthem]
angom[95].yumnak="USHAM";
angom[96].yumnak="WAHEIBAM";
angom[97].yumnak="WAKOM";
angom[98].yumnak="WANGKHEM";// [moirang] [khabanganba]
angom[99].yumnak="WANGOIBAM";
angom[100].yumnak="WATHEM";
angom[101].yumnak="YANGOIJAM";// [khabanganba] 
angom[102].yumnak="YUMKHAIBAM";
}

void kanglei::MoirangPlugIn()
{
moirang[0].yumnak="ACHOM";
moirang[1].yumnak="AHAIBAM";
moirang[2].yumnak="AKARAM";// [khuman] 
moirang[3].yumnak="AKHWAIBAM";
moirang[4].yumnak="AKHUIBAM";
moirang[5].yumnak="AIEKHOM";
moirang[6].yumnak="AKURAM";
moirang[7].yumnak="CHAKPAKIYAM";
moirang[8].yumnak="CHAKPATABAM";
moirang[9].yumnak="ELANGBAM";
moirang[10].yumnak="HITAM";
moirang[11].yumnak="IURENBAM";
moirang[12].yumnak="KABAJAM";
moirang[13].yumnak="KABORAMBAM";
moirang[14].yumnak="KHAITHENLAKPAM";
moirang[15].yumnak="KHOIBAM";
moirang[16].yumnak="KHOINAIJAM";
moirang[17].yumnak="KHOIPUDRABAM";
moirang[18].yumnak="KHONDRAM";
moirang[19].yumnak="KHUIRAKPAM";
moirang[20].yumnak="KOILENCHAM"; 
moirang[21].yumnak="KOIRENJAM";
moirang[22].yumnak="KOKHAM";
moirang[23].yumnak="KONGKHAM";
moirang[24].yumnak="KONGKHUBAM";
moirang[25].yumnak="KUBABAM";
moirang[26].yumnak="KUMAM";
moirang[27].yumnak="LAICHUJAM";
moirang[28].yumnak="LAIKHURUM";
moirang[29].yumnak="LAIMOM";
moirang[30].yumnak="LAIMUJAM";
moirang[31].yumnak="LAIPHRAKPAM";
moirang[32].yumnak="LAIPUJAM";
moirang[33].yumnak="LAIRELMAYUM";
moirang[34].yumnak="LAITHANGBAM";
moirang[35].yumnak="LAMBAJAM";
moirang[36].yumnak="LAMBUJAM";
moirang[37].yumnak="LAMPUJAM";
moirang[38].yumnak="LEILALAKPAM";
moirang[39].yumnak="LEIMACHAM";
moirang[40].yumnak="LEIMAKHUJAM";
moirang[41].yumnak="LEIMAJAM";
moirang[42].yumnak="LEYUJAM";
moirang[43].yumnak="LISAM";
moirang[44].yumnak="LUDONJAM";
moirang[45].yumnak="MAIPHURAM";
moirang[46].yumnak="MAIRENBAM";
moirang[47].yumnak="MANGKHOM";
moirang[48].yumnak="MELEM";
moirang[49].yumnak="MOIBAMPUKHRAMBAM";
moirang[50].yumnak="MOIRANGKEITHELLAKPAM";
moirang[51].yumnak="MOIRANGMAYUM";
moirang[52].yumnak="MOIRANGNONGTHONGBAM";
moirang[53].yumnak="MOIRANGTHONGBAM";
moirang[54].yumnak="MOIRANGTHEM";
moirang[55].yumnak="MOIRANGYANGMOM";
moirang[56].yumnak="MOIRANGYUMKHAIBAM";
moirang[57].yumnak="MONKUM";
moirang[58].yumnak="MUNGYANGJAM";
moirang[59].yumnak="MURANGBAM";
moirang[60].yumnak="NAMBUJAM";
moirang[61].yumnak="NAMUJAM";
moirang[62].yumnak="NAYENGBAM";
moirang[63].yumnak="NINGTHOUKHONGBAM";
moirang[64].yumnak="NINGTHOUKHONGJAM";
moirang[65].yumnak="NGANGCHENGBAM";
moirang[66].yumnak="NGANGCHONGBAM";
moirang[67].yumnak="NGANGKHAM";
moirang[68].yumnak="NGANGNOM";
moirang[69].yumnak="NGASAM";
moirang[70].yumnak="NGANGTHEM";
moirang[71].yumnak="NGANGNEMBAM";
moirang[72].yumnak="NUNGLEPAM";
moirang[73].yumnak="OKRAM";
moirang[74].yumnak="PHAIKHOM";
moirang[75].yumnak="POLEM";
moirang[76].yumnak="PUKHULPAM";
moirang[77].yumnak="PUKRAMBAM";
moirang[78].yumnak="SANKHOM";// [khuman]
moirang[79].yumnak="SENKHOM";
moirang[80].yumnak="SENSAM";
moirang[81].yumnak="SOIBAM";
moirang[82].yumnak="THANGAJAM";
moirang[83].yumnak="THANGJAMMANGKHOM";
moirang[84].yumnak="THOKCHOM";
moirang[85].yumnak="THONGAJAM";
moirang[86].yumnak="THONGJAM";
moirang[87].yumnak="TOUPOKCHAM";
moirang[88].yumnak="WAINABAM";
moirang[89].yumnak="WAIRAM";
moirang[90].yumnak="WAKALPAM";
moirang[91].yumnak="WAKAMBAM";
moirang[92].yumnak="WANGBIJAM";// [khabanganba]
moirang[93].yumnak="WANGLEMBAM";// [angom]
moirang[94].yumnak="WANGPIJAM";
moirang[95].yumnak="WAREMBA";
moirang[96].yumnak="WAREPPAM";// [mangang][khuman]
moirang[97].yumnak="WAYELBAM";
moirang[98].yumnak="YAIKHOM";;
moirang[99].yumnak="HAOJAM";//(Suggested by Viewer but not Confirmed yet)
}

void kanglei::KhaPlugIn()
{
kha[0].yumnak="AHEIBAM";
kha[1].yumnak="CHENGLEIJAM";
kha[2].yumnak="HAOBIJAM";
kha[3].yumnak="HEKNGAKPAM";// [luwang] [khuman]
kha[4].yumnak="HENTAKPAM";
kha[5].yumnak="IWANGBAM";
kha[6].yumnak="KHAIDEM";
kha[7].yumnak="KHATHANGBAM";
kha[8].yumnak="KHUDONGBAM";
kha[9].yumnak="KHUMJAM";
kha[10].yumnak="KHUMUKCHAM";
kha[11].yumnak="KHUNDONGBAM";
kha[12].yumnak="KHURAIJAM";// [leisangthem]
kha[13].yumnak="KHUWAIJAM";
kha[14].yumnak="KHUMUJAM";// [luwang][khuman]
kha[15].yumnak="KHURAIJAM";// [luwang]
kha[16].yumnak="KONCHOPAM";
kha[17].yumnak="KONHEIBAM";
kha[18].yumnak="KONJENGBAM";// [luwang][angom][moirang] [leisangthem] 
kha[19].yumnak="KONTHOUCHAM";// [luwang] 
kha[20].yumnak="KONTHOUJAM";// [leisangthem]
kha[21].yumnak="LANGOLJAM";// [leisangthem] 
kha[22].yumnak="LANGONJAM";// [luwang]
kha[23].yumnak="MAHOUBAM";
kha[24].yumnak="MANTANGBAM";
kha[25].yumnak="MELANGBAM";
kha[26].yumnak="MERIMAYUM";
kha[27].yumnak="NGAKPAM";
kha[28].yumnak="NONGCHENBAM";
kha[29].yumnak="PHIDAM";
kha[30].yumnak="SAMJETSABAM";
kha[31].yumnak="SANGAMBAM";
kha[32].yumnak="SANJIBAM";
kha[33].yumnak="SANJIRAM";
kha[34].yumnak="SOROKHAIBAM";
kha[35].yumnak="TEKCHAM";
kha[36].yumnak="THINBAM";
kha[37].yumnak="THINGBAM";
kha[38].yumnak="THONGAM";
kha[39].yumnak="THOURIKHUM";
kha[40].yumnak="WAKEMSANGBAM";
kha[41].yumnak="WANGBAJAM";
kha[42].yumnak="WANGKONCHAM";
kha[43].yumnak="YENGLANGBAM";// [luwang][angom][leisangthem]


}

void kanglei::SalangPlugIn()
{
salang[0].yumnak="AMOM";
salang[1].yumnak="AMOMAHEIBAM";
salang[2].yumnak="CHANAM";
salang[3].yumnak="CHINGAKHAM";
salang[4].yumnak="CHOLEIPAM";
salang[5].yumnak="GOUGANBAM";
salang[6].yumnak="HAIBAM";// [khuman]
salang[7].yumnak="HAIWAM";
salang[8].yumnak="HAOROKCHAM";
salang[9].yumnak="HEIBAM";
salang[10].yumnak="HEIMOIBAM";
salang[11].yumnak="HUIRAM";// [khuman]
salang[12].yumnak="HUIYAM";
salang[13].yumnak="INGKUTAM";
salang[14].yumnak="KEIDASOIBAM";
salang[15].yumnak="KHAGOKBAM";// [angom]
salang[16].yumnak="KHAGOKPAM";
salang[17].yumnak="KHOICHAM";
salang[18].yumnak="KHOIROM";// [khuman] 
salang[19].yumnak="KHOISNAM"; //[angom] 
salang[20].yumnak="KHUNDONGBAM";//3
salang[21].yumnak="KHUNTONGBAM";
salang[22].yumnak="KHURAIJAM";
salang[23].yumnak="KHURAIJAM";//[khabanganba] 
salang[24].yumnak="KHURAICHAM";
salang[25].yumnak="KHORIYEMBAM"; 
salang[26].yumnak="KONJENGBAM";
salang[27].yumnak="KONTHOUJAM";
salang[28].yumnak="LANGONJAM";// [khabanganba]
salang[29].yumnak="LEISANGTHEM";// [moirang]
salang[30].yumnak="LEITAM";
salang[31].yumnak="LOKTONGBAM";// [angom]
salang[32].yumnak="LOUSHIGAM";
salang[33].yumnak="MAIBATHIRAM";
salang[34].yumnak="MAIBRABAM";
salang[35].yumnak="MAIRAMBAM";
salang[36].yumnak="MAIREMBAM";
salang[37].yumnak="MEINAM";
salang[38].yumnak="MOINAM";
salang[39].yumnak="NGAKHEM";
salang[40].yumnak="NGAMUKCHAM";
salang[41].yumnak="NGATHEM";
salang[42].yumnak="NAOSEKPAM";// [angom] 
salang[43].yumnak="NAOSHRAM";
salang[44].yumnak="POTSANGBAM";
salang[45].yumnak="SAISEM";
salang[46].yumnak="SAMOM";
salang[47].yumnak="SAMNOIPAM";
salang[48].yumnak="SAROKHAIBAM";
salang[49].yumnak="SAROKKHAIBAM";// [angom]
salang[50].yumnak="SANGKHUBAM";
salang[51].yumnak="SARANGTHEM";// [angom]
salang[52].yumnak="SOMBEM";
salang[53].yumnak="SORAISAM"; //[angom] [khabanganba]
salang[54].yumnak="TENGKHAMPAM";
salang[55].yumnak="THANGJAM";
salang[56].yumnak="TONGBRAM";// [angom] 
salang[57].yumnak="TOUBANGBAM";
salang[58].yumnak="TOURANGBAM";// [angom]
salang[59].yumnak="WAIRAKPAM";// [angom]
salang[60].yumnak="WAIROKPAM";
salang[61].yumnak="YUMPUMBAM";
salang[62].yumnak="YUMSHUDUM";
salang[63].yumnak="YANGGOIJAM";// [moirang]

}

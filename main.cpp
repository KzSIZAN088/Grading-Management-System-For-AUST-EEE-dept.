#include<iostream>
#include<fstream>
using namespace std;
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20],arr6[20];  //5 arrays for 5 types of data

int total=0;   //counts numb of student
class course
{
 private:
   int year1,semester1;
  public:
  void cou(string title,string cno,int year,int semester){
cout<<endl;
year1=year;
semester1=semester;
cout<<"course title :"<<title<<endl;
cout<<"course no :"<<cno<<endl;

  }
}m1;
class result{
private:
float p,q,r,k,t,u,v,w,myid;
public:
void grade(float &marks)
{
if (marks>=80){cout<<"(A+)";marks=4.00;}
else if(marks>=75 && marks<=79) {cout<<"(A)";marks=3.75;}
else if(marks>=70 && marks<=74) {cout<<"(A-)";marks=3.5;}
else if(marks>=65 && marks<=69) {cout<<"(B+)";marks=3.25;}
else if(marks>=60 && marks<=64) {cout<<"(😎";marks=3.00;}
else if(marks>=55 && marks<=59) {cout<<"(🤓";marks=2.75;}
else if(marks>=50 && marks<=54) {cout<<"(C+)";marks=2.5;}
else if(marks>=45 && marks<=49) {cout<<"(C)";marks=2.25;}
else if(marks>=40 && marks<=44) {cout<<"(D)";marks=2.00;}
else if   (marks<40){ cout<<"(F)";marks=0.0;}
}
void calculateResult()
{
  int y,s,id;
  cout<<"Enter year of the Student :"<<endl;
  cin>>y;
  cout<<"Enter semester of the student :"<<endl;
  cin>>s;
  cout<<"Enter student ID :"<<endl;
  cin>>id;
float a,b,c,d,e,f,g,h;


//1

if (y == 1)
{
			if (s == 1) {

cout<<"Enter marks of ID :"<<id<<" for year "<<y<< "sem "<<s<<"[1-100] :"<<endl;
cout<<endl;
				 cout<< "Physic-PHY1105 :";cin>>a;
         grade(a);cout<<endl;
		     cout<< "Eectrical-circuitsI-EEE1101 :";cin>>b;
          grade(b);cout<<endl;
         cout<< "Eectrical-circuits LAB I - EEE1102 :";cin>>c;
          grade(c);cout<<endl;
         cout<< "Mathmatics I - MATH1101 :";cin>>d;
          grade(d);cout<<endl;
         cout<< "mechanical - ME1101 :";cin>>e;
          grade(e);cout<<endl;
         cout<< "mechanical lab - ME1102 :";cin>>f;
          grade(f);cout<<endl;
         cout<< "physics lab - PHY1106 :";cin>>g;
          grade(g);cout<<endl;
         cout<< "chemistry - CHEM1101 :";cin>>h;
          grade(h);cout<<endl;
			}
			else if(s==2) {

  cout<<"Enter marks of ID :"<<id<<" for year "<<y<< "sem "<<s<<endl;
  cout<<endl;
			cout<<"Electrical circuirts II - EEE1203 :";cin>>a;
         grade(a);cout<<endl;
       cout<< "Eectrical-circuits II lab - EEE1202 :";cin>>b;
        grade(b);cout<<endl;
       cout<< "simulation lab - EEE1210 :";cin>>c;
        grade(c);cout<<endl;
       cout<< "physics II - PHY1205 :";cin>>d;
        grade(d);cout<<endl;
       cout<< "Mathmatics II - Math203 :";cin>>e;
        grade(e);cout<<endl;
       cout<< "Mathmatics III - MATH1213 :";cin>>f;
        grade(f);cout<<endl;
       cout<< "Civil - CE 1213 :";cin>>g;
        grade(g);cout<<endl;
        cout<<"Civil  drawing lab - CE 1202 :";cin>>h;
         grade(h);cout<<endl;
			}
		}


//2

	else if(y == 2) {

	if (s == 1)
  {

cout<<"Enter marks of ID :"<<id<<" for year "<<y<< ",sem "<<s<<endl;
cout<<endl;

				cout<<"Electronics - EEE2103 :";cin>>a;
           grade(a);cout<<endl;
       cout<< "Mechine Theory - EEE2105 :";cin>>b;
        grade(b);cout<<endl;
       cout<< "Mechine Lab - EEE2106 :";cin>>c;
        grade(c);cout<<endl;
       cout<< "Programming language - EEE2109 :";cin>>d;
        grade(d);cout<<endl;
       cout<< "Mathmatics III - MATH2103 :";cin>>e;
        grade(e);cout<<endl;
       cout<< "Programming lab - EEE2110 :";cin>>f;
        grade(f);cout<<endl;
       cout<< " English lab - HUM2101 :";cin>>g;
        grade(g);cout<<endl;
       cout<<  "ELECTRONICS LAB - EEE2104 :";cin>>h;
        grade(h);cout<<endl;
			}
			else if(s==2) {

cout<<"Enter marks of ID :"<<id<<" for year "<<y<< "sem "<<s<<endl;
cout<<endl;

	cout<<"Electronics II - EEE2201 :";cin>>a;
     grade(a);cout<<endl;
  cout<<"Electronics II LAB - EEE2202 :";cin>>b;
   grade(b);cout<<endl;
	cout<<"ENERGY CONVERSION II - EEE2203 :";cin>>c;
   grade(c);cout<<endl;
	cout<<"ENERGY CONVERSION II LAB - EEE2204 :";cin>>d;
   grade(d);cout<<endl;
	cout<<"simulation - EEE2205 :";cin>>e;
   grade(e);cout<<endl;
	cout<<"measurement - EEE2206 :";cin>>f;
   grade(f);cout<<endl;
 cout<< "measurement lab - EEE2207 :";cin>>g;
  grade(g);cout<<endl;
 cout<< "Mathmatics V - MATH 2203 :";cin>>h;
  grade(h);cout<<endl;
			}
		}

//3

	else if(y == 3){

	if (s == 1) {

cout<<"Enter marks of ID :"<<id<<" for year "<<y<< "sem "<<s<<endl;
cout<<endl;
				cout<<"Digital Electronics-EEE3103 :";cin>>a;
           grade(a);cout<<endl;
       cout<< "Digital Electronics II- EEE3104 :";cin>>b;
        grade(b);cout<<endl;
       cout<< "Signal system - EEE3105 :" ;cin>>c;
        grade(c);cout<<endl;
        cout<<"Electromagnets - EEE3106 :";cin>>d;
         grade(d);cout<<endl;
       cout<< "Electrical propertyies- EEE3107 :";cin>>e;
        grade(e);cout<<endl;
        cout<<"service design - EEE3108 :" ;cin>>f;
         grade(f);cout<<endl;
       cout<< "numarical technique lab - EEE3109 :";cin>>g;
        grade(g);cout<<endl;
       cout<< "Industrial manage3201 - HUM3109 :";cin>>h;
        grade(h);cout<<endl;
			}
			else if(s==2) {
cout<<"Enter marks of ID :"<<id<<" for year "<<y<< "sem "<<s<<endl;
cout<<endl;
	cout<<"solid device - EEE3201 :";cin>>a;
     grade(a);cout<<endl;
  cout<<"power - EEE3202 :";cin>>b;
   grade(b);cout<<endl;
	cout<<"comunication theory - EEE3203 :";cin>>c;
   grade(c);cout<<endl;
	cout<<"comunication theory lab - EEE3204 :";cin>>d;
   grade(d);cout<<endl;
	cout<<"mictro processor - EEE3205 :";cin>>e;
   grade(e);cout<<endl;
	cout<<"signal lab - EEE3206 :";cin>>f;
   grade(f);cout<<endl;
 cout<< "signal processing - EEE3207 :";cin>>g;
  grade(g);cout<<endl;
 cout<< "micro processor2101 - EEE3208 :";cin>>h;
  grade(h);cout<<endl;
      }


//4


else if (y == 4) {
	   if (s == 1) {
cout<<"Enter marks of ID :"<<id<<" for year "<<y<< "sem "<<s<<endl;
cout<<endl;
				cout<<"Elective I - EEE4103 :";cin>>a;
           grade(a);cout<<endl;
        cout<<"Elective II - EEE4102 :";cin>>b;
         grade(b);cout<<endl;
        cout<<"Elective III - EEE4105 :";cin>>c;
         grade(c);cout<<endl;
        cout<<"Elective I-lab - EEE4106 :";cin>>d;
         grade(d);cout<<endl;
        cout<<"Elective II-lab - EEE4109 :";cin>>e;
         grade(e);cout<<endl;
        cout<<"Elective IV - EEE4104 :";cin>>f;
         grade(f);cout<<endl;
        cout<<"Control system 1 - EEE4119 :";cin>>g;
         grade(g);cout<<endl;
        cout<<"Control system 2 - EEE4119 :";cin>>h;
         grade(h);cout<<endl;
			}
			else if(s==2) {
cout<<"Enter marks of ID :"<<id<<" for year "<<y<< "sem "<<s<<endl;
cout<<endl;
	cout<<" Project and thesis - EEE4200 :";cin>>a;
     grade(a);cout<<endl;
  cout<<"Elective V - EEE4204 :";cin>>b;
   grade(b);cout<<endl;
	cout<<"Elective VI - EEE4239 :";cin>>c;
   grade(c);cout<<endl;
	cout<<"Elective VII - EEE4206 :";cin>>d;
   grade(d);cout<<endl;
	cout<<"Elective VIII - EEE4209 :";cin>>e;
   grade(e);cout<<endl;
  cout<<"Elective VI Lab - EEE4203 :";cin>>f;
   grade(f);cout<<endl;
  cout<<"Elective VII Lab - EEE4201 :";cin>>g;
   grade(g);cout<<endl;
 cout<<"Society & ethics - HUM4129 :";cin>>h;
  grade(h);cout<<endl;
			}

		}
  }
p=a;q=b;r=c;k=d;t=e;u=f;v=g;w=h;myid=id;
}

void viewResult(int st)
{
  if(st==myid){
  float result;
  int n;
  cout<<"Enter the number of courses :"<<endl;
  cin>>n;

result=(p+q+r+k+t+u+v+w)/n;
cout<<"GPA result of ID :"<<myid <<endl;
cout<<"<<<<<<"<<result;
  }

}





//class ends
}x1;

class studentInfo{

public:
void newData()

{

		int ch=0;

			cout<<"How many students do u want to enter??"<<endl;

			cin>>ch;

			if(total==0)

			{

			total=ch+total;    //(total/numb of student) value updated

			for(int i=0;i<ch;i++)

			{

				cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;

				cout<<"Enter name :";

				cin>>arr1[i];            //arr1 for name

				cout<<"Enter Student ID :";

				cin>>arr2[i];              //arr2 for id or roll

				cout<<"Enter Section :";

				cin>>arr3[i];

				cout<<"Year :";

				cin>>arr4[i];

				cout<<"Enter Semester :";

				cin>>arr5[i];

        cout<<"Enter department :";

				cin>>arr6[i];



			}

	    	}

	    	else               //when total is not equal zero

	    	{



	    		for(int i=total;i<ch+total;i++)      //here loop starts from previously given input number of students
                                               //sesh hobe ager student numb + ekhon input deya student sonkhar age

			{

				cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;

				cout<<"Enter name :";

				cin>>arr1[i];            //arr1 for name

				cout<<"Enter Student ID :";

				cin>>arr2[i];              //arr2 for id or roll

				cout<<"Enter Section :";

				cin>>arr3[i];

				cout<<"Year :";

				cin>>arr4[i];

				cout<<"Enter Semester :";

				cin>>arr5[i];

        cout<<"Enter department :";

				cin>>arr6[i];

			}

			total=ch+total;              //total value updated

			}



}

void viewData()

{

	if(total==0)              //jodi value enter() na kore tahole total zero hobe..show hobe na

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		for(int i=0;i<total;i++)        //total joto or user jotojon er value diyeche..oi numb bar loop ta cholbe..

	    		{

	    		cout<<"\nData of Student "<<i+1<<endl<<endl;

	    		cout<<"Name  :"<<arr1[i]<<endl;        //arr1[0]=1st student,arr[1]=2nd student

	    		cout<<"Student ID :"<<arr2[i]<<endl;

	    		cout<<"Section :"<<arr3[i]<<endl;

	    		cout<<"Year :"<<arr4[i]<<endl;

	    		cout<<"Semester :"<<arr5[i]<<endl;

          	cout<<"Department :"<<arr6[i]<<endl;

	    	    }

	    	}

}

void searchData()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

	string rollno;

				cout<<"Enter the ID no of student(No dots.)"<<endl;

				cin>>rollno;

				for(int i=0;i<total;i++)        //jotojon student er data diyeche..sobar ta i=0 theke i=total porjonto check korbe kar roll                                               soman  hoy user er input deya ei rollno
                                           //rolls assign korsi arr2 te

				{

					if(rollno==arr2[i])

					{

						cout<<"Name  :"<<arr1[i]<<endl;

	    		cout<<"Student ID :"<<arr2[i]<<endl;

	    		cout<<"Section :"<<arr3[i]<<endl;

	    		cout<<"Year :"<<arr4[i]<<endl;

	    		cout<<"Semester :"<<arr5[i]<<endl;

         cout<<"Department :"<<arr6[i]<<endl;


					}

				}

			}

}

void editData()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		string rollno;

				cout<<"Enter the ID no(NO DOTS) of student which you want to update"<<endl;

				cin>>rollno;

					for(int i=0;i<total;i++)  //total porjonto loop cholbe check hobe roll match kore kina

				{

					if(rollno==arr2[i])

					{

						cout<<"\nPrevious data"<<endl<<endl;

					cout<<"Name  :"<<arr1[i]<<endl;

	    		cout<<"Student ID :"<<arr2[i]<<endl;

	    		cout<<"Section :"<<arr3[i]<<endl;

	    		cout<<"Year :"<<arr4[i]<<endl;

	    		cout<<"Semester :"<<arr5[i]<<endl;

         cout<<"Department :"<<arr6[i]<<endl;




                  cout<<endl;
                  cout<<endl;

	    	        	cout<<"\nEnter new data   :"<<endl<<endl;

							     cout<<"Enter name :";

				            cin>>arr1[i];   //ager gulatei rewrite hocche ...

				            cout<<"Enter ID no  :";

				            cin>>arr2[i];

			             	cout<<"Enter Section  :";

				            cin>>arr3[i];

				            cout<<"Enter year  :";

				            cin>>arr4[i];

				            cout<<"Enter semester  :";

				            cin>>arr5[i];
                    cout<<"Enter  department  :";

				            cin>>arr6[i];

					}

				}

			}

		}



void deleteData()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		int a;

	        	cout<<"Press 1 to delete all record"<<endl;

				cout<<"Press 2 to delete specific record"<<endl;

				cin>>a;

				if(a==1)

				{

					total=0;    //numb student zero hoye jabe..

					cout<<"All record is deleted..!!"<<endl;

				}

				else if(a==2)

				{

				string rollno;

				cout<<"Enter the roll no of student which you wanted to delete"<<endl;

				cin>>rollno;

				for(int i=0;i<total;i++)

				{

					if(rollno==arr2[i])     //roll check korlo...suppose loop e i=3 er jonno roll no match holo--(arr[i]=arr[3])

					{

						for(int j=i;j<total;j++)         //ekhon i=3 tai j=3 theke loop suru hobe.. total er ag porjonto cholbe ebong porer
                                                     //value gulo k ek ghor agay dibe....arr1[4] er value arr1[3 te assign korchi]
                                                      //arr2[4] er value arr2[3] te assign hocche
						{

						arr1[j]=arr1[j+1];

						arr2[j]=arr2[j+1];

					    arr3[j]=arr3[j+1];

						arr4[j]=arr4[j+1];

						arr5[j]=arr5[j+1];

						arr6[j]=arr6[j+1];

				     	}

					total--;        //finally student sonkha orthat total ke ek komay dicchi

					cout<<"Your desired student record is deleted"<<endl;

					}

				}

				}





			else

			{

				cout<<"Invalid input";

			}

}

}


}x,y;

int main()

{



string ad,pas1,pas2;
  cout<<"Enter Username(Admin/Student) :"<<endl;
  cin>>ad;
  if (ad=="Admin")
  {
    cout<<"Enter User Password :"<<endl;
    cin>>pas1;
    while(pas1!="austeee")
    {
     cout<<"Error!..Wrong password.Try Again :"<<endl;
     cin>>pas1;
    }




int value;

	while(true)

	{

    cout<<endl;
    cout<<endl;
    cout<<endl;
  cout<<"(I)    Press 0 to   <<   view course information :"<<endl;
	cout<<"(II)   Press 1 to   <<   enter new data"<<endl;
	cout<<"(III)  Press 2 to   <<   view data"<<endl;
	cout<<"(IV)   Press 3 to   <<   search data"<<endl;
	cout<<"(V)    Press 4 to   <<   edit data"<<endl;
	cout<<"(VI)   Press 5 to   <<   delete data"<<endl;
  cout<<"(VII)  Press 6 to   <<   give marks"<<endl;
	cout<<"(VIII) Press 7 to   <<   exit(logout)"<<endl;


cout<<endl;
cout<<endl;
cout<<endl;
	cin>>value;
	switch(value)
	{
    case 0:
int year,semester;
cout<<"Enter year :"<<endl;
cin>>year;
cout<<"Enter semester :"<<endl;
cin>>semester;



if (year == 1) {


			if (semester == 1) {

cout<<"Information of 1 year 1 semester"<<endl;
cout<<endl;

				  m1.cou("Physics", "PHY1105", 1, 1);
		      m1.cou("Eectrical-circuitsI","EEE1101",1,1);
          m1.cou("Eectrical-circuits LAB I","EEE1102",1,1);
          m1.cou("Mathmatics I","MATH1101",1,1);
          m1.cou("mechanical","ME1101",1,1);
          m1.cou("mechanical lab","ME1102",1,1);
          m1.cou("physics lab","PHY1106",1,1);
          m1.cou("chemistry","CHEM1101",1,1);
          m1.cou("chemistry lab","CHEM1102",1,1);
			}
			else if(semester==2) {

cout<<"Information of 1 year 2 semester"<<endl;
cout<<endl;

				// add courses for year 1 semester 2

				m1.cou("Electrical circuirts II","EEE1203",1,2);
        m1.cou("Eectrical-circuits II lab","EEE1202",1,2);
        m1.cou("simulation lab","EEE1210",1,2);
        m1.cou("physics II","PHY1205",1,2);
        m1.cou("Mathmatics II","Math203",1,2);
        m1.cou("Mathmatics III","MATH1213",1,2);
        m1.cou("Civil","CE 1213",1,1);
        m1.cou("Civil  drawing lab","CE 1202",1,2);
			}
		}
/////////////year 2
		else if(year == 2) {
	if (semester == 1)
  {

cout<<"Information of 2 year 1 semester"<<endl;
cout<<endl;

				m1.cou("Electronics","EEE2103",2,1);
        m1.cou("Mechine Theory","EEE2105",2,1);
        m1.cou("Mechine Lab","EEE2106",2,1);
        m1.cou("Programming language","EEE2109",2,1);
        m1.cou("Mathmatics III","MATH2103",2,1);
        m1.cou("sociology and Emglish","HUM2109",2,1);
        m1.cou("Programming lab","EEE2110",2,1);
        m1.cou(" English lab","HUM2101",2,1);
         m1.cou("ELECTRONICS LAB","EEE2104",2,2);
			}
			else if(semester==2) {

cout<<"Information of 2 year 2 semester"<<endl;
cout<<endl;

				// add courses for year 1 semester 2
	m1.cou("Electronics II","EEE2201",2,2);
  m1.cou("Electronics II LAB","EEE2202",2,2);
	m1.cou("ENERGY CONVERSION II","EEE2203",2,2);
	m1.cou("ENERGY CONVERSION II LAB","EEE2204",2,2);
	m1.cou("simulation","EEE2205",2,2);
	m1.cou("measurement","EEE2206",2,2);
  m1.cou("measurement lab","EEE2207",2,2);
  m1.cou("Mathmatics V","MATH 2203",2,2);
 m1.cou("Acounting","HUM 2209",2,2);
			}
			// repeat
		}
/////////////year 3


	else if(year == 3){

	if (semester == 1) {

cout<<"Information of 3 year 1 semester"<<endl;
cout<<endl;


				m1.cou("Digital Electronics","EEE3103",3,1);
        m1.cou("Digital Electronics II","EEE3104",3,1);
        m1.cou("Signal system","EEE3105",3,1);
        m1.cou("Electromagnets","EEE3106",3,1);
        m1.cou("Electrical propertyies","EEE3107",3,1);
        m1.cou("service design","EEE3108",3,1);
        m1.cou("numarical technique lab","EEE3109",3,1);
        m1.cou("Industrial manage3201","HUM3109",3,1);
			}
			else if(semester==2) {

cout<<"Information of 3 year 2 semester"<<endl;
cout<<endl;

				// add courses for year 3 semester 2
	m1.cou("solid device ","EEE3201",3,2);
  m1.cou("power","EEE3202",3,2);
	m1.cou("comunication theory","EEE3203",3,2);
	m1.cou("comunication theory lab","EEE3204",3,2);
	m1.cou("mictro processor","EEE3205",3,2);
	m1.cou("signal lab","EEE3206",3,2);
  m1.cou("signal processing","EEE3207",3,2);
  m1.cou("micro processor2101","EEE3208",3,2);
			}
			// repeat
		}
///////////year 4
else if (year == 4) {

	   if (semester == 1) {
cout<<"Information of 4 year 1 semester"<<endl;
cout<<endl;

				m1.cou("Elective I","EEE4103",4,1);
        m1.cou("Power System 2","EEE4107",4,1);
        m1.cou("Control System 1","EEE4105",4,1);
        m1.cou("Fabrication of IC","EEE4103",4,1);
        m1.cou("Optics","EEE4109",4,1);
        m1.cou("Control system 1 lab","EEE4106",4,1);
        m1.cou("Power  System 2 Lab","EEE4108",4,1);

			}
			else if(semester==2) {

cout<<"Information of 4 year 2 semester"<<endl;
cout<<endl;

				// add courses for year 1 semester 2
	m1.cou(" Project and thesis","EEE4200",4,2);
  m1.cou("Mobile Cellullar and Communication","EEE4204",4,2);
	m1.cou("VLSI 2","EEE4239",4,2);
	m1.cou("Power System Protyection lab","EEE4206",4,2);
	m1.cou("Power System Protyection","EEE4205",4,2);
  m1.cou("Power Electronics Lab","EEE4228",4,2);
  m1.cou("Power Electronics","EEE4227",4,2);
 m1.cou("Society & ethics","HUM4129",4,2);
			}
		}
    break;
		case 1:
			x.newData();
			break;
		case 2:
			x.viewData();
			break;
		case 3:
			x.searchData();
			break;
		case 4:
			x.editData();
			break;
		case 5:
			x.deleteData();
			break;
    case 6:
      x1.calculateResult();
     break;
		case 7:
			exit(0);
			break;
		default:
			cout<<"Invalid input"<<endl;
			break;
	}
}
  }
  else if(ad=="Student")
  {
    cout<<"Enter Student password :"<<endl;
    cin>>pas2;
    while(pas2!="austian")
    {
      cout<<"Error!..Wrong password.Try Again :"<<endl;
      cin>>pas2;
    }
while(true)
{
 int value1;
cout<<"Enter your options :"<<endl;
cout<<"(I)    PRESS 0 TO EXIT"<<endl;
cout<<"(II)   PRESS 1 TO SEARCH_DATA"<<endl;
cout<<"(III)  PRESS 2 TO VIEW_RESULT"<<endl;

switch(value1)

{
case 0:
exit(0);
break;
case 1:
x.searchData();
break;
case 2:
int roll1;
cout<<"Enter your roll no :"<<endl;
cin>>roll1;
x1.viewResult(roll1);
break;
}
cin>>value1;
cout<<endl;
}
  }
  else
  {
    while(ad!="Admin"&&ad!="Student")
    {
    cout<<"Error!!..Wrong Username,tryagain"<<endl;
    cin>>ad;
}

  }

}

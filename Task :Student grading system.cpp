#include<iostream>
using namespace std;
class student
{
 public:
 	int marks;
 	string name;
 	char grade;
 	
 	
	
};
int main()
{
 int n;
 cout<<"How many students entry you want to enter?"<<endl;
 cin>>n;
 string name;
 int marks;
 student obj[n];
 for(int i=0;i<n;i++)
 {

 	cout<<"Enter name of student: ";
 	cin>>obj[i].name;
 	cout<<"enter marks: ";
 	cin>>obj[i].marks;
 	if(obj[i].marks>90 && obj[i].marks<=100)
 	{
 		obj[i].grade = 'A';
	 }
	 	if(obj[i].marks>70 && obj[i].marks<=90)
 	{
 		obj[i].grade = 'B';
	 }
	 	if(obj[i].marks>50 && obj[i].marks<=70)
 	{
 		obj[i].grade = 'C';
	 }
	 	if(obj[i].marks>30 && obj[i].marks<=50)
 	{
 		obj[i].grade = 'D';
	 }
	 	if(obj[i].marks>20 && obj[i].marks<=30)
 	{
 		obj[i].grade = 'E';
	 }
	 	if(obj[i].marks>=0 && obj[i].marks<=20)
 	{
 		obj[i].grade = 'F';
	 }
	 
	 }
	 int temp;
	 string temp1;
	 char temp2;
	 for(int i=0;i<n-1;i++)
	 {
	     for(int j=0;j<n-i-1;j++)
	     {
	         if(obj[j].marks<obj[j+1].marks){
	             temp = obj[j].marks;
	             temp1 = obj[j].name;
	             temp2 = obj[j].grade;
	             obj[j].marks = obj[j+1].marks;
	              obj[j].name  =  obj[j+1].name;
	               obj[j].grade =  obj[j+1].grade;  
	             obj[j+1].marks=temp;
	             obj[j+1].name = temp1;
	             obj[j+1].grade = temp2;
	             
	         }
	     }
	 }
	 
	 	
	 for(int i=0;i<n;i++)
	 {
	 	cout<<"NAME: "<<obj[i].name;
	 		 	cout<<"    GRADE: "<<obj[i].grade<<endl;

	 }
  	
}

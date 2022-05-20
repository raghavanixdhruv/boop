#include<iostream.h>
#include<conio.h>
class employee
{
public:
int Emp_id;
char Emp_name[20];
char Emp_dept[20];

void getdata()
{
cout<<"enter id of employee:";
cin>>Emp_id;
cout<<"enter name of employee:";
cin>>Emp_name;
cout<<"enter department of employee:";
cin>>Emp_dept;
}
void displaydata()
{
 cout<<"employee id is:"<<Emp_id<<endl;
 cout<<"employee name is:"<<Emp_name<<endl;
 cout<<"employee department:"<<Emp_dept<<endl;
 }
 };
 int main()
 {
 employee t[100];
 int n;
 int i;
 clrscr();
 cout<<"enter number of employee detiles:";
 cin>>n;

 for(i=0;i<n;i++)
 {
 t[i].getdata();
 }
 for(i=0;i<n;i++)
 {

 t[i].displaydata();
 }
  return 0;
  }
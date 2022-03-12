#include <iostream>
#include <cmath>
using namespace std;


//______________________________________funcation1________________________________________
//****************************************************************************************
void addation(int A1[],int x ,int A2[])
{ 
int i, A3[10];
for(i=0 ; i<10; i++)
	A3[i]=A1[i]+A2[i];
for(i=0; i<10; i++)
cout<<A3[i]<<" ";
	
}
//______________________________________funcation2________________________________________
//****************************************************************************************
float avrage(int A1[],int x)
{   int i;
	float sum=0 , avg=0;
	for(i=0;i<10;i++)
	sum+=A1[i];
	avg=sum/10;
	return avg;
}
//______________________________________funcation3________________________________________
//****************************************************************************************
float min(int A2[], int x)

{int i;
   float min=A2[0];
  for(i=1;1<10;i++)
	{
	if(A2[i]<min)
	min=A2[i];}
	return min;		
}
//______________________________________funcation4________________________________________
//****************************************************************************************

void square(int A1[], int x)
{int A3[10]; int i;
	for(i=0;i<10;i++)
	A3[i]=pow(A1[i],2);
	for(i=0;i<10;i++)
	cout<<A3[i]<<" ";
}
//______________________________________funcation5________________________________________
//****************************************************************************************

void order(int A2[], int x)
{
int i,j, temp;

	for(i=0;i<10;i++)
	for(j=1;j<10;j++)
	if(A2[j]>A2[i])
	{temp=A2[j];
	A2[j]=A2[i];
	A2[i]=temp;}
	
	for(i=0;i<10;i++)
	cout<<A2[i]<<" "<<"\n";
}
//______________________________________funcation6________________________________________
//****************************************************************************************

void multiply(int B1[3][3] , int B2[3][3])
{
float x;
	for(int i=0;i<3;i++)
	{cout<<"\n";
	for(int j=0;j<3;j++)
	{x=0;
	for(int k=0;k<3;k++)
	x=x+B1[i][k]*B2[k][j];
	cout<<x<<" ";  }}}
//______________________________________funcation7________________________________________
//****************************************************************************************
float sume(int B1[3][3])
{
	float sum=0;
	int i ,j;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{ if(B1[i][j]%2==0)
	sum+=B1[i][j]; }
	
	return sum;}
	
//______________________________________funcation8________________________________________
//****************************************************************************************
	
float countoodd(int B2[3][3])
{
	float f=0;
	int i,j;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	 if(B2[i][j]%2!=0)
	   f++; 
	return f;}
//______________________________________funcation9________________________________________
//****************************************************************************************
int fact(int y)
{ int fc=1;
  for (int i=1; i<=y; i++)
   fc*=i;
  cout<<"\n the fact of number in B1 array is \n";
  return fc;}
	
//__________________________show____________________________
void show ()
{cout<<"the number that U searched about it is not found ";}
//_________________________search____________________________
int search (int B1[3][3], int y)

{    int f=0,fact1;
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      if(B1[i][j]==y)
             f++;
          if (f>0)
       return(fact(y));
          else
	 {    show();
		 return 0 ; }  }
//______________________________display_______________________
//********************** content function 9**********************************

void display(int B2[3][3],int B4[3][3])
{ cout<<"\n The Original matrix \n";
    for(int i=0;i<3;i++)
    { for(int j=0;j<3;j++)
      cout<<B2[i][j]<<"  ";
      cout<<endl; }
    cout<<"\n&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
    cout<<"      The New matrix is ";
    cout<<"\n&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
    for(int i=0;i<3;i++)
    { for(int j=0;j<3;j++)
      cout<<B4[i][j]<<"  ";
      cout<<endl; }   }
	
//______________________________________funcation10________________________________________
//****************************************************************************************
void squareinvers(int B2[3][3])	
{ int i,j;
int B4[3][3];
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{  
   if(i+j==2)	
   B4[i][j]=pow(B2[i][j],2);
  else
   B4[i][j]=B2[i][j];}
   display (B2,B4);}
//______________________________________funcation11________________________________________
//****************************************************************************************  
float avgB1 (int B1[3][3])
{ float avg,sum;
	avg=sum=0;
	int i,j,m;
	for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    if(i<j)
{sum+=B1[i][j]; 
       m++;
   	  avg=sum/m;
	return avg;}}
//______________________________________funcation12________________________________________
//****************************************************************************************
void swapofinverse(int B2[3][3])
{ int i,j;
  int y,temp,m=2;    int B5[3][3];
  	for (i=0;i<3;i++)
	for (j=0;j<3;j++)
	  B5[i][j]=B2[i][j];
for (i=0;i<3;i++)
	 {  y=3;
	  for(j=0;j<3;j++)
	   { y--;
	     if(i+j<2)
	        {temp=B5[y][m];
	        B5[y][m]=B5[i][j];
	        B5[i][j]=temp;}
	   }  m--; }
  display(B2,B5); }
  
//______________________________________funcation13________________________________________
//****************************************************************************************
  
 void mdigonal(int B1[3][3])
{
	int i,j;
	cout<<"\n the main diagonal \n";
	cout<<"\n";
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
    if (i==j)
    cout<<B1[i][j]<<" ";
    cout<<"\n************\n";	} 
  
//______________________________________funcation14________________________________________
//****************************************************************************************
  
  
void utmdiagonal(int B1[3][3])
	{
	int i,j;
	cin>>B1[i][j];
     cout<<"\nthe uper triangle of main diagonal\n";
     for(i=0;i<3;i++)
	for(j=0;j<3;j++)
    if(i<j)
    cout<<B1[i][j]<<" ";
    cout<<"\n************";
    }
//______________________________________funcation15________________________________________
//****************************************************************************************
   
  void ltmdiagonal(int B1[3][3])
	{
		 
	int i,j;
    cout<<"\n the lower triangle of main diagonal \n";
     for(i=0;i<3;i++)
	for(j=0;j<3;j++)
    if(i>j)
    cout<<B1[i][j]<<" ";
    cout<<"\n************\n";
	}
//______________________________________funcation16________________________________________
//****************************************************************************************
  void invdiagonal(int B2[3][3])
	{
		 
	int i,j;
    cout<<"the invers diagonal\n";
    for(i=0;i<3;i++)
	for(j=0;j<3;j++)
    if(i+j==2)
    cout<<B2[i][j]<<" ";
    cout<<"\n************\n";
	}
//______________________________________funcation17________________________________________
//****************************************************************************************
    
  void utinvdiagonal(int B2[3][3])
	{
		 
	int i,j;
    cout<<"the uper triangle of invers diagonal\n";
    for(i=0;i<3;i++)
	for(j=0;j<3;j++)
    if(i+j<2)
    cout<<B2[i][j]<<" ";
    cout<<"\n************\n";
    }
  
//______________________________________funcation18________________________________________
//****************************************************************************************
     
void ltinvdiagonal(int B2[3][3])
    {
    	 
	int i,j;
    cout<<"the lower triangle of invers diagonal\n";
    for(i=0;i<3;i++)
	for(j=0;j<3;j++)
    if(i+j>2)
    cout<<B2[i][j]<<" ";
    cout<<"\n************";
    }  
  
  
  
//__________________________________________________the end____________________________________
//*********************************************************************************************  
  
  int main()
  	
 {int A1[10],A2[10],B1[3][3],B2[3][3];
    int i,j,y,m,choice,choice1;
  	
  cout<<"\t\t********************************************************************\n"
      <<"\t\t*******************************************************************\n"
	  <<"\t\t              *welcom to to the matrixes cuntry*                   \n"
	  <<"\t\t                ________________________________                   \n"
	  <<"\t\t                       Hi:my name is Ezaden                        \n"
	  <<"\t\t          I am studing IT engineering  at Taiz University          \n"
	  <<"\t\t                        phon:773700948.                            \n"
	  <<"\t\t                   Email:open_angls@gmail.com                      \n"
	  <<"\t\t                 Address:Taiz golver street.                       \n"
	  <<"\t\t___________________________________________________________________\n"
	  <<"\t\t*******************************************************************\n"
	  <<"\t\t*******************************************************************\n"
	  <<"\t\t-------------------------- MENUE   CHOISE---------------------------\n"
     <<"\t\t**                                                                **\n"
     <<"\t\t**       press -0-  To Exit from program                          **\n"
     <<"\t\t**       press -1-  To add two arrays                             **\n"
     <<"\t\t**       press -2-  To Calculate average of array                 **\n"
     <<"\t\t**       press -3-  To Calculate the minimuim number              **\n"
     <<"\t\t**       press -4-  To Print the square array                     **\n"
     <<"\t\t**       press -5-  To reorder the array                          **\n"
     <<"\t\t**       press -6-  To Multiply two arrays                        **\n"
     <<"\t\t**       press -7-  To Calculate the sum of even numbers          **\n"
     <<"\t\t**       press -8-  To Count the odd numbers                      **\n"
     <<"\t\t**       press -9-  To Search number in matrix and get factorial  **\n"
     <<"\t\t**       press -10- To Swap inverse diagonal with square numbers  **\n"
     <<"\t\t**       press -11- To Calculate average of upper main diagonal   **\n"
     <<"\t\t**       press -12- To swap of upper inverse triangle with lowet  **\n"
     <<"\t\t**       press:13 to get the main diagonal B1.                    **\n"
	 <<"\t\t**       press:14 to get the uper triangle of main diagonal B1.   **\n" 
	 <<"\t\t**       press:15 to get the lower triangle of main diagonal B1.  **\n"
     <<"\t\t**       press:16 to get the invers diagonal B2.                  **\n"      
     <<"\t\t**       press:17 to get the uper triangle of invers diagonal B2. **\n"
     <<"\t\t**       press:18 to get the lower triangle of invers diagonal B2.**\n"
     <<"\t\t**                                                                **\n"
     <<"\t\t**------------------------End of Program--------------------------**\n"
     <<"\t\t____________________________________________________________________\n";

//  input  the data  to arrays  
cout<<" plz enter first one-dimensional A1 array\n";
for(i=0;i<10;i++)
 cin>>A1[i];
cout<<" \nplz enter Second one-dimensional  A2 rray\n";
for(i=0;i<10;i++)
 cin>>A2[i]; 
cout<<" plz enter threed 2-dimensional B1 array\n";
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
 cin>>B1[i][j];
 cout<<endl; } 
cout<<" plz enter fourth 2-dimensional B2 array\n";
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
 cin>>B2[i][j]; 
 cout<<endl; }   

  	
while(1)
{cout<<"\n plz enter the number of choice \n";
cin>>choice;
switch (choice)
{case 0: exit(0);
 case 1: cout<<"\n The sum ot two 1-dimensional arrays\n";                       addation(A1,10,A2);    break;  
 case 2: cout<<"\n The average of first 1-dimensional array\n";                  cout<<avrage(A1,10); break;
 case 3: cout<<"\n The minimuim number of second 1-dimensional array\n";         cout<<min(A2,10); break;
 case 4: cout<<"\n The square of first 1-dimensional array\n";                   square(A1,10);    break;
 case 5: cout<<"\n The upper reorder of second 1-dimensional arrays\n";          order(A2,10);   break;
 case 6: cout<<"\n The Mult two 2-dimensional arrays   \n";                      multiply(B1,B2);     break;
 case 7: cout<<"\n The sum of even numbers of second 2-dimensional array\n";     cout<<sume(B1);   break;
 case 8: cout<<"\n The Count of odd numbers in second 2-dimensional array\n";    cout<<countoodd(B2);    break;
 case 9: cout<<"\n plz enter the number to search in matrix \n";   cin>>y;       m=search(B1,y);  
                 if(m>0)
				 cout<<m;  break; 
 case 10:cout<<"\n The swap of invers with square of 2-dimensional array\n";     squareinvers(B2);   break;
 case 11:cout<<"\n The average upper main diagonal of 2-dimensional array\n";    cout<<avgB1 (B1);    break;
 case 12:cout<<"\n The swap of upper invers with lower of 2-dimensional array\n";swapofinverse(B2);     break; 
 case 13:cout<<"\n the main diagonal of 2-dimensional array \n";  mdigonal(B1); break; 
 case 14:cout<<"\n the upper triangle of  main diagonal of 2-dimensional array \n";  utmdiagonal(B1); break; 
 case 15:cout<<"\n the lowe triangle of main diagonal of 2-dimensional array \n";  ltmdiagonal(B1); break;
 case 16:cout<<"\n the inverse diagonal of 2-dimensional array \n"; invdiagonal(B2) ; break;
 case 17:cout<<"\n the upper  triangle of inverse diagonal of 2-dimensional array \n";  utinvdiagonal(B2); break;
 case 18:cout<<"\n the lowe triangle of inverse diagonal of 2-dimensional array \n";  ltinvdiagonal(B2); break;}  }      
 
 return 0;  	
  }




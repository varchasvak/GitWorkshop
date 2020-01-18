#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}
int fact_it(int n)
{
	if(n==1)
		return 1;
	else
	{
	int factorial=1;
	for(int i=1;i<=n;i++)
		factorial*=i;
	return factorial;
	}

}
int pow(int a,int b)
{
	if(b==0)
	return 1;
	else
	{
		return(a*pow(a,b-1));
	}
}
int pow_it(int a,int b)
{  int product=1;
    for(int i=0;i<b;i++)
    {
        product*=a;
    }
    return product;
}
int Fib(int n)
{	if(n==0)
	    return 0;	
	else if(n==1)
	    return 1;
	else
	    return Fib(n-1)+Fib(n-2);
}
void Fib_it(int n)
{
    int a=0,b=1,sum=0;
    cout<<"The number of terms are: \n";
    for(int count=0;count<n;count++)
    {
        cout<<a<<endl;
        sum=a+b;
        a=b;b=sum;
    }
}
int HCF(int a,int b)
{
    if(b==0)
    return a;
    else
    return HCF(b,a%b);
}
int HCF_it(int a,int b)
{   int x;
    while( b!=0)
    {
       x=b;
       b=a%b;
       a=x;
    }
    return a;
}
int main()
{ int choice,choice2;char control;
    do
    {
        cout<<"Enter your choice: \n1. Factorial \n2. Power \n3. Fibonacci \n4.HCF \n";
        cin>>choice;
        cout<<"Enter your choice: \n1.Recursive \\nIterative \n";
        cin>>choice2;
        switch(choice)
        {    
            case 1:int number;
                    cout<<"Enter the number: ";
                    cin>>number;
                switch(choice2)
            {    
                case 1:cout<<"The answer is: "<<fact(number);    
                    break;
                case 2:cout<<"The answer is: "<<fact_it(number);
                    break;
            }break;
            case 2: int num,power;
                cout<<"Enter the number and its power: ";
                cin>>num>>power;
                switch(choice2)
            { 
                case 1:cout<<"The answer is: "<<pow(num,power);
                        break;
                case 2:cout<<"The answer is "<<pow_it(num,power);
                        break;
            }break;
            case 3: int term;
                    cout<<"Enter the number of terms you want to print: ";
                    cin>>term;
                    switch(choice2)
            {
                case 1:	cout<<"The terms are: \n";
                        for(int i=0;i<term;i++)
	                    cout<<Fib(i)<<endl;
                        break;
                case 2:Fib_it(term);        
                       break;
            }break;
            case 4: int num1,num2;
                    cout<<"Enter the two numbers: ";
                    cin>>num1>>num2;
                    switch(choice2)
                {
                     case 1:cout<<"The HCF is: "<<HCF(num1,num2);
                            break;
                     case 2:cout<<"The HCF is: "<<HCF(num1,num2);
                            break;       
                }  break;            
        }
        cout<<"\n To exit, press 0, else press any character.";
        cin>>control;
    }while(control!='0');
    return 0;
}

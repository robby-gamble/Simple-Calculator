#include <iostream>
#include <stdlib.h>
using namespace std;

 
int main ()
{
	  
	double var1, var2,remainder;
	  
	//This is the point that the goto fuction is going to reference.
	beginning:
	//This part of our code recieves the two numbers we plan to manipulate.
	cout << "Enter first number" << endl;
	  
	cin >> var1;
	 
	cout << "Enter second number" << endl;
	  
	cin >> var2;
	  
	// This part of the code asks the user which operation they'd like to apply to their variables.
	cout << "What would you like to do with these numbers?" << endl;
	  
	cout << " - '+' add" << endl;
	  
	cout << " - '-' subtract" << endl;
	  
	cout << " - '*' multiply" << endl;
	  
	cout << " - '/' divide" << endl;

	cout << " - '%' remainder" <<endl;
	  
	//This portion of my code takes the users input, and decides what operation to perform.
	char operation;
	  
	cin >> operation;
	  
	switch (operation)
	{
	    
	case '+':
	      
		cout << var1 << "+" << var2 << "=" << (var1 + var2) << endl;
	      
	break;
    
	case '-':
	      
		cout << var1 << "-" << var2 << "=" << var1 - var2 << endl;
	      
	break;
	    
	case '*':
	      
		cout << var1 << "*" << var2 << "=" << var1 * var2 << endl;
	      
	break;
	     
	case '/':
	      
		if (var2 != 0)
		{
			  
			cout << var1 << "/" << var2 << "=" << var1 / var2 << endl;
		}
		      
		else		
		{

		  	cout << "Now you know, like I know, you cannot divide by 0.";
			
		}
		      
	break;

	case '%': 

		//finding remainder without using the modulus % operator
		//works even for double values

		//for negative values
		if (var1 < 0)
		{
			var1=-var1;
		}

		if (var2 < 0)
		{
			var2=-var2;
		}

		remainder=var1;

		//finding mod by repeated subtraction
		while(remainder>=var2)
		{
			remainder=remainder-var2;
		}

		cout << var1 << "%" << var2 << "=" << remainder << endl;

	break; 

	default:
	      
		cout << "You typed an incorrect character." << endl;
	    	  
	break;
	    
	}
	  
	//This portion gives the user an option to restart the program or to end it. 
	char decision;
	  
	cout << "would you like to continue the program? (Y/N)?" << endl;
	  
	cin >> decision;
	  
	 
	if (decision == 'Y' || decision == 'y')
	{
	      
		//allows us to jump to a part of our code and execute again.
		goto beginning;
	    
	}
	  
	else
	    
	{
	      
		cout << "Goodbye" << endl;
	    
	}
	  
	return 0;

}



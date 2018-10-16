/*************************************
The flip function for the space class.
*************************************/
#include "space.h"

void Space::flip()
{
if (isEmpty())
        return;
else
	{
	white = !white;
	black = !black;
	}
}




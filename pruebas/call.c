#include <stdio.h>

int	argument(int i)
{
	int	save;
	
	
	if (i == 1)
		save = i;
	else if (i == 2)
		save = i;
	else
		return(save);
	return (save);
}


int main(void)
{
	
	printf("%d\n", argument(1));
	argument(2);
	printf("%d\n", argument(3));
	
}

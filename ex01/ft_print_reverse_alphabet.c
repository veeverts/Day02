#include <unistd.h>

int	main()
{
	write(1, "zyxwvutsrqponmlkjihgfedcba\0", 26);
	return(0);
}

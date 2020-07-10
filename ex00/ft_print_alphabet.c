#include <unistd.h>

int	main()
{
	write(1, "abcdefghijklmnopqrstuvwxyz\0", 26);
	return(0);
}

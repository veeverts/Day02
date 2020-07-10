#include <unistd.h>

int	main()
{
	write(1, "0123456789\0", 10);
	return(0);
}

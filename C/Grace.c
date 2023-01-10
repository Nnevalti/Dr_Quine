/*
	Comment
*/

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define GRACE(fd, str) dprintf(fd, str, str, 10, 9, 34)
#define FT(x) int main(void){ int fd = open("Grace_Kid.c", O_WRONLY | O_CREAT, 0644); if (fd < 0) return (1); GRACE(fd, x); close(fd); return (0);}
#define S "/*%2$c%3$cComment%2$c*/%2$c%2$c#include <stdio.h>%2$c#include <unistd.h>%2$c#include <fcntl.h>%2$c%2$c#define GRACE(fd, str) dprintf(fd, str, str, 10, 9, 34)%2$c#define FT(x) int main(void){ int fd = open(%4$cGrace_Kid.c%4$c, O_WRONLY | O_CREAT, 0644); if (fd < 0) return (1); GRACE(fd, x); close(fd); return (0);}%2$c#define S %4$c%1$s%4$c%2$c%2$cFT(S)%2$c"

FT(S)

#include <unistd.h>
#include <stdio.h>
#include <signal.h>
void sig_handler(void)
{
	printf("i take signal!!\n");
}
int main ()
{
	sig_handler;
}

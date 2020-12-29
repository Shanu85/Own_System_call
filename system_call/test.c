#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>
int main(int argc, char const *argv[])
{
	printf("%s","Please enter pid : ");
	int pid; 
	char address[256];
	scanf("%d",&pid);
	printf("%s","Please enter address of file : " );
	scanf("%s",address);
    long int amma = syscall(440,pid,address);
    printf("System call sys_hello returned %ld\n", amma);
    return 0;
	
}
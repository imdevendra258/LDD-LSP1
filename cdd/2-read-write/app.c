#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


main()
{

	int fd,ret=0,var=0,count=3;
	char temp[50]= "123", buff[10];

	fd = open("/dev/memory",O_RDWR);
	if (fd < 0)
	perror("open FAILS\n");

	while(1)
	{		
		//ret = ret + 1;
		ret = write(fd,temp[var],count-var);
		if (ret == 0)
			break;
		var = var+ret;
		printf("write return value:%d\n",ret);
		if (var == 3) 
			break;
	}
	ret = read(fd,buff,100);
	printf("read return value:%d buff[0]:%s \n",ret,buff);

	close(fd);
}

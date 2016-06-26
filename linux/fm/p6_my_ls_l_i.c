#include"header.h"
int main(int argc,char **argv)
{
	if(argc>3)
	{
		printf("ussage:./my_ls option path\n");
		printf("option are not compulsorry.....\n");
		return;
	}
struct dirent *p;
DIR *dp;
struct stat v;

	if(argc==1)
	{
	dp=opendir(".");
		if(dp==0)
		{
			perror("opendir");
			return;
		}
	while(p=readdir(dp))
		if(p->d_name[0]!='.')
			printf("%s\n",p->d_name);
	}

else 
	if(argc==2)
	{
		if(argv[1][0]!='-')
		{
		dp=opendir(argv[1]);
		if(dp==0)
		{
			perror("opendir");
			return;
		}
		while(p=readdir(dp))
		if(p->d_name[0]!='.')
			printf("%s\n",p->d_name);
		}	
	else
	 if(argv[1][0]=='-'&&argv[1][1]=='l')
	{
	dp=opendir(".");
		if(dp==0)
		{
			perror("opendir");
			return;
		}
		while(p=readdir(dp))
		{
			if(p->d_name[0]!='.')
			{
			stat(p->d_name,&v);
			if(S_ISREG(v.st_mode))
				printf("-");
			else if(S_ISDIR(v.st_mode))
				printf("d");
			else if(S_ISBLK(v.st_mode))
				printf("b");
			else if(S_ISLNK(v.st_mode))
				printf("l");
			else if(S_ISCHR(v.st_mode))
				printf("c");
			else if(S_ISFIFO(v.st_mode))
				printf("p");
			else if(S_ISSOCK(v.st_mode))
				printf("s");

			printf(" %o ",v.st_mode & 0777);
			printf("%u ",v.st_nlink);
			printf("%8u ",v.st_size);
			printf("%20s \n",p->d_name);
			}
		}
}
else if(argv[1][0]=='-'&&argv[1][1]=='i')
{
dp=opendir(".");
	if(dp==0)
	{
		perror("opendir");
		return;
	}

while(p=readdir(dp))
	if(p->d_name[0]!='.')
	{
		stat(p->d_name,&v);
		printf("inod=%u filename=%s\n",v.st_ino,p->d_name);
	}
}

}
//..........................................................................................................//
else if(argc==3)
{
if(argv[1][0]!='-'&&argv[2][0]!='-')
{
dp=opendir(argv[1]);
	if(dp==0)
	{
		perror("opendir");
		return;
	}
while(p=readdir(dp))
	if(p->d_name[0]!='.')
		printf("%s\n",p->d_name);

}
else if(argv[1][0]=='-'&&argv[1][1]=='l')
{
dp=opendir(argv[2]);
	if(dp==0)
	{
		perror("opendir");
		return;
	}
while(p=readdir(dp))
{
	if(p->d_name[0]!='.')
	{
		stat(p->d_name,&v);
if(S_ISREG(v.st_mode))
	printf("-");
else if(S_ISDIR(v.st_mode))
	printf("d");
else if(S_ISBLK(v.st_mode))
	printf("b");
else if(S_ISLNK(v.st_mode))
	printf("l");
else if(S_ISCHR(v.st_mode))
	printf("c");
else if(S_ISFIFO(v.st_mode))
	printf("p");
else if(S_ISSOCK(v.st_mode))
	printf("s");

printf(" %o ",v.st_mode & 0777);
printf("%u ",v.st_nlink);
printf("%8u ",v.st_size);
printf("%20s \n",p->d_name);

	}
}
}
else if(argv[1][0]=='-'&&argv[1][1]=='i')
{
dp=opendir(argv[2]);
	if(dp==0)
	{
		perror("opendir");
		return;
	}

while(p=readdir(dp))
	if(p->d_name[0]!='.')
	{
		stat(p->d_name,&v);
		printf("inod=%u filename=%s\n",v.st_ino,p->d_name);
	}
}



}
else
	printf("wrong entry....try next time....\n");
return 0;
}

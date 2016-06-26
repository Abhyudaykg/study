#include<stdio.h>
	void fun(char **);
	int main()
	{
		char *argv[]={"ab","cd","ef","gh"};
		fun(argv);
		return 0;
	}
	void fun(char **p)
	{
		char *t;
	printf("%u\n",p);		
	t=(p+=sizeof(int))[-1];
	printf("%u\n",p);		
		printf("%s\n",t);
	}


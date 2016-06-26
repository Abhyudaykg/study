/*	8.)	Write a Program  parent has to get the data from user and store the data in file.after that 
    		    parent process will  send one signal to child process.child process after receving the 
  		     signal,open the file and convert data to oppsite case and store again in same file.
			Hint : Use pause() in child process.
			           Use signal num 10(usersignal) in parent.
*/
#include"header.h"
void my_isr(int n)
{

	printf("In isr \n");
}
int main()
{
int pid;
int i;
int s;
FILE *fp;
	
	signal(10,my_isr);

	if((pid=fork())==0)
	{//child
		printf("Child ....\n");
	pause();
		printf("In chld after pause()....\n");
	fp=fopen("temp","r+");
	char str[30];
		fscanf(fp,"%s",str);
	rewind(fp);
	i=0;
		while(str[i])
	{
		str[i]=(str[i] & ~(1<<5));
		i++;
	}
		printf("In chld....str=%s \n",str);
	fputs(str,fp);
	fclose(fp);
		printf("chld end...\n");
		sleep(2);
	exit(s);
	}
	else
	{//parent
		printf("in parnet...\n");
	char str[30];
	fp=fopen("temp","w");
		printf("Entr the data max 30\n");
		scanf("%s",str);
	fprintf(fp,"%s",str);
	fclose(fp);
	kill(pid,SIGUSR1);
	waitpid(pid,&s,0);
		printf("Parent end ...\n");
	}

return 0;
}

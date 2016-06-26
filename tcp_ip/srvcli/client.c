#include"header.h"
int main()
{
char s[20];
int sfd,len,nsfd;

struct sockaddr_in v,v1;

sfd=socket(AF_INET,SOCK_STREAM,0);
if(sfd<0)
{
perror("socket");
return;
}
printf("sfd=%d \n",sfd);

v.sin_family=AF_INET;
v.sin_port=htons(3000);
v.sin_addr.s_addr=inet_addr("127.0.0.1");

len=sizeof(v);

connect(sfd,(struct sockaddr *)&v,len);
perror("connect");

printf("Entyer the Data...\n");
scanf("%s",s);
	write(sfd,s,strlen(s)+1);
}

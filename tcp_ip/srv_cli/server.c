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
v.sin_addr.s_addr=inet_addr("0.0.0.0");

len=sizeof(v);

bind(sfd,(struct sockaddr *)&v,len);
	perror("bind");

listen(sfd,5);
	perror("listen");

printf("Before...\n");

nsfd=accept(sfd,(struct sockaddr *)&v,&len);
	perror("accept");
while(1)
{
read(nsfd,s,sizeof(s)+1);
printf("Data=%s \n",s);
}
return 0;
}

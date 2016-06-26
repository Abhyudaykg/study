unsigned char my_comp(unsigned char *p,unsigned char *q,unsigned char l)
{
	unsigned char i=0;;
for(;q[i];i++)
{
	if(p[i]==q[i]);
	else
		return 0;
}
if(i==l)
	return 1;
}

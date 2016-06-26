unsigned char my_comp(unsigned char *p,unsigned char *q,unsigned char l)
{
for(;l&&q[l];l--)
{
	if(p[l]==q[l]);
	else
		return 0;
}
if(l==0)
	return 1;
}

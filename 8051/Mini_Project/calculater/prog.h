float calc(float n,float m,unsigned char op)
{
switch(op)
{

case '+':
			return n+m;
			break;
case '-':
			return n-m;
			break;
case '*':
			return n*m;
			break;
case '/':
			return n/m;
			break;
case '%':
			return (n/m)*100;
			break;
}
}
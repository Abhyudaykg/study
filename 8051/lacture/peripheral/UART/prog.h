float calc(float n,float m,unsigned char op1)
{
switch(op1)
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
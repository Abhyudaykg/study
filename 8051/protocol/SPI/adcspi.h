 sbit clk  = P1^0;
 sbit dout = P1^1;
 sbit din  = P1^2;
 sbit cs   = P1^3;
 float read_adc()
 {
 unsigned int temp=0x00;
 char i;
 cs=0;                  // start thye adc....
 clk=0 ; din=1 ; clk=1; // start bit....
 clk=0 ; din=1 ; clk=1;	// single ended o/p mode.....
 clk=0 ; din=1 ; clk=1;	// D2 is don't care......

 // select adc channele....(CH0 selected..)...

 clk=0 ; din=0 ; clk=1; // D1
 clk=0 ; din=0 ; clk=1;	// D0 &
 						// start sampling.....

 clk=0 ; clk=1;         // TSample....
 clk=0 ; clk=1;			// NULL Bit



// reading digital data....
	for(i=11;i>=0;i--)
	{
	 	clk=0;
		if(dout==1)
			temp|=(1<<i);
		clk=1;
	}
	cs=1;               // stop adc
		
return (temp*5.0)/4095;		
	
}

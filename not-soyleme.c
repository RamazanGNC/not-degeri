//not girsin ve ona göre half notu verelim

#include <stdio.h>

int main (void)

{
	int notu;
	
	printf("lutfen notunuzu giriniz : ");
	scanf ("%d",&notu);
	
	if (notu>=90)
	{
		printf ("A notunu aldiniz.");
	}
	else if (notu>=80)
	{
		printf ("B notunu aldiniz.");
	}
	
	else if (notu>=70)
	{
		printf ("C notunu aldiniz.");
	}
	 
	else if (notu>=60)
	{
		printf ("D notunu aldiniz.");
	}
	
	else if (notu>=50)
	{
		printf ("E notunu aldiniz.");
	}
	
	else 
	{
		printf ("Sinifta kaldiniz !");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

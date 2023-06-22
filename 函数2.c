#define _CRT_SECURE_NO_WARNINGS 1

int  is_odd(int a)
{
	int b = 0;
	for ( b = 2; b < a; b++)
	{
      if (a % b == 0)
	  {

		  return 0;
	  }
	}
	return 1;
}


int main()
{
	int i = 0;
	int count = 0;
	for (i = 50; i <= 100; i++)
	{
		
		if (is_odd(i) == 1)
		{
			count++;
			printf("%d ", i);
		}
		
	}
	printf("\n count = %d\n", count);
	return 0;
}
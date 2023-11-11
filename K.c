#include <stdio.h>

int main() {
  // put your code here
 int K, res;
 scanf("%d", &K);
// K = (0 <= K ||  <= 100);
//res = K % 2;
if (K >= 0 && K <= 100) 
	{
		res = K % 2;
		if (res == 0)
		{
			printf("1");
		}	
		else
		{

			printf("-1");
		}
	}
       	return 0;
}

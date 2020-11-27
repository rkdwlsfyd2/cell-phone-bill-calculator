#include<stdio.h>

int main()
{
	int network = 0, mb = 0, fee = 0, tax = 0, sum = 0; // network = 통신망 , fee = 사용료 , tax = 세금 ,  sum = 요금합계
	int gb = 0;
	while (1)
	{
		printf("통신망: ");
		scanf_s("%d", &network);
		printf("사용량: ");
		scanf_s("%d", &mb);
		gb = mb / 1000;

		if (network == 1) // network에 1을 입력하면 이 if문이 실행
		{
			if (mb <= 1000) // mb가 1000보다 작을 경우 실행
			{
				fee = mb * 15;
				tax = (fee + 5000) * 0.1;
				sum = (fee + 5000) + tax;
			}
			else if (mb <= 5000) // 1000보다는 크고 mb가 5000보다 작을 경우 실행
			{
				fee = 1000 * 15 + (mb - 1000) * 10;
				tax = (fee + 5000) * 0.1;
				sum = (fee + 5000) + tax;
			}
			else if (5000 < mb) // mb가 5000 초과일 경우에만 실행
			{
				fee = 1000 * 15 + 5000 * 10 + (mb - 6000) * 5;
				tax = (fee + 5000) * 0.1;
				sum = (fee + 5000) + tax;
			}
			printf("LET 요금:: 기본료: 5000원, 사용료(%dGB): %d원,\n세금: %d원, 요금합계: %d원\n\n", gb, fee, tax, sum);
		}
		if (network == 2) // network에 2을 입력하면 이 if문이 실행
		{
			if (mb <= 10000) // mb가 10000보다 이하일 경우에만 실행
			{
				fee = mb * 15;
				tax = (fee + 10000) * 0.1;
				sum = (fee + 10000) + tax;
			}
			else if (mb > 10000) // mb가 10000 초과일 경우에만 실행
			{
				fee = 1000 * 15 + (mb - 1000) * 10;
				tax = (fee + 10000) * 0.1;
				sum = (fee + 10000) + tax;
			}
			printf("5G 요금:: 기본료: 10000원, 사용료(%dGB): %d원,\n세금: %d원, 요금합계: %d원\n\n", gb, fee, tax, sum);
		}
	}
}

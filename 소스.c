#include<stdio.h>

int main()
{
	int network = 0, mb = 0, fee = 0, tax = 0, sum = 0; // network = ��Ÿ� , fee = ���� , tax = ���� ,  sum = ����հ�
	int gb = 0;
	while (1)
	{
		printf("��Ÿ�: ");
		scanf_s("%d", &network);
		printf("��뷮: ");
		scanf_s("%d", &mb);
		gb = mb / 1000;

		if (network == 1) // network�� 1�� �Է��ϸ� �� if���� ����
		{
			if (mb <= 1000) // mb�� 1000���� ���� ��� ����
			{
				fee = mb * 15;
				tax = (fee + 5000) * 0.1;
				sum = (fee + 5000) + tax;
			}
			else if (mb <= 5000) // 1000���ٴ� ũ�� mb�� 5000���� ���� ��� ����
			{
				fee = 1000 * 15 + (mb - 1000) * 10;
				tax = (fee + 5000) * 0.1;
				sum = (fee + 5000) + tax;
			}
			else if (5000 < mb) // mb�� 5000 �ʰ��� ��쿡�� ����
			{
				fee = 1000 * 15 + 5000 * 10 + (mb - 6000) * 5;
				tax = (fee + 5000) * 0.1;
				sum = (fee + 5000) + tax;
			}
			printf("LET ���:: �⺻��: 5000��, ����(%dGB): %d��,\n����: %d��, ����հ�: %d��\n\n", gb, fee, tax, sum);
		}
		if (network == 2) // network�� 2�� �Է��ϸ� �� if���� ����
		{
			if (mb <= 10000) // mb�� 10000���� ������ ��쿡�� ����
			{
				fee = mb * 15;
				tax = (fee + 10000) * 0.1;
				sum = (fee + 10000) + tax;
			}
			else if (mb > 10000) // mb�� 10000 �ʰ��� ��쿡�� ����
			{
				fee = 1000 * 15 + (mb - 1000) * 10;
				tax = (fee + 10000) * 0.1;
				sum = (fee + 10000) + tax;
			}
			printf("5G ���:: �⺻��: 10000��, ����(%dGB): %d��,\n����: %d��, ����հ�: %d��\n\n", gb, fee, tax, sum);
		}
	}
}

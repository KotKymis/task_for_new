#include <stdio.h>
#include "testy/func.h"
#include "testy/func_cust.h"

int main() {
	printf("������ ���������...\n");
	if (func_ok(1, 1)) {
		printf("�������� customer_check ������ �������.\n");
		return customer_check(5);
	}
	printf("���������� ���������.\n");
	return 0;
}

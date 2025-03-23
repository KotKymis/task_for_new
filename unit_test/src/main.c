#include <stdio.h>
#include "testy/func.h"
#include "testy/func_cust.h"

int main() {
	printf("Запуск программы...\n");
	if (func_ok(1, 1)) {
		printf("Проверка customer_check прошла успешно.\n");
		return customer_check(5);
	}
	printf("Завершение программы.\n");
	return 0;
}

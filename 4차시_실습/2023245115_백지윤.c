
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS //D_homework에 쓰인다

void A_homework()
{
		char ascii;
	ascii = 'C';
	printf("%c의 ASCII 값은 %d\n", ascii, ascii);

	ascii = 'o';
	printf("%c의 ASCII 값은 %d\n", ascii, ascii);

	return 0;
}

void B_homework()
{
	float circle; //circle은 원의 넓이
	float r = 5.7; //r은 원의 반지름
	float PI = 3.14; //파이PI는 실수
	float trapezoid; // trapezoid는 사다리꼴의 넓이
	float bottom = 2.0; //사다리꼴의 아랫변
	float top = 3.0; //사다리꼴의 윗변
	float height = 1.5; //사다리꼴의 높이


	circle = PI * r * r;
	trapezoid = (bottom + top) * height * 1 / 2;

	r = 5.7;
	PI = 3.14;

	printf("반지름이 %f인 원의 넓이는 %f입니다.\n", r, circle);

	printf("아랫변이 %f이고 윗변이 %f이고 높이가 %f인 사다리꼴의 넓이는 %f입니다.", bottom, top, height, trapezoid);

	return 0;
}

void C_homework()
{
	int hour = 13;
	int min = 25;
	int sec = 30;
	int total_sec = sec + min * 60 + hour * 60 * 60;

	printf("%d시간 %d분 %d초는 %d초 입니다.", hour, min, sec, total_sec);

	return 0;
}

void D_homework()
{
	int integer;
	printf("ASCII 코드 값을 입력하세요: ");
	scanf_s("%d\n", &integer);

	printf("%c\n", integer);
	return 0;
}

void E_homework()
{
	float milli_sec; //milli_sec는 1초의 1/1000
	float micro_sec = 100; // micro_sec는 1초의 1/100만
	float nano_sec = 0.5;// nano_sec = jejo*[
	float total = milli_sec * 1 / 1000 + micro_sec * 1 / 1000000 + nano_sec*1;

	printf("%dns + $dmilli_sec + %dmilli_sec +%dtotal_sec", nano_sec, micro_sec, milli_sec);
	return 0;
}

int main() {
	A_homework();
	B_homework();
	C_homework();
	D_homework();
	E_homework();
	printf("우와!ㅋㅋ 자동 연동된다!ㅋㅋㅋㅋ");
	return 0;
}
#include <stdio.h>
#include <stdint.h>

int main()
{
#pragma pack(1)

	uint8_t data = 0x73;  // 0111 0011

	union Node
	{
		uint8_t origin; 
		// 리틀 엔디안 방식으로 0x37으로 저장
		struct // 유니온이라 구조체 또한 0x37로 저장
		{
			// struct 내부 구조로 나눌 때에는 또 리틀엔디안 방식으로 0x73형식으로 나누어짐
			// 0111 0011 => 0 1 11001 1
			uint8_t a : 4;  // 1
			uint8_t b : 4;  // 1 1001
			uint8_t c : 4; // 1
			uint8_t d : 4; // 0

		}field;
	};

	union Node input;

	input.origin = data; // orgin 변수에 data 값 넣기


	printf("0x%02X\n",input.field.a); //%02X : 16진수를 2자리로 표현
	printf("0x%02X\n",input.field.b);
	printf("0x%02X\n",input.field.c);
	printf("0x%02X\n",input.field.d);


	return 0;
}
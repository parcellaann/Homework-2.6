// Homework 2.6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int year, month, day;

    printf("Enter your year of birth. Example: 1999\n Year:");
	scanf("%i", &year);

	printf("Enter your month of birth. Example: 5\n Month:");
	scanf("%i", &month);

	printf("Enter your day of birth. Example: 25\n Day:");
	scanf("%i", &day);

	if (((year % 4 == 0) && (year % 100 !=0)) || (year % 400 == 0))
		printf("You were born in a leap year.\n");
	else
		printf("You were not born in a leap year.\n");

	switch (year % 12)
	{
	case 0:
		printf("You were born in the year of the monkey.\n");
		break;
	case 1:
		printf("You were born in the year of the rooster.\n");
		break;
	case 2:
		printf("You were born in the year of the dog.\n");
		break;
	case 3:
		printf("You were born in the year of the pig.\n");
		break;
	case 4:
		printf("You were born in the year of the rat.\n");
		break;
	case 5:
		printf("You were born in the year of the bull.\n");
		break;
	case 6:
		printf("You were born in the year of the tiger.\n");
		break;
	case 7:
		printf("You were born in the year of the rabbit.\n");
		break;
	case 8:
		printf("You were born in the year of the dragon.\n");
		break;
	case 9:
		printf("You were born in the year of the snake.\n");
		break;
	case 10:
		printf("You were born in the year of the horse.\n");
		break;
	case 11:
		printf("You were born in the year of the goat.\n");
		break;
	}

	if (day <= 0 || day >= 32 || month <= 0 || month >= 13)
	{
		printf("Incorrect day or month.\n");
	}
	else
	{
		int monthZod = month;
		if (day >= 21) monthZod++;
		switch (monthZod % 12)
		{
		case 0:
			printf("You're Saqittarius.\n");
			break;
		case 1:
			printf("You're Capricorn.\n");
			break;
		case 2:
			printf("You're Aquarius.\n");
			break;
		case 3:
			printf("You're Pisces.\n");
			break;
		case 4:
			printf("You're Aries.\n");
			break;
		case 5:
			printf("You're Taurus.\n");
			break;
		case 6:
			printf("You're Gemini.\n");
			break;
		case 7:
			printf("You're Cancer.\n");
			break;
		case 8:
			printf("You're Leo.\n");
			break;
		case 9:
			printf("You're Virgo.\n");
			break;
		case 10:
			printf("You're Libra.\n");
			break;
		case 11:
			printf("You're Scorpio.\n");
			break;
		default:
			printf("Oops. Something went wrong.");
			break;
		}
	}
}

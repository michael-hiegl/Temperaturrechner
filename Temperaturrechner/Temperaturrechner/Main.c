//**************************************************************************
//**************************************************************************
//**
//**	Projekt: Temperaturrechner	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 30.11.2021 18:29:02
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************


int main(void)
{
	//Variables
	float f_Celsius = 0;
	float f_Kelvin = 0;



	//Code




	//Eingabe
	printf("Bitte geben sie die Temperatur in Grad Celsius ein\n");
	scanf("%f", &f_Celsius);

	if (f_Celsius >= -273.15)
	{
		f_Kelvin = f_Celsius + 273.15;

		printf("\n%0.2f Grad Celsius entsprechen %0.2f Kelvin", f_Celsius, f_Kelvin);
	}

	else
	{
		f_Kelvin = 0;

		printf("\nTemperaturen unter -273.15 Grad Celsius nicht moeglich");
	}


	getchar();
	fflush(stdin);
	getchar();
	return 0;
}
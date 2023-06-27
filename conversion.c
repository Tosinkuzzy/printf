/*
 * File: conversion.c
 * Author: Team collaboration
 */
#include "main.h"

/**
 * conversion - Entry p
 * des: converts number and base into string
 * @num: input number
 * @base: input base
 * @lower: flag if hexa values need to be lowercase
 * Return: result string
 */
char *conversion(unsigned long int num, int base, int lower)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lower)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
		ptr = &buffer[49];
		*ptr = '\0';
		do {
			*--ptr = rep[num % base];
			num /= base;
		} while (num != 0);

		return (ptr);
}

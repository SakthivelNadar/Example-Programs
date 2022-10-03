#define _GNU_SOURCE

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<dlfcn.h>

int rand() {
	int (*original_rand)(void) = dlsym(RTLD_NEXT,"rand");
	return original_rand() % 100;
}

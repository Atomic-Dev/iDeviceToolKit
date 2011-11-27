#include <stdio.h>
#include <stdlib.h>
#include "libpois0n.h"
int argc = 0;
char* argv[2];

int main(int argc, char* argv[]) {	
	printf("Power off device before you start\n");	
#ifdef _WIN32
	system("pause");
#endif
	irecv_init();
	irecv_open_attempts(&client, 10);
	
	if (client->mode != kDfuMode)
		stage_1();			

	
	while(pois0n_is_ready()) {	
		info("Hold home only...\n");
		sleep(1);
	}

	info("You are in DFU mode!\n");
#ifdef _WIN32
	system("pause");
#else
	system("pause");
#endif

}
int stage_1() {
	info("Hold home + power\n");
	sleep(1);
	info("Hold home + power\n");
	sleep(1);
	info("Hold home + power\n");
	sleep(1);
	info("Hold home + power\n");
	sleep(1);
	info("Hold home + power\n");
	sleep(1);
	info("Hold home + power\n");
	sleep(1);
	info("Hold home + power\n");
	sleep(1);
	info("Hold home + power\n");
	sleep(1);
	info("Hold home + power\n");
	sleep(1);
	
}
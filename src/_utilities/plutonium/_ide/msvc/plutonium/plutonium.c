/** 
  * Copyright (C) 2011 KryptonX
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 3 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **/

#include <stdio.h>
#include "../../../../libkrypton1te/libkrypton1te.h"


int main (int argc, char *argv[]) {
    if ( argc != 2 ) /* argc should be 2 for correct execution */ {
		printf("plutonium is krypton1te's argument manager. Based on syringe and iRecovery.\nOpensource @ github.com/atomic-dev/plutonium\n\n");
		printf("plutonium\t./args\n");
		printf("-a\t\tActivate libkrypton1te\n");
		printf("-b\t\tBash\n");
		printf("-c <command>\tSend a command to iBoot\n");
		printf("-k\t\tRun libkrypton1te\n");
	} else {
		char** pArg;
	for (pArg = argv + 1; pArg < argv + argc; ++pArg) {
	const char* arg = *pArg;
		int* pIntOpt = NULL;
		if (!strcmp(arg, "-a")) {
		printf("\nInitiating libkrypton1te...\n");
		do {
			printf("...");
		}
		while ((libkrypton1te_init()) != 0);
		printf("\nSuccess!\n");		
	} else if (!strcmp(arg, "-b")) {
			printf("bash shell...\n");
		do {
			fsck_client(1, "fsck_hfs", 10);
		}
		while ((libkrypton1te_init()) != 0);
			
		} else if (!strcmp(arg, "-c")) {		
			connect_to_device();	
		
		} else if (!strcmp(arg, "-k")) {
			/* libkrypton1te */
		}
	}	
}

}
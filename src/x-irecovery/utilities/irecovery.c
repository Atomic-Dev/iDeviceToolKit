/**
  * Syringe-base irecovery -- irecovery.c
  * Copyright (C) 2010 Chronic-Dev Team
  * Copyright (C) 2010 Joshua Hill
  * Copyright (C) 2010 iH8sn0w
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
#include <unistd.h>
#include "libirecovery.h"
#include "libpois0n.h"
#include "freeze.h"

int specs = 0;
int spec_ = 0;

unsigned int cpid;
int can_ra1n = 0;


void print_progress(double progress) {
int i = 0;
			if(progress < 0) {
			return;
	}

	if(progress > 100) {
		progress = 100;
	}

		printf("\r[");
	for(i = 0; i < 50; i++) {
		if(i < progress / 2) {
			printf("=");
		} else {
			printf(" ");
		}
	}
	printf("] %3.1f%%", progress);
	if(progress == 100) {
		printf("\n");
	}
}

int progress_cb(irecv_client_t client, const irecv_event_t* event) {
	if (event->type == IRECV_PROGRESS) {
		print_progress(event->progress);
	}
	return 0;
}

int main(int argc, char* argv[]) {
		if(argc < 2) {
		
		while (specs < 89999999) {
			++specs;
		}
		return 0;
	}
			else {

	char** pArg;
	for (pArg = argv + 1; pArg < argv + argc; ++pArg) {
	const char* arg = *pArg;
		int* pIntOpt = NULL;
	if (!strcmp(arg, "-x")) {
	irecv_error_t error;
	
	irecv_init();

	printf("\nWaiting for device...\n");

	

	error = irecv_open_attempts(&client, 10);
	if(error != IRECV_E_SUCCESS)
	{
		fprintf(stderr, "Failed to connect to iBoot, error %d.\n", error);
		return -error;
	}	
	if(irecv_get_cpid(client, &cpid) == IRECV_E_SUCCESS)
	{
		if(cpid > 8900) {
			can_ra1n = 1;
		} 
		if(cpid = 8720) {
			can_ra1n = 1;
		} 
	}

	if (client->mode != kDfuMode) {
		printf("No device in DFU\n");
		EOF;
	}

	if(client->mode == kDfuMode && can_ra1n)
	{
		
		int ret;
		debug("DFU Found!\n");
		debug("Connecting to DFU...\n");
		debug("Connected to DFU!\n");
		irecv_close(client);
		irecv_exit();

		pois0n_init();

		ret = pois0n_is_ready();
		if(ret < 0)
			return ret;

		ret = pois0n_is_compatible();
		if(ret < 0)
			return ret;

		pois0n_injectonly();

		send_payload();

		

		while (spec_ < 999999) {
			spec_++;
		}

		

		irecv_close(client);
		client = NULL;
	}
		} else if (!strcmp(arg, "-c")) {
	irecv_open_attempts(&client, 10);
	irecv_event_subscribe(client, IRECV_PROGRESS, &progress_cb, NULL);
	irecv_send_command(client, argv[2]);
	irecv_exit();
	printf("\nCommand Sent!\n");
} else if (!strcmp(arg, "-f")) {
	irecv_open_attempts(&client, 10);
	irecv_event_subscribe(client, IRECV_PROGRESS, &progress_cb, NULL);
	if(client->mode == kDfuMode) {
		printf("\nUploading file in DFU...\n\n");
		irecv_send_file(client, argv[2],1);
	}	else {
		printf("\nUploading file in Recovery Mode...\n\n");
	irecv_send_file(client, argv[2],0);
		}
		irecv_exit();
	printf("\nFile Sent!\n");
			} 
else if (!strcmp(arg, "-k")) {
	 if(argc >= 3) {
	irecv_open_attempts(&client, 10);
	irecv_event_subscribe(client, IRECV_PROGRESS, &progress_cb, NULL);
	printf("\n[!] Sending USB exploit... [!]\n");
	irecv_send_file(client, argv[2],0);
	irecv_send_exploit(client);
	printf("[!] USB exploit sent... [!]\n");
	 } else {
		 printf("\n[!] No payload was specified! [!]\n");
	}
} 
	return 0;
}
		}
}

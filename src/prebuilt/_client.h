#ifndef _client_header_file
#define _client_header_file

       const char *exitRecoveryCommands[] = {
             "setenv auto-boot true",
             "saveenv",
             "reset",
       };
       
       const char *iBootCommand[] = {
             "reboot",
             "fsck_hfs",
             "0x21,1",
       };   
       
       const char *dfuCommand[] = {
             "01010101010",
             "Client is in DFU",
             "Connecting to DFU...",
             "Failed to connect!",
             "Connected!",
             "** Returned an error",
       };
       
       unsigned const char return_payload[] = {                
                0x21, 0x22,
       };
         
#endif


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pointer.h"
#include "commands/cmd.h"


void usage();
int val = 0;

typedef volatile int t_atomic_xval;

int iPhoneArray(int index);
int iPodArray(int index);
int iPadArray(int index);

void load_iBoot(void);

int main(int argc, char *argv[]) {    

   t_atomic_xval arg = argc;    

   int c, except = 0, number = 0, found = 0;   
   /* Parsing */
   
   if (arg < 2) {
           usage(); 
   } else {
   
   while (--argc > 0 && (*++argv)[0] == '-') 
                                 
         c = *++argv[0];
               switch (c) {
                      case 'a':
                            printf("Activating...\n");
                            printf("Preparing subjects...\n");
                            printf("Reticulating splines...\n");
                            printf("Error! Cannot connect to drivers!\n");
                            printf("** Attepting to reset counters!\n");
                            printf("Skipping to variable input...\n");
                            int counx = 0;
                            for (counx = 0; counx < 1; ++counx) 
                            printf("0x21s6461d6s6d1s6d4\n");
                            printf("HFS returned 0\n");
                            printf("\n\nSuccess!");
                            break;
                      case 'b':                           
                           system("cd bin && ibss.pyc");
                           break;
                      case 'c':
                           system("cd bin && ibec.pyc");
                           break;
                           
                      case 'd':
                           printf("How did you guess that this command was available?\n");
                           printf("** This is prone to return errors\n");
                           system("pause");
                           system("cd bin && k-irecovery -k");
                           break; 
                      
                      case 'f':
                                system("cd bin && k-irecovery -k > model.log");
                                printf("** The file has been saved in the bin directory\n");
                                break;                 
                      case 'i':
                           printf("Enter the array value:\n");     
                           scanf("%d", &val);  
                           iPhoneArray(val);                         
                           break;
                      case 'j':
                           printf("Enter the array value:\n");     
                           scanf("%d", &val);  
                           iPodArray(val);
                           break;
                      case 'h':
                           printf("Enter the array value: \n");
                           scanf("%d", &val);
                           iPadArray(val);
                           break; 
                      case 'l':
                           load_iBoot();
                           break;
                      
                      case 'm':
                           system("cd bin && iboot -ab");     
                           break;
                      case 'n':
                           system("cd bin && iboot -r");
                           break;
                      case 'o':
                           printf("Starting PROCESS 'iTunes.exe'...\n");
                           #ifdef _WIN32
                                  system("start iTunes.exe");
                                  printf("Done\n");
                           #else
                           printf("Could not start process 'iTunes.exe'\n");
                           #endif
                           break;
                      case 'e':
                               system("cd bin && dfu");
                           break;
                     
                      case 'r':
                           #ifdef _WIN32
                                  system("Taskkill /IM iTunes.exe");
                           #endif
                           break;
                           
                      case 'q':
                           AMDeviceEnterRecovery();
                           break;
                           
                      case 's':
                           steaks4uce_exploit();
                           break;  
                           
                      case 't':
                           usb_control_msg(argv[2]);
                           break;
                      case 'x':
                           limera1n_exploit();
                           break;    
                      case 'w':
                           system("start http://code.google.com/p/atomic-dev/");
                           break;                    
                    default:
                            printf("This command is not available.\n");
                            system("pause");                    
               }
                
   }    
         
}
void usage() {
     /* Usage */
       printf("./args\t* Connected device\t** Connected device in Recovery or DFU\t*** Experimental\n");
       printf("============================================\n");
       printf("-a\t\t* Activate lib-x-mobiledrive\n");
       printf("-b\t\tCreate iBSS (requires Python)\n");
       printf("-c\t\tCreate iBEC (requires Python)\n");        
       printf("-f\t\t** Save info to file\n");
       printf("============================================\n");
       printf("-h\t\tAccess the iPad array\n");
       printf("-i\t\tAccess the iPhone array\n");
       printf("-j\t\tAccess the iPod array\n");
       printf("============================================\n");       
       printf("-l [iBoot]\t** Load a new iBoot\n");
       printf("-m\t\t** Set auto-boot to true\n");
       printf("-n\t\t** Reset iBoot\n");
       printf("============================================\n"); 
      /* printf("-p <command>\t* Process a command\n");
       printf("============================================\n"); */
       printf("-e\t\t* DFU Helper\n");
       printf("-q\t\t* Enter Recovery (.NET Framework)\n");
       printf("-o\t\tLaunch iTunes\n");
       printf("-r\t\tKill iTunes\n");       
       printf("============================================\n");        
       printf("-s\t\t** Execute steaks4uce exploit\n");
       printf("-t <payload>\t** usb_control_msg(0x21, 2) exploit\n");
       printf("-x\t\t** Execute limera1n exploit\n");
      /* printf("-y\t\t*** Restore using idevicerestore\n");*/
       printf("============================================\n");
       printf("-w\t\tAtomic-Dev\n");       
       system("pause"); 
}

int iPhoneArray(int index) {
     printf("%s\n", iPhones[index]);
          
}

int iPodArray(int index) {
     printf("%s\n", iPods[index]);     
}

int iPadArray(int index) {
    printf("%s\n", iPads[index]);   
}


void load_iBoot(void) {
     system("cd bin && iboot -b");
}




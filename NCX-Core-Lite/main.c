//NCX-Core-Lite "main.c"
//Copyright (C) 2021 NinjaCheetah
//Copyright (C) 2021 NCX-Programming
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <dirent.h>
#include "store.h"
#include "functions.h"
// Declare functions
void Store();
int Download();
// Declare variables
int menuChoice;
// Start code
void Store(){
    clrScrn();
    printf("*====================================*\n");
    printf("| \e[1;97mXStore-Lite\e[0m                        |\n");
    printf("*=======*============================*\n");
    printf("|       |                            |\n");
    printf("|  (1)  |   Exit Program             |\n");
	printf("|       |                            |\n");
    printf("|       | Programs:                  |\n");
    printf("|       |                            |\n");
    printf("|  (2)  |   C64-Title-Loader         |\n");
    printf("|       |                            |\n");
    printf("|  (3)  |   Cookie-Clicker-C64       |\n");
    printf("|       |                            |\n");
    printf("|  (4)  |   Tic-Tac-Toe-C64          |\n");
    printf("|       |                            |\n");
    printf("|  (5)  |   Math-Game-C64            |\n");
    printf("|       |                            |\n");
    //printf("|  (6)  |                            |\n");
    //printf("|       |                            |\n");
    //printf("|  (7)  |                            |\n");
    //printf("|       |                            |\n");
    //printf("|  (8)  |                            |\n");
    //printf("|       |                            |\n");
    printf("*=======*============================*\n");
    menuChoice=0;
    while(menuChoice==0||menuChoice=='\n'){
        menuChoice=0;
        menuChoice=fgetc(stdin);
        // Get store menu choice
        if(menuChoice==49){
            clrScrn();
            exit(0);}
        if(menuChoice==50)TL64();
        if(menuChoice==51)CC64();
        if(menuChoice==52)TTT64();
        if(menuChoice==53)MG64();
        //if(menuChoice==54)();
        //if(menuChoice==55)();
        //if(menuChoice==56)();}
}
int main(void){
    printf("Welcome to Ian's fork of NCX-Core-Lite!\n\n");
    printf("NCX-Core-Lite,  Copyright (C) 2021  NCX-Programming/NinjaCheetah\nThis program comes with ABSOLUTELY NO WARRANTY.\nThis is free software, and you are welcome to redistribute it\nunder certain conditions; view the full license in the repo.\n\n");
    printf("Press ENTER to view available software");
    getchar();
    Store();
}
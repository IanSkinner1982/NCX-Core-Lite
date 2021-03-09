//NCX-Core-Lite "store.c"
//Copyright (C) 2021 NinjaCheetah
//Copyright (C) 2021 NCX-Programming
#include "store.h"
#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
// Declare variables
int storeChoice;
void TL64(){
    clrScrn();
    printf("C64-Title-Loader\nBy IanSkinner1982\n\n");
    printf("A program to load all of my C64 projects.\n\n");
    printf("Requirements: VICE Emulator on macOS, Windows, or Linux (or 3DS lol)\n\n");
    printf("Options:\n1. Download\n2. Return to Store\n");
    storeChoice=0;
    while(storeChoice==0||storeChoice=='\n'){
        storeChoice=0;
        storeChoice=fgetc(stdin);
        // Get choice
        if(storeChoice==49){
            clrScrn();
            printf("Downloading...\n");
            if(!Download("https://github.com/IanSkinner1982/C64-title-loader/releases/latest/download/loader.d64", "loader.d64")){printf("Done.\n");};
            sleep(1);
            TL64(); }
        if(storeChoice==50)Store();}
}
void CC64(){
    clrScrn();
    printf("Cookie-Clicker-C64\nBy IanSkinner1982\n\n");
    printf("A WIP cookie clicker clone for the Commodore 64.\n\n");
    printf("Requirements: VICE Emulator on macOS, Windows, or Linux (or 3DS lol)\n\n");
    printf("Options:\n1. Download\n2. Return to Store\n");
    storeChoice=0;
    while(storeChoice==0||storeChoice=='\n'){
        storeChoice=0;
        storeChoice=fgetc(stdin);
        // Get choice
        if(storeChoice==49){
            clrScrn();
            printf("Downloading...\n");
            if(!Download("https://github.com/IanSkinner1982/Cookie-Clicker-C64/releases/latest/download/Cookie.Clicker.d64", "cookie.d64")){printf("Done.\n");};
            sleep(1);
            CC64(); }
        if(storeChoice==50)Store();}
}
void TTT64(){
    clrScrn();
    printf("Tic-Tac-Toe-C64\nBy IanSkinner1982\n\n");
    printf("Tic Tac Toe for the Commdore 64.\n\n");
    printf("Requirements: VICE Emulator on macOS, Windows, or Linux (or 3DS lol)\n\n");
    printf("Options:\n1. Download\n2. Return to Store\n");
    storeChoice=0;
    while(storeChoice==0||storeChoice=='\n'){
        storeChoice=0;
        storeChoice=fgetc(stdin);
        // Get choice
        if(storeChoice==49){
            clrScrn();
            printf("Downloading...\n");
            if(!Download("https://github.com/IanSkinner1982/Tic-Tac-Toe-C64/releases/latest/download/tictactoe.d64", "tic-tac-toe.d64")){printf("Done.\n");};
            sleep(1);
            TTT64(); }
        if(storeChoice==50)Store();}
}
void MG64(){
    clrScrn();
    printf("C64-Title-Loader\nBy IanSkinner1982\n\n");
    printf("A program to load all of my C64 projects.\n\n");
    printf("Requirements: VICE Emulator on macOS, Windows, or Linux (or 3DS lol)\n\n");
    printf("Options:\n1. Download\n2. Return to Store\n");
    storeChoice=0;
    while(storeChoice==0||storeChoice=='\n'){
        storeChoice=0;
        storeChoice=fgetc(stdin);
        // Get choice
        if(storeChoice==49){
            clrScrn();
            printf("Downloading...\n");
            if(!Download("https://github.com/IanSkinner1982/Random-BASIC-Projects/blob/main/Math-Game-C64/build/math.prg", "math-game.prg")){printf("Done.\n");};
            sleep(1);
            MG64(); }
        if(storeChoice==50)Store();}
}
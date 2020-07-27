//
//  main.cpp
//  ATM pin
//
//  Created by Tenzin Tashi on 1/24/19.
//  Copyright © 2019 Tenzin Tashi. All rights reserved.
//

#include <iostream>
#include <ncurses.h>
#include <termios.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

using namespace std;
int password,password1;
char ch,pass;
bool conditon = true;
int pin;


void pinAstrick(){
    while(conditon){
        ch = getchar();
        if ((ch >= 48 && ch <= 57)){
            pass += ch;
            cout << '*';
        }else if (ch == 10){
            conditon = false;
        }
    }
}
void menu(){
    cout << "\n\t************************************";
    cout << "\n\t* Welcome to Ten's special ATM     *";
    cout << "\n\t*     1. Check Balance             *";
    cout << "\n\t*     2. Withdraw                  *";
    cout << "\n\t*     3. Deposit                   *";
    cout << "\n\t*     4. Exit                      *";
    cout << "\n\t*                                  *";
    cout << "\n\t************************************";
    cout << "\n\n";
}

int main()
{
   
    cout << "Enter your pin: ";
    pinAstrick();
    if(pin == (int)password){
        cout << "pin";
    }
    return 0;
}

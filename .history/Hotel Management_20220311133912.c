#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "constants.c"
//#include "add-cleaning-schedule.c"
#include "login.c"
#include "main-menu.c"
#include "bookroom.c"
#include "cancel.c"
//#include "delete-customer.c"
#include "edit.c"
#include "exit.c"
#include "search.h"
#include "view.c"

void home() {
	int option;
	system("cls");
    printf("Press '1' to Register\nPress '2' to Login\n\n");
    scanf("%d", &option);
    getchar();

    if (option == 1)
        {
            system("CLS");
            registration();
        }
    else if (option == 2)
        {
            system("CLS");
            login();
        }
	else
	 	{
			home();
		}
    system("cls");
	mainMenu();
}
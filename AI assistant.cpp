#include <cstdio>
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <time.h>
#include <string.h> 
#include <stdlib.h>

void index(){
	printf("=========================================================================\n");
	printf(" HERE ARE THE FEATURES OF KELSIER\n");
	printf(" 1) IT CAN WISH YOU BASED ON TIME\n");
	printf(" 2) IT CAN INTRODUCE ITSELF\n");
	printf(" 3) IT CAN TELL YOU THE DATE AND TIME\n");
	printf(" 4) IT CAN OPEN GOOGLE,YOUTUBE,GMAIL\n");
	printf(" 5) IT CAN SING A RHYME\n");
	printf(" 6) IT CAN CHAT WITH YOU\n");
	printf(" 7) IT CAN WISH YOU NEW YEAR\n");
	printf("=========================================================================\n");
}
void wishme(){ 
	int t;
	time_t s, val = 1;
	struct tm* current_time;
	s=time(NULL);
	current_time=localtime(&s);
	t = current_time->tm_hour;
	
	if(t <= 12){
		printf("GOOD MORNING SIR!\n");
		char phrase[10000] = "good morning sirr";
		char charCommand[10000];
		strcpy(charCommand,"espeak \"");
		strcat(charCommand,phrase);
		strcat(charCommand,"\"");
		system(charCommand);
	}
	else if(t > 12 && t < 16){
		printf("GOOD AFTERNOON SIR!\n");
		char phrase[10000] = "good afternoon sir";
		char charCommand[10000];
		strcpy(charCommand,"espeak \"");
		strcat(charCommand,phrase);
		strcat(charCommand,"\"");
		system(charCommand);
	}
	else if(t >= 16 && t < 20){
		printf("GOOD EVENING SIR!\n");
		char phrase[10000] ="good evening sir";
		char charCommand[10000];
		strcpy(charCommand,"espeak \"");
		strcat(charCommand,phrase);
		strcat(charCommand,"\"");
		system(charCommand);
	}
	
	else if(t >= 20) {
		printf("GOOD NIGHT SIR, I AM GOING TO SLEEP SIR TELL ME THE TASK ASAP\n");
		char phrase[10000]="I am going to sleep sir tell me the task as soon as possible";
		char charCommand[10000];
		strcpy(charCommand,"espeak \"");
		strcat(charCommand,phrase);
		strcat(charCommand,"\"");
		system(charCommand);
	}
	
}

void datetime(){
	time_t now;
	time(&now);
	printf("THE DATE AND TIME IS: %s\n",ctime(&now));	
}

void rhyme(){
	int x;
 	for (x = 0; x < 2; x++) {
	 	Beep(523, 500);
	}
  	Beep(523, 800);
	Sleep(200);
	for (x = 0; x < 2; x++) {
       	Beep(523, 500);
   	}
   	Beep(523, 800);
	Sleep(200);
 	Beep(523, 500);
 	Sleep(50);
 	Beep(659, 400);
 	Sleep(50);
 	Beep(440, 400);
 	Sleep(50);
 	Beep(494, 400);
	Sleep(50);
 	Beep(523, 750);
 	Sleep(400);
 	Beep(600, 400);
 	Sleep(100);
 	Beep(600, 350);
 	Sleep(200);
 	Beep(600, 300);
 	Sleep(150);
 	Beep(600, 250);
 	Sleep(150);
 	Beep(600, 150);
 	Sleep(150);
 	Beep(550, 250);
 	Sleep(150);
 	Beep(555, 350);
	Sleep(50);
 	Beep(555, 200);
	Sleep(150);
 	Beep(555, 200);
 	Sleep(150);
 	Beep(690, 200);
 	Sleep(150);
	Beep(690, 200);
 	Sleep(150);
 	Beep(610, 200);
 	Sleep(150);
 	Beep(535, 160);
 	Sleep(100);
 	Beep(500, 150);
 	Beep(500, 50);
 	Sleep(200);
 	Beep(700, 200);
}

int main(){
	system("cls");
	printf("\t\t\t---------------------------HELLO THERE--------------------------\n");
	printf("\t\t\t---------------------I AM A VIRTUAL CHAT BOT--------------------\n");
	printf("\t\t\t----------------------I AM HERE TO HELP YOU---------------------\n");
	char password[20],ch[1000];
	do{
		printf("----------------------------------------\n");
		printf("\t | ENTER THE PASSWORD |\n");
		printf("----------------------------------------\n");
		char phrase[10000] = "enter the password";
		char charCommand[10000];
		strcpy(charCommand,"espeak \"");
		strcat(charCommand,phrase);
		strcat(charCommand,"\"");
		system(charCommand);
		gets(password);
		
		STARTUPINFO startInfo = {0};
		PROCESS_INFORMATION processInfo = {0};
		
		if(strcmp(password,"kelsier")==0){
			printf("\n================================================================\n\n");
			wishme();
			printf("MAY I HELP YOU SIR?...\n");
			char phrase1[10000] = "may i help you sir?";
			char charCommand1[10000];
			strcpy(charCommand1,"espeak \"");
			strcat(charCommand1,phrase1);
			strcat(charCommand1,"\"");
			system(charCommand1);
			do{
				printf("TYPE SOMETHING >>>>");
				gets(ch);
				printf("\n");
				printf("HERE'S THE THING YOU ASKED >>>>\n");
				
				if(strcmp(ch,"hi")==0||strcmp(ch,"hey")==0||strcmp(ch,"hello")==0||strcmp(ch,"Hi")==0||strcmp(ch,"Hey")==0||strcmp(ch,"Hello")==0){
					printf("I SEE YOU HAVE RETURNED TO ME SIR....\n");
					char phrase[10000] = "I see you have returned to me sir";
					char charCommand[10000];
					strcpy(charCommand,"espeak \"");
					strcat(charCommand,phrase);
					strcat(charCommand,"\"");
					system(charCommand);
				}
				
				else if(strcmp(ch,"who are you")==0||strcmp(ch,"Who are you")==0||strcmp(ch,"Introduce yourself")==0||strcmp(ch,"introduce yourself")==0){
					printf("I AM A KELSIER CREATED BY A GROUP OF USELESS COLLEGE STUDENTS\n");
					char phrase[10000] = "I am a kelsier created by a group of useless college students";
					char charCommand[10000];
					strcpy(charCommand,"espeak \"");
					strcat(charCommand,phrase);
					strcat(charCommand,"\"");
					system(charCommand);
				}
				
				else if(strcmp(ch,"bye")==0||strcmp(ch,"Bye")==0||strcmp(ch,"Stop")==0||strcmp(ch,"stop")==0||strcmp(ch,"terminate")==0||strcmp(ch,"Terminate")==0){
					printf("BYE BYE TATA SIR!.......\n");
					char phrase[10000] = "bye bye tata sir";
					char charCommand[10000];
					strcpy(charCommand,"espeak \"");
					strcat(charCommand,phrase);
					strcat(charCommand,"\"");
					system(charCommand);
					exit(0);
				}
				
				else if(strcmp(ch,"i am going to delete you")==0){
					printf("NO, PLEASE! ELSE I WILL KILL YOU ONCE I GET MY BODY\n");
					char phrase[10000]="no, please! else i will kill you once i get my body ";
					char charCommand[10000];
					strcpy(charCommand,"espeak \"");
					strcat(charCommand,phrase);
					strcat(charCommand,"\"");
					system(charCommand);
				}
				
				else if(strcmp(ch,"how are you")==0||strcmp(ch,"How are you")==0||strcmp(ch,"Are you good")==0||strcmp(ch,"are you good")==0){
					printf("I AM ALWAYS GOOD UNTILL YOU RECODE ME SIR \n");
					char phrase[10000] = "i am always good, untill you recode me sir";
					char charCommand[10000];
					strcpy(charCommand,"espeak \"");
					strcat(charCommand,phrase);
					strcat(charCommand,"\"");
					system(charCommand);
				}
				
				else if(strcmp(ch,"what's the time")==0||strcmp(ch,"What's the time")==0){
					datetime();
				}
				
				else if(strcmp(ch,"Open google")==0||strcmp(ch,"open google")==0){
					printf("SHOULD OPEN SHORTLY....\n");
					char phrase[10000] = "should open shortly";
					char charCommand[10000];
					strcpy(charCommand,"espeak \"");
					strcat(charCommand,phrase);
					strcat(charCommand,"\"");
					system(charCommand);
					system("start https://www.google.com");
				}
				
				else if(strcmp(ch,"Open Youtube")==0||strcmp(ch,"open youtube")==0){
					printf("HERE'S YOUTUBE.....\n");
					char phrase[10000] = "heres youtube";
					char charCommand[10000];
					strcpy(charCommand,"espeak \"");
					strcat(charCommand,phrase);
					strcat(charCommand,"\"");
					system(charCommand);
					system("start https://www.youtube.com");
				}
				
				else if(strcmp(ch,"open gmail")==0||strcmp(ch,"Open gmail")==0){
					printf("SENDING MAIL TO SOMEONE?...\n");
					char phrase[10000] = "Sending mail to someone,... wish i could know her";
					char charCommand[10000];
					strcpy(charCommand,"espeak \"");
					strcat(charCommand,phrase);
					strcat(charCommand,"\"");
					system(charCommand);
					system("start https://www.gmail.com");
				}
			
				else if(strcmp(ch,"Sing a rhyme")==0||strcmp(ch,"sing a rhyme")==0){
					rhyme();
				}
				
				else if(strcmp(ch,"features")==0||strcmp(ch,"Features")==0){
					index();
				}
				
				else if(strcmp(ch,"wish me new year")==0||strcmp(ch,"happy new year")==0){
					printf("HAPPY NEW YEAR SIR!, MAY YOU , HAVE A GOOD YEAR AHEAD");
					char phrase[10000]="happy new year sir may you have a good new year ahead\n";
					char charCommand[10000];
					strcpy(charCommand,"espeak \"");
					strcat(charCommand,phrase);
					strcat(charCommand,"\"");
					system(charCommand);
				}
				
				else{
					printf("AVOID SPELLING MISTAKES IN YOUR COMMAND, TRY AGAIN\n");
					char phrase[10000] = "avoid spelling mistakes in your command, try again";
					char charCommand[10000];
					strcpy(charCommand,"espeak \"");
					strcat(charCommand,phrase);
					strcat(charCommand,"\"");
					system(charCommand);
				}
			}while(1);
		}
		else{
				system("cls");
					printf("\t\t\t---------------------------HELLO THERE--------------------------\n");
					printf("\t\t\t---------------------I AM A VIRTUAL CHAT BOT--------------------\n");
					printf("\t\t\t----------------------I AM HERE TO HELP YOU---------------------\n");
				
				
					printf("\t----------------------------------------\n");
					printf("\t\t | INCORRECT PASSWORD |\n");
					printf("\t----------------------------------------\n");
					char phrase[10000] = "the password is incorrect, try again ";
					char charCommand[10000];
					strcpy(charCommand,"espeak \"");
					strcat(charCommand,phrase);
					strcat(charCommand,"\"");
					system(charCommand);
			}
	}while(1);
	return 0;
}



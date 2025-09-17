#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main (void)
{
	printf("------------system online-----------\n");
	sleep(1);
	  system("cls");
       printf("1  2  3  4  5  6  7  8  9  0\nq  w  e  r  t  y  u  i  o  p\na  s  d  f  g  h  j  k  l  ;\n'  z  x  c  v  b  n  m  ,  .\n");
       sleep(0.9);
       system("cls");
       printf(".-. ..- -. / ... .-.-.- .... .-.-.- .- .-.-.- .--. / ... -.-- ... - . -- / ... -.-- ... - . -- / -.-. --- -- .--. .. .-.. .. -. --. / .--. .-. --- --. .-. .- -- / .---- / .-. ..- -.");
       sleep(0.9);
       system("cls");
       printf(".-. ..- -. / ... .-.-.- .... .-.-.- .- .-.-.- .--. / ... -.-- ... - . -- / ... -.-- ... - . -- / -.-. --- -- .--. .. .-.. .. -. --. / .--. .-. --- --. .-. .- -- / .---- / .-. ..- -. / .--. .-. --- --. .-. .- -- / ..--- / .-. ..- -.");
       sleep(0.9);
       system("cls");
       printf(".-. ..- -. / ... .-.-.- .... .-.-.- .- .-.-.- .--. / ... -.-- ... - . -- / ... -.-- ... - . -- / -.-. --- -- .--. .. .-.. .. -. --. / .--. .-. --- --. .-. .- -- / .---- / .-. ..- -. / .--. .-. --- --. .-. .- -- / ..--- / .-. ..- -. / .--. .-. --- --. .-. .- -- / ...-- / .-. ..- -.");
       sleep(0.9);
       system("cls");
       printf(".-. ..- -. / ... .-.-.- .... .-.-.- .- .-.-.- .--. / ... -.-- ... - . -- / ... -.-- ... - . -- / -.-. --- -- .--. .. .-.. .. -. --. / .--. .-. --- --. .-. .- -- / .---- / .-. ..- -. / .--. .-. --- --. .-. .- -- / ..--- / .-. ..- -. / .--. .-. --- --. .-. .- -- / ...-- / .-. ..- -. / .--. .-. --- --. .-. .- -- / .--. .-. --- .--. . .-. - -.-- ---... --- -.-");
       sleep(0.9);
       system("cls");
log:
  char user[10], pass[10],direction2[12],direction3[3],direction5[20],name1[20],surename1[20],direction12[20],directionx[20],direction_tl[20],direction_link[20];
  char user1[]="admin",pass1[]="pass",name[]="thee",surename[]="sahawat",direction1[]="access_sever",direction4[]="yes",direction8[]="access_helper",direction9[]="help",direction10[]="access_calculator",direction11[]="exit";
  char cal1[]="plus",cal2[]="minus",direction13[]="cam",direction14[]="exit",direction15[]="out",direction16[]="logout",direction17[]="access_pjmm",direction18[]="access_dmm",direction_yes[]="yes",direction_no[]="no",direction19[]="info",direction20[]="welcome",direction21[]="access_xcs";
  char direction22[]="tls",direction23[]="j",direction_a[]="a",direction_d[]="d";
  char cal[20],ps[20],direction_dmm[20];
  int i=0;
  int num1,num2,num3,num4;
do{
  printf("--------S.H.A.P login terminal--------\n");
  printf("if you want to exit enter exit\n------------------------------------\n");
  printf("username:");
  scanf("%s",user);
  printf("password:");
   scanf("%s",pass);
  if(strcmp(user,user1)==0 && strcmp(pass,pass1)==0)
   {
       system("cls");
   	   printf("login successful\n");
   	   printf("welcome to S.H.A.P system\n");
   	   printf("if you don't know command enter help\n\n");
       i=3;
       start:
       printf("what do you want to do:");
       scanf("%s",direction2);
       if(strcmp(direction2,direction1)==0)
       {
       	//sever
       	system("cls");
         printf("-----welcome to S.H.S-----\n");
         SHS:
         printf("do you want to turn on S.H.S system:");
         scanf("%s",direction5);
         if (strcmp(direction5,direction4)==0)
         {
         system("pause");
         system("cls");
         printf("SEVER STAT:STARTING\n");
         sleep(6);
         system("cls");
         printf("SEVER STAT:HALF RUNING\n");
         system("pause");
         system("cls");
         printf("SYSTEM CHEACK LIST\n");
         system("pause");
         system("cls");
         printf("HARDWARE CHEACK:");
         sleep(4);
         system("cls");
         printf("HARDWARE CHEACK:PASSED\n");
         printf("SOFEWARE CHEACK:");
         sleep(4);
         system("cls");
         printf("HARDWARE CHEACK:PASSED\n");
         printf("SOFEWARE CHEACK:PASSED\n");
         printf("STORAGE CHEACK:");
         sleep(4);
         system("cls");
         printf("HARDWARE CHEACK:PASSED\n");
         printf("SOFEWARE CHEACK:PASSED\n");
         printf("STORAGE CHEACK:PASSED\n");
         printf("NETWORK CHEACK:");
         sleep(4);
         system("cls");
         printf("HARDWARE CHEACK:PASSED\n");
         printf("SOFEWARE CHEACK:PASSED\n");
         printf("STORAGE CHEACK:PASSED\n");
         printf("NETWORK CHEACK:PASSED\n");
         system("pause");
         system("cls");
         printf("SYSTEM CHEACK:OK\n");
         printf("SYSTEM STAT:FULL RUNING\n");
         system("pause");
         system("cls");
         goto start;
		 }
		 else if (strcmp(direction5,direction_no)==0)
		 {
		 printf("ok\n");
		 system("pause");
		 system("pause");
		 }
		 else
		 {
		  printf("command not found\n");
		  printf("-----------------\n");
		  system("pause");
		  system("cls");
		  goto SHS;
		 }
       }
       else if (strcmp(direction2,direction17)==0)
       {
       	//P.J.M.M
       	system("cls");
       	printf("WARNING THIS PROGRAM IS FOR ADMIN ONLY\n");
       	printf("name:");
       	scanf("%s",name1);
       	printf("surename:");
       	scanf("%s",surename1);
       	if (strcmp(name,name1)==0 && strcmp(surename,surename1)==0)
       	pjmm:
       	system("cls");
       	printf("hi skye and welcome\n");
       	printf("P .J  . M    . M\n");
       	printf("PROJECT MANAGE MENT\n");
       	printf("new project count:1\n");
       	printf("code list\n");
       	printf("1.access_dmm = door manage ment\n");
       	printf("project selected:");
       	scanf("%s",ps);
       	if (strcmp(ps,direction18)==0)
       	{
       	system("cls");
       	printf("welcome to\n");
       	printf("D  . M    . M\n"); 
       	printf("DOOR MANAGE MENT\n");
       	dmm:
       	printf("do you want to open-close door:");
       	scanf("%s",direction_dmm);
       	if(strcmp(direction_dmm,direction_yes)==0)
       	{
       	system("cls");
       	printf("door moveing\n");
		sleep(4);
		printf("door moved\n");
		system("pause");
		system("cls");
		goto start;	
		}
		else if (strcmp(direction_dmm,direction_no)==0)
		{
		system("cls");
		printf("ok\n");
		system("pause");
		system("cls");
		goto start;
		}
		else
		{
		system("cls");
		printf("command not found\n");
		printf("-----------------\n");
		system("pause");
		system("cls");
		goto dmm;
		}
		}
	   else
	   {
	   	printf("project not found\n");
	   	printf("-----------------\n");
	   	system("pause");
	   	goto pjmm;
	   }
       } 
       else if (strcmp(direction2,direction14)==0)
       {
       	system("cls");
       	return 0;
	   }
       else if (strcmp(direction2,direction8)==0)
       {
       	//helper
       system("cls");
       printf("WARNING:THIS SYSTEM IS FOR ADMIN ONLY\n");
       printf("name:");
       scanf("%s",name1);
       printf("surename:");
       scanf("%s",surename1);
       if (strcmp(name,name1)==0 && strcmp(surename,surename1)==0)
       {
       system("cls");
       printf("helper:good morning/evening skye\n");
       printf("and welcome to\n");
       printf("HUMAN EDUCATION AND LANGUAGE PROTOCOL ELEMENT ROUTER\n");
       printf("H   . E       .     L      . P      . E     . R\n");
       help:
       printf("\ncode list\n");
       printf("1.cam = open camera\n2.out = exit this program\n3.exit = exit\n");
       printf("command:");
       scanf("%s",direction12);
       if (strcmp(direction12,direction13)==0)
       {
       system("cls");
       printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                    camera not found                                     \n\n\n\n\n\n\n\n\n\n\n\n\n\n");
       system("pause");
       system("cls");
       goto help;
	   }
	   //exit
	   else if (strcmp(direction12,direction14)==0)
	   {
	   	system("cls");
	   	return 0;
	   }
	   else if (strcmp(direction12,direction15)==0)
	   {
	   	system("cls");
	   	goto start;
	   }
	   else
	   {
	   	system("cls");
	   	printf("command not found\n");
	   	printf("-----------------\n");
	   	system("pause");
	   	goto help;
	   }
	   }
	   else
	   {
	   system("cls");
	   printf("you don't have permission to access this program\n");
	   printf("------------------------------------------------\n");
	   system("pause");
	   system("cls");
	   goto start;
	   }
	   }
	   else if(strcmp(direction2,direction9)==0)
	   {
	   	//help
	   system("cls");
	   printf("----welcome to help terminal----\n");
	   printf("code list\n");
	   printf("1.access_sever = start S.H.S\n");
	   printf("2.access_calculator = run calculator\n");
	   printf("3.access_helper = run H.E.L.P.E.R (admin only)\n");
	   printf("4.access_pjmm = run P.J.M.M (admin only)\n");
	   printf("5.access_dmm = run door manage ment\n");
	   printf("6.access_xcs = run XCS\n");
	   printf("7.info = show system info\n");
	   printf("8.logout = logout\n");
	   printf("9.exit = exit\n");
	   system("pause");
	   system("cls");
	   goto start;
	   }
	   else if (strcmp(direction2,direction10)==0)
	   {
	   	//calculator
	   	system("cls");
	   	printf("----welcome to calculator----\n");
	   	printf("WARNING:this calculator can only plus-minus\n\n");
	   	system("pause");
	   	system("cls");
	   	cal1:
	   	printf("do you want to plus or minus:");
	   	scanf("%s",cal);
	   	if(strcmp(cal,cal1)==0)
	   	{
	   	system("cls");
	   	printf("plus\n");
		printf("number1:");
		scanf("%d",&num1);
		printf("number2:");
		scanf("%d",&num2);
		int num3=num1+num2;
		printf("\nsum = %d\n",num3);
		system("pause");
		system("cls");
		goto start;	
		}
		else if (strcmp(cal,cal2)==0)
		{
		system("cls");
		printf("minus\n");
		printf("number1:");
		scanf("%d",&num1);
		printf("number2:");
		scanf("%d",&num2);
		int num3=num1-num2;
		printf("\nsum = %d\n",num3);
		system("pause");
		system("cls");
		goto start;
		}
		else
		{
		system("cls");
		printf("command not found\n");
		printf("-----------------\n");
		system("pause");
		system("cls");
		goto cal1;
		}
	   }
	   else if (strcmp(direction2,direction11)==0)
	   {
	   	system("cls");
	   printf("error:command not found\n");
	   printf("-----------------------\n");
	   return 0;
	   }
	   else if (strcmp(direction2,direction16)==0)
	   {
	   	system("cls");
	   	goto log;
	   }
	   else if (strcmp(direction2,direction19)==0)
	   {
	   system("cls");
	   printf("welcome to\n");
	   printf("------S.H.A.P SYSTEM INFO TERMINAL------\n");
	   printf("S.H.A.P system is\n\n");
	   printf("development by");
	   printf(" thee sahawat (skye) No.14 M.1/5 SW2 school\n");
	   printf("inspiration by");
	   printf(" H.E.L.P.E.R SYSTEM by EDWIN MURRAY IN FNAF SOTM\n");
	   printf("--------------------------------------------------------------\n");
	   system("pause");
	   system("cls");
	   goto start;
	   }
	   else if (strcmp(direction2,direction21)==0)
	   {
	   	//xcs
	   	system("cls");
	    printf("welcome to\n");
	    xcs:
	    printf("X C          S\n");
	    printf("X CONNECTION SYSTEM\n");
	    printf("code list\n");
	    printf("1.tls = train link system\n");
	    printf("2.out = exit this projram\n");
	    printf("3.exit = exit projram\n");
	    printf("enter connection:");
	    scanf("%s",directionx);
	    if (strcmp(directionx,direction22)==0)
	    {
	    tls:
	    system("cls");
	    printf("T     L    S\n");
	    printf("TRAIN LINK SYSTEM\n");
	    printf("train system list\n");
	    printf("1.j = J-LINK\n");
	    printf("2.a = ALERT\n");
	    printf("3.out = exit this program\n");
	    printf("4.exit = exit program\n");
	    printf("train system seleact:");
	    scanf("%s",direction_tl);
	    if (strcmp(direction_tl,direction23)==0)
	    {
	    system("cls");
	    printf("J-LINK SYSTEM:OFFLINE");
	    sleep(4);
	    system("cls");
	    printf("J-LINK SYSTEM:ONLINE");
	    sleep(2);
	    system("cls");
	    system("cls");
	    jlink:
	    printf("-");
	    sleep(0.9);
	    system("cls");
	    printf("--");
	    sleep(0.9);
	    system("cls");
	    printf("---");
	    sleep(0.9);
	    system("cls");
	    printf("----");
	    sleep(0.9);
	    system("cls");
	    printf(" ----");
	    sleep(0.9);
	    system("cls");
	    printf("P ----");
	    sleep(0.9);
	    system("cls");
	    printf("UP ----");
	    sleep(0.9);
	    system("cls");
	    printf("OUP ----");
	    sleep(0.9);
	    system("cls");
	    printf("COUP ----");
	    sleep(0.9);
	    system("cls");
	    printf("NCOUP ----");
	    sleep(0.9);
	    system("cls");
	    printf("UNCOUP ----");
	    sleep(0.9);
	    system("cls");
	    printf("Y UNCOP ----");
	    sleep(0.9);
	    printf("CY UNCOUP ----");
	    sleep(0.9);
	    system("cls");
	    printf("NCY UNCOUP ----");
	    sleep(0.9);
	    system("cls");
	    printf("ENCY UNCOUP ----");
	    sleep(0.9);
	    system("cls");
	    printf("GENCY UNCOUP ----");
	    sleep(0.9);
	    system("cls");
	    printf("RGENCY UNCOUP ----");
	    sleep(0.9);
	    system("cls");
	    printf("ERGENCY UNCOUP ----");
	    sleep(0.9);
	    system("cls");
	    printf("MERGENCY UNCOUP ----");
	    sleep(0.9);
	    system("cls");
	    printf("EMERGENCY UNCOUP ----");
	    sleep(0.9);
	    system("cls");
	    printf(" EMERGENCY UNCOUP ----");
	    sleep(0.9);
	    system("cls");
	    printf("K EMERGENCY UNCOUP ----");
	    sleep(0.9);
	    system("cls");
	    printf("NK EMERGENCY UNCOUP ----");
	    sleep(0.9);
	    system("cls");
	    printf("INK EMERGENCY UNCOUP ----");
	    sleep(0.9);
	    system("cls");
	    printf("LINK EMERGENCY UNCOUP ----");
	    sleep(0.9);
	    system("cls");
	    printf("-LINK EMERGENCY UNCOUP ----");
	    sleep(0.9);
	    system("cls");
	    printf("J-LINK EMERGENCY UNCOUP ----");
	    sleep(0.9);
	    system("cls");
	    printf("J-LINK EMERGENCY UNCOUP ----");
	    sleep(0.9);
	    system("cls");
	    printf(" J-LINK EMERGENCY UNCOUP ----");
	    sleep(0.9);
	    system("cls");
	    printf("- J-LINK EMERGENCY UNCOUP ----");
	    sleep(0.9);
	    system("cls");
	    printf("-- J-LINK EMERGENCY UNCOUP ----");
	    sleep(0.9);
	    system("cls");
	    printf("-- J-LINK EMERGENCY UNCOUP ----");
	    sleep(0.9);
	    system("cls");
	    printf("--- J-LINK EMERGENCY UNCOUP ----");
	    sleep(0.9);
	    system("cls");
	    printf("---- J-LINK EMERGENCY UNCOUP ----\n");
	    sleep(1);
	    printf("system loading...\n");
	    sleep(3);
	    system("pause");
	    system("cls");
	    printf("J-LINK REQUEST\n");
	    printf("-----------------------\n");
	    printf("a = accept|d = decline:");
	    scanf("%s",direction_link);
	    if (strcmp(direction_link,direction_a)==0)
	    {
	    system("cls");
	    printf("REQUEST ACCEPT\n");
	    printf("--------------\n");
	    sleep(3);
	    system("cls");
	    printf("J-LINK DOOR CLOSING");
	    sleep(5);
	    system("cls");
	    printf("J-LINK DOOR CLOSED");
	    sleep(3);
	    system("cls");
	    printf("J-LINK UNCOUP in !3!");
	    sleep(1);
	    system("cls");
	    printf("J-LINK UNCOUP in !2!");
	    sleep(1);
	    system("cls");
	    printf("J-LINK UNCOUP in !1!");
	    sleep(1);
	    system("cls");
	    printf("J-LINK UNCOUPLING\n");
	    sleep(7);
	    printf("UNCOUP SUCCESSFUL\n");
	    sleep(2);
	    printf("LATER UNCOUP SPEED SET:80 KM/H\n");
	    sleep(1);
	    printf("UNCOUP BOGIE BREAK SET:FULLBREAK\n");
	    sleep(1);
	    printf("UNCOOP BOGIE SPEED SET:0 KM/H\n");
	    printf("-----------------------------\n");
	    sleep(1);
	    printf("SYSTEM COMPLEATE\n");
	    system("pause");
	    system("cls");
	    goto tls;
		}
		else if (strcmp(direction_link,direction_d)==0)
		{
		system("cls");
		printf("REQUEST DECLINE\n");
		printf("---------------\n");
		system("pause");
		system("cls");
		goto tls;
		}
		else 
		{
		system("cls");
		printf("command not found\n");
		printf("-----------------\n");
		system("pause");
		system("cls");
		goto jlink;
		}
		}
		else if (strcmp(direction_tl,direction_a)==0)
		{
		system("cls");
		printf("----ALERT TERMINAL----\n");
		printf("loading....\n");
		sleep(2);
		system("cls");
		printf("----ALERT TERMINAL----\n\n");
		printf("ALERT:SIGNAL NOT FOUND B-S\ntime 21:29 date 09:22:2031\n\n");
		sleep(1);
		printf("ALERT:J-LINK UNCOOP\n/time 07:37 date 06:19:2031\n\n");
		sleep(1);
		printf("ALERT:EMERGENCY SHUT DOWN ENGIN\ntime 20:23 date 06:13:2031\n\n");
		sleep(1);
		printf("ALERT:SHUT DOWN BOGIE ELECTIRIC 200 POINT\ntime 20:21 date 06:13:2031\n\n");
		sleep(1);
		printf("ALERT:Disable the hydrogen production process\ntime 20:19 date 06:13:2031\n\n");
		sleep(1);
		printf("ALERT:water is too high \n/time 19:24 date 06:13:2031\n\n");
		sleep(1);
		printf("ALERT:Hydrogen is too high\n/time 19:16 date 06:13:2031\n\n");
		sleep(1);
		printf("another alert please chek another file\n");
		sleep(1);
		system("pause");
		goto tls;
		}
	    else if (strcmp(direction_tl,direction15)==0)
	    {
	    system("cls");
	    goto start;
		}
	    else if (strcmp(direction_tl,direction14)==0)
	    {
	    system("cls");
	    return 0;
		}
	    else
	    {
	    system("cls");
	    printf("command not found\n");
	    printf("-----------------\n");
	    system("pause");
	    system("cls");
	    goto tls;
		}
	    }
		else if (strcmp(directionx,direction15)==0)
		{
		system("cls");
		goto start;
		}
		else if (strcmp(directionx,direction14)==0)
		{
		system("cls");
		return 0;
		}
		else 
		{
		system("cls");
		printf("command not found\n");
		printf("-----------------\n");
		system("pause");
		system("cls");
		goto xcs;
		}
		}
	    else if (strcmp(direction2,direction18)==0)
       	{
       	system("cls");
       	printf("welcome to\n");
       	printf("D  . M    . M\n"); 
       	printf("DOOR MANAGE MENT\n");
       	dmm1:
       	printf("do you want to open-close door:");
       	scanf("%s",direction_dmm);
       	if(strcmp(direction_dmm,direction_yes)==0)
       	{
       	system("cls");
       	printf("door moveing\n");
		sleep(4);
		printf("door moved\n");
		system("pause");
		system("cls");
		goto start;	
		}
		else if (strcmp(direction_dmm,direction_no)==0)
		{
		system("cls");
		printf("ok\n");
		system("pause");
		system("cls");
		goto start;
		}
	   }
	   else
	   {
	   system("cls");
	   printf("command not found\n");
	   printf("-----------------\n");
	   system ("pause");
	   system("cls");
	   goto start;
	   }
   }
   else if (strcmp(user,direction14)==0 && strcmp(pass,direction14)==0)
   {
    system("cls");
    return 0;
   }
  else
  {
  	  {
  	 system("cls");
     printf("error:username or password not found\n!!please try again!! %d/3\n",i+1);
     if(i<2)
	 {
      system("pause");
      system("cls");
	 }
	 else
	 {
	 system("cls");
     printf("access denied %d/3",i+1);
     return 0;
    }
    }
  }
  i++;
}
while(i<3);
}

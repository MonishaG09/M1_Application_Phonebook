# Requirements
## Introduction
  * Phonebook is a very simple mini project in C that can help you understand the basic concepts of functions, file handling and data structure. This application will teach you how to add, list, modify or edit, search and delete data to/from the file.

## Research
   * Adding new records, listing them, modifying them and updating, search for contacts saved, and deleting the phonebook records are the basic functions which make up the main menu of this Phonebook application.
   * When you add anything to your phone book, you will be asked for personal information such as name, gender, first name, phone number, nationality, email address, and address.The research of this project is to add new feature such as blood group and date of birth.The new one is very helpful for emergency time who needs which type of blood group and check is the age limit is matched for donating. 
## Features 
  Phonebook application have feautures like
   * Name
   * Gender
   * First name
   * Phone number
   * Natonality 
   * Email address
   * Address
   * Blood group
   * Date of birth
   
## Defining Our System
  This application provides information on adding, viewing, modifying, receiving, and deleting data from/to files. Adding new entries, browsing them, editing and updating, searching for saved contacts, and deleting contacts in the phonebook is one of the most important services that become the main menu in the phonebook application. When you add anything to your phone book, you will be asked for personal information such as name, gender, first name, phone number, nationality, email address, and address. You can then edit, view, search, and delete this text.


## SWOT ANALYSIS
![SWOT analysis](https://user-images.githubusercontent.com/94268410/143008566-985d8d82-2850-49df-8630-4cf435ae96b1.png)


# 4W&#39;s and 1&#39;H

## Who:

 User provides given information to store that application.

## What:

 It is very useful now a days to store complete information under single contact number.

## When:

  It works specifically for easily contacting people whenever any need occurs.

## Where:

  We will implement the application in the world wide users.

## How:

 The contact is saved,if the user done step by step process of application.

# Detail requirements
## High Level Requirements:
 | ID   | Description                                          | Category       | Status      |
| ---- | ---------------------------------------------------- | -------------- | ----------- |
| HR01 | User shall be able to add new contact                | Functional     | In Progress |
| HR02 | User shall be able to add information                | Functional     | In Progress |
| HR03 | User shall be able to edit contact                   | Functional     | In Progress |
| HR04 | User shall be able to delete contact                 | Functional     | In Progress |
| HR05 | User shall be able to save contact in application    | Functional     | In Progress |
| HR06 | User shall be able to read contact from user         | Functional     | In Progress |
| HR07 | Data should not be lost if any failure               | Non-Functional | In Progress |
| HR08 | When closing the system data should always be stored | Non-Functional | In Progress |


##  Low level Requirements:

| ID   | Description                                                                                                                                                                         | HLR ID                 | Status (Implemented/In Progress) |
| ---- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------------------- | -------------------------------- |
| LR01 | (1). New contact shall be added by providing all the information (2). contact name should be unique or else it should not be accepted.   
| HR01                   | In Progress                      |
| LR02 | contact person data should be possible  (1). first being by searching the name of person                                     | HR02                   | In Progress                      |
| LR03 | While searching all the contact, all should be visible if user wants to see more                                                          | HR02                   | In Progress                      |




# Design

## High Level Design 

 Structural and Behavioural Diagram
![image](https://user-images.githubusercontent.com/94268410/143029406-c255ceb9-9cf5-4648-84e1-e7697a4580fd.png)

 ![image](https://user-images.githubusercontent.com/94268410/143030428-9d27bb24-a819-4db0-9231-55e48aa0eee6.png)


Structural and Behavioural Diagram
![Image](https://user-images.githubusercontent.com/94268410/143034091-8d8aae10-68ac-447e-beb2-4d53e8720164.png)

## Low Level Design
![Image](https://user-images.githubusercontent.com/94268410/143188931-c72a3658-a499-40ab-b636-e684d98cc258.png)


# Implementation
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct person
{
    char name[35];
    char address[50];
     char father_name[35];
     char mother_name[30];
    long int mble_no;
    char sex[8];
    char mail[100];
    char citision_no[20];
    };
void menu();
void got();
void start();
void back();
void addrecord();
void listrecord();
void modifyrecord();
void deleterecord();
void searchrecord();
int main()
{
    system("color 5f");
    start();
    return 0;
}
void back()
{
    start();
}
void start()
{
    menu();
}
void menu()
{
    system("cls");
printf("\t\t**********WELCOME TO PHONEBOOK*************");
printf("\n\n\t\t\t  MENU\t\t\n\n");
printf("\t1.Add New   \t2.List   \t3.Exit  \n\t4.Modify \t5.Search\t6.Delete");
switch(getch())
{
    case '1':addrecord();
    break;
   case '2': listrecord();
    break;
    case '3': exit(0);
    break;
    case '4': modifyrecord();
    break;
    case '5': searchrecord();
    break;
    case '6': deleterecord();
    break;
    default:
                system("cls");
                printf("\nEnter 1 to 6 only");
                printf("\n Enter any key");
                getch();
menu();
}
}
        void addrecord(){
        system("cls");
        FILE *f;
        struct person p;
        f=fopen("project","ab+");
        printf("\n Enter name: ");
        got(p.name);
        printf("\nEnter the address: ");
        got(p.address);
        printf("\nEnter father name: ");
        got(p.father_name);
        printf("\nEnter mother name: ");
        got(p.mother_name);
        printf("\nEnter phone no.:");
        scanf("%ld",&p.mble_no);
        printf("Enter sex:");
        got(p.sex);
        printf("\nEnter e-mail:");
         got(p.mail);
        printf("\nEnter citizen no:");
        got(p.citision_no);
        fwrite(&p,sizeof(p),1,f);
        fflush(stdin);
        printf("\nrecord saved");

fclose(f);
    printf("\n\nEnter any key");
    getch();
    system("cls");
    menu();
}
void listrecord()
{
    struct person p;
    FILE *f;
f=fopen("project","rb");
if(f==NULL)
{
printf("\nfile opening error in listing :");
exit(1);
}
while(fread(&p,sizeof(p),1,f)==1)
{
     printf("\n\n\n YOUR RECORD IS\n\n ");
        printf("\nName=%s\nAdress=%s\nFather name=%s\nMother name=%s\nMobileno=%ld\nSex=%s\nE-mail=%s\nCitizen no=%s",p.name,p.address,p.father_name,p.mother_name,p.mble_no,p.sex,p.mail,p.citision_no);

     getch();
     system("cls");
}
fclose(f);
 printf("\n Enter any key");
 getch();
    system("cls");
menu();
}
void searchrecord()
{
    struct person p;
FILE *f;
char name[100];
f=fopen("project","rb");
if(f==NULL)
{
    printf("\n error in opening\a\a\a\a");
    exit(1);
}
printf("\nEnter name of person to search\n");
got(name);
while(fread(&p,sizeof(p),1,f)==1)
{
    if(strcmp(p.name,name)==0)
    {
        printf("\n\tDetail Information About %s",name);
        printf("\nName:%s\naddress:%s\nFather name:%s\nMother name:%s\nMobileno:%ld\nsex:%s\nE-mail:%s\nCitision no:%s",p.name,p.address,p.father_name,p.mother_name,p.mble_no,p.sex,p.mail,p.citision_no);
    }
        else
        printf("file not found");
}
 fclose(f);
  printf("\n Enter any key");

     getch();
    system("cls");
menu();
}
void deleterecord()
{
    struct person p;
    FILE *f,*ft;
    int flag;
    char name[100];
    f=fopen("project","rb");
    if(f==NULL)
        {
            printf("CONTACT'S DATA NOT ADDED YET.");
        }
    else
    {
        ft=fopen("temp","wb+");
        if(ft==NULL)

            printf("file opaning error");
        else
        {
        printf("Enter CONTACT'S NAME:");
        got(name);

        fflush(stdin);
        while(fread(&p,sizeof(p),1,f)==1)
        {
            if(strcmp(p.name,name)!=0)
                fwrite(&p,sizeof(p),1,ft);
            if(strcmp(p.name,name)==0)
                flag=1;
        }
    fclose(f);
    fclose(ft);
    if(flag!=1)
    {
        printf("NO CONACT'S RECORD TO DELETE.");
        remove("temp.txt");
    }
        else
        {
            remove("project");
            rename("temp.txt","project");
            printf("RECORD DELETED SUCCESSFULLY.");
        }
    }
}
 printf("\n Enter any key");

     getch();
    system("cls");
menu();
}

void modifyrecord()
{
    int c;
    FILE *f;
    int flag=0;
    struct person p,s;
    char  name[50];
    f=fopen("project","rb+");
    if(f==NULL)
        {
            printf("CONTACT'S DATA NOT ADDED YET.");
            exit(1);
        }
    else
    {
        system("cls");
        printf("\nEnter CONTACT'S NAME TO MODIFY:\n");
            got(name);
            while(fread(&p,sizeof(p),1,f)==1)
            {
                if(strcmp(name,p.name)==0)
                {
                    printf("\n Enter name:");
                    got(s.name);
                    printf("\nEnter the address:");
                    got(s.address);
                    printf("\nEnter father name:");
                    got(s.father_name);
                    printf("\nEnter mother name:");
                    got(s.mother_name);
                    printf("\nEnter phone no:");
                    scanf("%ld",&s.mble_no);
                    printf("\nEnter sex:");
                    got(s.sex);
                    printf("\nEnter e-mail:");
                    got(s.mail);
                    printf("\nEnter citizen no\n");
                    got(s.citision_no);
                    fseek(f,-sizeof(p),SEEK_CUR);
                    fwrite(&s,sizeof(p),1,f);
                    flag=1;
                    break;
                }
                fflush(stdin);
            }
            if(flag==1)
            {
                printf("\n your data id modified");
            }
            else
            {
                    printf(" \n data is not found");
            }
            fclose(f);
    }
     printf("\n Enter any key");
     getch();
    system("cls");
    menu();
}
void got(char *name)
{
   int i=0,j;
    char c,ch;
    do
    {
        c=getch();
                if(c!=8&&c!=13)
                {
                    *(name+i)=c;
                        putch(c);
                        i++;
                }
                if(c==8)
                {
                    if(i>0)
                    {
                        i--;
                    }
                   // printf("h");
                    system("cls");
                    for(j=0;j<i;j++)
                    {
                        ch=*(name+j);
                        putch(ch);
                    }
                }
    }while(c!=13);
      *(name+i)='\0';
}

# TestPlan And Output
# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |--------------------------------------------------------------|  ------------|-------------|----------------|Requirement based |
|  H_02       |--------------------------------------------------------------|  ------------|-------------|----------------|Scenario based    |
|  H_03       |--------------------------------------------------------------|  ------------|-------------|----------------|Boundary based    |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |--------------------------------------------------------------|  ------------|-------------|----------------|Requirement based |
|  L_02       |--------------------------------------------------------------|  ------------|-------------|----------------|Scenario based    |
|  L_03       |--------------------------------------------------------------|  ------------|-------------|----------------|Boundary based    |



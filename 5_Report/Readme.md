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



# TestPlan And Output
# TEST PLAN:

## Table no: High level test plan
| **Test ID**| **Description** |**Expected Output** | **Actual Output** | **Pass/fail(Result)**
|--|--|--|--|--|
| H_01| Check if the new contact is created or not| SUCCESS  | SUCCESS | PASS
| H_02 |Check if the contact information is updated or not | SUCCESSS | SUCCESS| PASS 
| H_03 | Check if the contact is modified |  CONTACTS  | SUCCESS | PASS
| H_04 |Check if the contact is saved | SUCCESSS | SUCCESS| PASS 
| H_05 | Check if the contact is saved| SUCCESS  | SUCCESS | PASS

## Table no: Low level test plan

| **Test ID**  | **Description**                                                                                     | **Exp IN**                                      | **Exp OUT**       | **Actual Out**    | 
| ---------- | --------------------------------------------------------------------------------------------------- | ----------------------------------------------- | ----------------- | ----------------- | 
| L_01       | During the contact saving check if contact is unique in that application                                            | Name                     | SUCCESS           | SUCCESS           | 
| L_01_02      |  During saving if name alrady exists, do not allow for saving                                      | Name and other                 | NAME_ALREADY_EXISTS | NAME_ALREADY_EXISTS | 
| L_03       | Check if contact is properly saved                                           | Name and other information | SUCCESS           | SUCCESS           | 
| L_04          | if data is collected from file during when the user needed | contact file | SUCCESS           | SUCCESS           | 
| L_05        | If the contact is removed then delete              | contact           | SUCCESS           | SUCCESS           | 




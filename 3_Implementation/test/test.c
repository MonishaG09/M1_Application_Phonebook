#include "unity.h"
#include <Phonebook.h>

/* Modify these two lines according to the project */
#include <phonebook.h>
#define PROJECT_NAME    "Phonebook"

/* Prototypes for all the test functions */
void test_Name(void);
void test_Address(void);
void test_Sex(void);
void test_Bloodgroup(void);
void test_DOB(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
  /* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_Name);
  RUN_TEST(test_Address);
  RUN_TEST(test_sex);
  RUN_TEST(test_Bloodgroup);
   RUN_TEST(test_DOB);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

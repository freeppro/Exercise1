#include "Employee.h"
#include <string.h>
#include <iostream>
#include "Manager.h"

Employee::Employee(int id, char* name)
   {
   ID = id;
   Employee::name = new char[strlen(name)+1]; // 20130918 increased 1 on array size
   strcpy(Employee::name, name);
   boss = 0;
   hours = 0;
   }


Employee::~Employee()
   {
   if(name)
      delete [] name;
   }

void Employee::setBoss(Manager* newBoss)
   {
   boss = newBoss;
   }

void Employee::work(int numOfHours)
   {
   hours += numOfHours;
   }

void Employee::report()
   {
   if(boss)
      {
      boss->getWorkerHours(this);
      hours = 0;
      }
   }

int Employee::getHours()
   {
   return hours;
   }

int Employee::getID()
   {
   return ID;
   }

// 20130918 added getId() function
char* Employee::getName()
   {
   return name;
   }

#include "Employee.h"
#include <string.h>
#include <iostream>
#include "Manager.h"

Employee::Employee(int id, char* name)
   {
   ID = id;
   Employee::name = new char[strlen(name)+1];
   strcpy(Employee::name, name);
   boss = 0;
   hours = 0;
   }


Employee::~Employee()
   {
   if(Employee::name)
      delete [] Employee::name;
   }

void Employee::setBoss(const Manager& newBoss)
   {
   boss = (Manager*) &newBoss;
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

char* Employee::getName()
	{
		return name;
	}


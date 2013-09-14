class Manager;

class Employee
   {
   private:
      int ID;
      char* name;
      Manager* boss;
      int hours;
   protected:
   public:
      Employee(int id, char* name);
      ~Employee();
      void setBoss(const Manager& newBoss);
      void work(int numOfHours);
      void report();
      int getHours();
      int getID();
      char* getName();
   };
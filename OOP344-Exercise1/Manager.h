class Employee;

class Manager
   {
   private:
      int totalHours;
   protected:
   public:
      Manager();

      void getWorkerHours(Employee* emp);

      void report();
   };
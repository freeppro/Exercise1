class Employee;

class Manager
   {
   private:
      int totalHours;
   protected:
   public:   // 20130918 modified from private to public
      Manager();

      void getWorkerHours(Employee* emp);

      void report();
   };
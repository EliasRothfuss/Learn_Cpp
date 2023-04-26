#include <stdint.h>

#include <iostream>

int32_t id = 42;

class Student
{
   public:
    int16_t num_of_exams = 0;
    int32_t id_number;
    std::string name;

    Student(std::string par_name, int32_t par_id, int32_t par_bank_account_number) : name{par_name}
    {
        id_number = par_id;
        bank_account_number = par_bank_account_number;
    }
    void print() const
    {
        std::cout << "Name " << name << std::endl;
        std::cout << "Exams " << num_of_exams << std::endl;
        std::cout << "ID " << id_number << std::endl;
        std::cout << "Bank " << bank_account_number << std::endl;
    }
    void update_bank_account(int32_t par_bank_account_number)
    {
        bank_account_number = par_bank_account_number;
        std::cout << "update successful" << std::endl;
    }

   private:
    int32_t bank_account_number;
};

auto main() -> int
{
    Student student("Elias", 42, 221013);
    student.print();
    student.update_bank_account(1121687);
    student.print();

    return 0;
}
#include <iostream>

class School{

protected:
    std::string name;
    size_t num_of_students;

public:
    School(){
        name = "";
        num_of_students = 0;
    }
    School(std::string const& input_name, size_t input_num){
        name = input_name;
        num_of_students = input_num;
    }
    void print(){
        std::cout << name << std::endl;
        std::cout << num_of_students << std::endl;
    }    
};

class SpecialSchool: School{
    std::string specialization;

public:
    SpecialSchool(){
        specialization = "";
        num_of_students = 0;
        name = "";
    }
    SpecialSchool(std::string const& input_name, size_t input_num, std::string const& input_spec){
        name = input_name;
        num_of_students = input_num;
        specialization = input_spec;
    }
    void print(){
        School::print();
        std::cout << specialization << std::endl;
    }   
};

template <class input>
void Print(input name){
    name.print();
}
int main(){
    School school1{"14214", 450};
    SpecialSchool school2{"2997", 600, "Math"};
    school1.print();
    school2.print();
    Print(school1);
    Print(school2);
    return 0;
}
#include <iostream>
#include <string_view>
using namespace std;

class Dog{
    private:
        string name;
        string breed;
        int* p_age{nullptr};
    
    public:
        Dog()=default;
        Dog(string_view name_param, string_view breed_param, int age_param);
        ~Dog();
        
};

        Dog::Dog(string_view name_param, string_view breed_param, int age_param){
            name = name_param;
            breed = breed_param;
            p_age = new int;
            *p_age = age_param;
            cout << "constructor called for " << name << endl;

        }
        Dog::~Dog(){
            delete p_age;
            cout << "destructor called for " << name << endl;
        }
        void some_func(){
            Dog my_dog("Fluffy","Shepherd",2);   
        }



int main() {
// Dog my_dog("Fluffy","Shepherd",2);   
some_func();
    cout << "end" << endl;
return 0;
}
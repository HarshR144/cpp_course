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
        //setters 
        /*
        Dog* set_dog_name(string_view name);     //use 2 thispointer
        Dog* set_dog_breed(string_view breed);
        Dog* set_dog_age(int p_age);
        */

        Dog& set_dog_name(string_view name);  
        Dog& set_dog_breed(string_view breed);
        Dog& set_dog_age(int p_age);
        
        
        void dog_info();
};

        Dog::Dog(string_view name_param, string_view breed_param, int age_param){
            name = name_param;
            breed = breed_param;
            p_age = new int;
            *p_age = age_param;
            cout << "constructor called for " << name << " at "<< this << endl;  //use 1 of thispointer

        }
        Dog::~Dog(){
            delete p_age;
            cout << "destructor called for " << name << " at "<< this << endl;  //use 1 of thispointer
        }
        /*
        Dog* Dog::set_dog_name(string_view name){
            // name = name;    //member variable and parameter have same name
            this->name = name;  //error resolved using this
        return this;
        }
        Dog* Dog::set_dog_breed(string_view breed){
            this->breed = breed;
        return this;
        }
        Dog* Dog::set_dog_age(int p_age){
            *(this->p_age) = p_age;
        return this;
        }*/
        Dog& Dog::set_dog_name(string_view name){
            // name = name;    //member variable and parameter have same name
            this->name = name;  //error resolved using this
        return * this;
        }
        Dog& Dog::set_dog_breed(string_view breed){
            this->breed = breed;
        return *this;
        }
        Dog& Dog::set_dog_age(int p_age){
            *(this->p_age) = p_age;
        return *this;
        }


        void Dog::dog_info(){
            cout << "Dog (" << this  << ") : [ name : " << name << " breed : " << breed << " age : " << *p_age << " ]"<< endl;        }



int main() {
Dog my_dog("Fluffy","Shepherd",2);   
my_dog.dog_info();
/*
my_dog.set_dog_name("Tommy"); 
my_dog.set_dog_breed("Wire Fox Terrier"); 
my_dog.set_dog_age(1);
*/

// chained calls using pointer
// my_dog.set_dog_name("Tommy")->set_dog_breed("Wire Fox Terrier")->set_dog_age(1);
  
// chained calls using refrences
 my_dog.set_dog_name("Tommy").set_dog_breed("Wire Fox Terrier").set_dog_age(1);
    
my_dog.dog_info();
 cout << "end" << endl;
return 0;
}
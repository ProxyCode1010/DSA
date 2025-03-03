// #include<iostream>
// #include"oopsDuplicatehero.cpp"
// using namespace std;
// class Hero{   //Creating class
//     //properties
//     //int health;   --In this case only 1 byte is allocated to them for tracking/identification if we remove this to comment than its be size of int
// };  
// int main(){
//     //Creation of Object
//     Hero h1;
//     cout<<"Size : "<<sizeof(h1)<<endl;
//     oopsDuplicatehero h2;
//     cout<<"Size : "<<sizeof(h2)<<endl;
//     return 0;
// }


//Acecss modifiers
// #include<iostream>
// using namespace std;
// class Hero{
//     //properties
//     public:  //--> Access anywhere
//     int health;
//     private: //--> Acess only in class
//     char level;

//     void print(){
//         cout<< level <<endl;
//     }

// };
// int main(){
//     //Creation of object
//     Hero ramesh;
//     cout<<"Health is: "<<ramesh.health<<endl;
//     cout<<"Level is: "<<ramesh.level<<endl;
// }




// #include<iostream>
// using namespace std;
// class Hero{
//     //properties
//     public:  //--> Access anywhere
//     int health;
//     char level;

//     void print(){
//         cout<< level << endl;
//     }

// };
// int main(){
//     //Creation of object
//     Hero ramesh;
//     ramesh.health = 70;
//     ramesh.level = 'A';
//     cout<<"Health is: "<<ramesh.health<<endl;
//     cout<<"Level is: "<<ramesh.level<<endl;
// }


// //Getter && Setter
// #include<iostream>
// using namespace std;
// class Hero{
//     //properties
//     private:
//     int health;
//     public:
//     char level;
//     void print(){
//         cout<< level<<endl;
//     }
//     int getHealth(){
//         return health;
//     }
//     char getlevel(){
//         return level;
//     }
//     void setHealth(int h){   //We also apply password type thing here by using if loop   
//         health = h;
//     }
//     void setLevel(char ch){
//         level = ch;
//     }
// };
// int main(){
//     //Creation of object
//     Hero ramesh;
//     cout<<"Size of ramesh is : "<<sizeof(ramesh)<<endl;   //Here size will be 8 how??
//     cout<<"Ramesh Health is: "<<ramesh.getHealth()<<endl;
//     //use setter
//     ramesh.setHealth(70);
//     ramesh.level = 'A';
//     cout<<"Health is: "<<ramesh.getHealth()<<endl;
//     cout<<"Level is: "<<ramesh.level<<endl;
//     // ramesh.setLevel('B');    //-->Doubt
//     // cout<<"Level is: "<<ramesh.setLevel()<<endl; 
// }


// //Static vs Dynamic allocation
// #include<iostream>
// using namespace std;
// class Hero{
//     //properties
//     private:
//     int health;
//     public:
//     char level;
//     void print(){
//         cout<< level<<endl;
//     }
//     int getHealth(){
//         return health;
//     }
//     char getlevel(){
//         return level;
//     }
//     void setHealth(int h){  
//         health = h;
//     }
//     void setLevel(char ch){
//         level = ch;
//     }
// };
// int main(){
//     //Static allocation
//     Hero a;
//     a.setHealth(80);
//     a.setLevel('A');
//     cout<<"Level is "<<a.level<<endl;
//     cout<<"Health is "<<a.getHealth()<<endl;

//     //Dynamic allocation
//     Hero *b =  new Hero;
//     b->setLevel('A');
//     b->setHealth(90);
//     cout<<"Level is "<<(*b).level<<endl;
//     cout<<"Health is "<<(*b).getHealth()<<endl;
//        //OR
//     cout<<"Level is "<<b->level<<endl;
//     cout<<"Health is "<<b->getHealth()<<endl;
// }


// //Constructor(Default and Parametrised) and this keyword
// #include<iostream>
// using namespace std;
// class Hero{
//     public:
//     int health;
//     char level;
    
//     //Default Constructor  -- if we called then what compiler made as a constructor that will die!!!
//     Hero(){
//         cout<<"Constructor called :"<<endl;
//     }

//     //Paramerterised Constructor   -- (this keyword - current object address store in this) without this value will resigned to nearest health box again
//     Hero(int health){
//         cout<<"this : "<<this<<endl;
//         this -> health = health;
//     }
//     Hero(int health, char level){
//         this -> level = level;
//         this -> health = health;
//     }
//     void print(){
//         cout<<level<<endl;
//     }
//     int getHealth(){
//         return health;
//     }
// };
// int main(){
//     cout<<"Hi "<<endl;
//     //static
//     Hero ramesh(10);
//     ramesh.print();
//     cout<<"Address of ramesh "<<&ramesh<<endl;
//     ramesh.getHealth();
//     cout<<"Welcome "<<endl;
//     //dynamic
//     //Hero *b = new Hero;
//       //or
//     Hero *b = new Hero(11);
//     b-> print();

//     Hero temp(22,'B');
//     temp.print();
// }


// //Copy Constructor and Shallow and Deep Copy
// #include<iostream>
// #include<cstring>
// using namespace std;
// class Hero{
//     public:
//     int health;
//     char level;
//     char *name;
//     Hero(){
//         cout<<"Default Constructor called"<<endl;
//         name = new char[100];
//     }
//     Hero(int health, char level){
//         this -> level = level;
//         this -> health = health;
//     }
//     //Copy Constructor  -- if we want to use default constructor than we have to comment out this -- in deep we again take use of it
//     Hero(Hero& temp){
//         char *ch = new char[strlen(temp.name) + 1];
//         strcpy(ch, temp.name);
//         this->name = ch; 
//         cout<<"Copy Constructor called "<<endl;
//         this -> level = temp.level,
//         this -> health = temp.health;
//     }
//     void print(){
//         cout<<endl;
//         cout<<" [Name : "<< this -> name<<" ,";
//         cout<<" Health : "<< this -> health<<" ,";
//         cout<<" Level : "<< this -> level<<" ]"<<endl;;
//     }
//     void setName(char name[]){
//         strcpy(this->name, name);
//     }
// };
// int main(){
//     Hero hero1;
//     hero1.health = 80;
//     hero1.level = 'A';
//     char name[8] = "Dheeraj";
//     hero1.setName(name);
//     //hero1.print();

//     //use default copy constructor
//     Hero hero2(hero1);
//     //hero2.print();
//     cout<<endl;
//     cout<<"  Let's play"<<endl;
//     hero1.name[0] = 'N';
//     hero1.print();
//     hero2.print();  //how hero2 is also change -- here shallow copy concept come in role same memory using pointer but different name as hero1 and hero2
//     //Shallow copy use default constructor
//     //Deep copy case we use our own constructor
    
//     //Assignment Operator
//     hero1 = hero2;
//     hero1.print();
//     hero2.print();

//     // Hero suresh(70, 'C');   //here default constructor not called
//     // suresh.print();
//     // //Copying Constructor
//     // Hero ritesh(suresh);
//     // ritesh.print();
// }


// //Destructor --memory de-allocate
// #include<iostream>
// using namespace std;
// class Hero{
//     public:
//     int health;
//     int marks;
//     //Constructor
//     Hero(){
//         cout<<"Simple Constructor called"<<endl;
//     }
//     //Destructor
//     //static allocation - destructor automatically call
//     //dynamic allocation - destructor manually call -- usind delete
//     ~Hero(){
//         cout<<"Destructor called"<<endl;
//     }
// };
// int main(){
//     //static
//     Hero a;
//     cout<<sizeof(Hero)<<endl;  //want to deallocate this 8 byte memory

//     //dynamic
//     Hero *b = new Hero();
//     //manually destructor called
//     delete b;
    
//     return 0;
// }


// // Static keyword and Static function
// #include<iostream>
// using namespace std;
// class Hero{
//     public:
//     int health;
//     char level;
//     static int timeToComplete;
    
//     //Default Constructor  -- if we called then what compiler made as a constructor that will die!!!
//     Hero(){
//         cout<<"Constructor called :"<<endl;
//     }

//     //Paramerterised Constructor   -- (this keyword - current object address store in this) without this value will resigned to nearest health box again
//     Hero(int health){
//         cout<<"this : "<<this<<endl;
//         this -> health = health;
//     }
//     Hero(int health, char level){
//         this -> level = level;
//         this -> health = health;
//     }
//     void print(){
//         cout<<level<<endl;
//     }
//     int getHealth(){
//         return health;
//     }
//     //Static function
//     static int random(){
//         return timeToComplete;
//     }
// };
// int Hero::timeToComplete = 5;
// int main(){
//     cout<< Hero::random() <<endl;

//     // cout<< Hero::timeToComplete<<endl; //This is recommended
//     // //using object
//     // Hero a;
//     // cout<<a.timeToComplete<<endl;   //This not recommended
//     // Hero b;
//     // b.timeToComplete = 10;
//     // cout<<a.timeToComplete<<endl;
//     // cout<<b.timeToComplete<<endl;
//     // cout<<Hero::timeToComplete<<endl;
// }



//Encapsulation
// #include<iostream>
// using namespace std;
// class Student{
//     private:
//     string name;
//     int age;
//     int height;
//     public:
//     int getAge(){
//         return this->age;
//     }
// };
// int main(){
//     Student first;
//     cout<<"Everything is well"<<endl;
//     return 0;
// }


//Access Modifiers and inheritance
//Inheritance (Public + Public = Public)
// #include<iostream>
// using namespace std;
// class Human{
//     public:
//     int height;
//     int weight;
//     private:
//     int age;
//     public:
//     int getAge(){
//         return this->age;
//     }
//     void setweight(int v){
//         this->weight =v;
//     }
// };
// class Male: public Human{
//     public:
//     string color;
//     void sleep(){
//         cout<<"Male sleeping"<<endl;
//     }
// };
// int main(){
//     // Male m1;
//     // cout<< m1.height <<endl;   //random value

//     // Male object1;
//     // //cout<<object1.age<<endl;   //throwing age its be in private
//     // //cout<<getAge()<<endl;
//     // cout<<object1.weight<<endl;
//     // cout<<object1.height<<endl;
//     // cout<<object1.color<<endl;
// }


// // Inheritance (Public + Proteted = Protected -- for accessing it's using getter/setter)
// #include<iostream>
// using namespace std;
// class Human{
//     public:
//     int height;
//     int weight;
//     private:
//     int age;
//     public:
//     int getAge(){
//         return this->age;
//     }
//     void setweight(int v){
//         this->weight =v;
//     }
// };
// class Male: protected Human{
//     public:
//     string color;
//     void sleep(){
//         cout<<"Male sleeping"<<endl;
//     }
//     int getHeight(){
//         return this-> height;
//     }
// };
// int main(){
//     Male m1;
//     cout<<m1.getHeight()<<endl;
// }


// // Inheritance (Public + Private = Private)
// #include<iostream>
// using namespace std;
// class Human{
//     public:
//     int height;
//     int weight;
//     private:
//     int age;
//     public:
//     int getAge(){
//         return this->age;
//     }
//     void setweight(int v){
//         this->weight =v;
//     }
// };
// class Male: private Human{
//     public:
//     string color;
//     void sleep(){
//         cout<<"Male sleeping"<<endl;
//     }
//     int getHeight(){
//         return this-> height;
//     }
// };
// int main(){
//     Male m1;
//     //cout<<m1.height<<endl;  --Giving error
//     cout<<m1.getHeight()<<endl;
// }


// //Inheritance (Protected + Public = Protected)
// #include<iostream>
// using namespace std;
// class Human{
//     protected:
//     int height;
//     int weight;
//     private:
//     int age;
//     public:
//     int getAge(){
//         return this->age;
//     }
//     void setweight(int v){
//         this->weight =v;
//     }
// };
// class Male: public Human{
//     public:
//     string color;
//     void sleep(){
//         cout<<"Male sleeping"<<endl;
//     }
//     int getHeight(){
//         return this-> height;
//     }
// };
// int main(){
//     Male m1;
//     cout<<m1.getHeight()<<endl;
// }


// // Inheritance (Protected + Private = Private)
// #include<iostream>
// using namespace std;
// class Human{
//     protected:
//     int height;
//     int weight;
//     private:
//     int age;
//     public:
//     int getAge(){
//         return this->age;
//     }
//     void setweight(int v){
//         this->weight =v;
//     }
// };
// class Male: private Human{
//     public:
//     string color;
//     void sleep(){
//         cout<<"Male sleeping"<<endl;
//     }
//     int getHeight(){
//         return this-> height;
//     }
// };
// int main(){
//     Male m1;
//     cout<<m1.getHeight()<<endl;
// }


// //Inheritance (Protected + Protected = Protected)
// #include<iostream>
// using namespace std;
// class Human{
//     protected:
//     int height;
//     int weight;
//     private:
//     int age;
//     public:
//     int getAge(){
//         return this->age;
//     }
//     void setweight(int v){
//         this->weight =v;
//     }
// };
// class Male: protected Human{
//     public:
//     string color;
//     void sleep(){
//         cout<<"Male sleeping"<<endl;
//     }
//     int getHeight(){
//         return this-> height;
//     }
// };
// int main(){
//     Male m1;
//     cout<<m1.getHeight()<<endl;
// }


// //Inheritance (Private + Public = Not accessible)
// #include<iostream>
// using namespace std;
// class Human{
//     private:
//     int height;
//     int weight;
//     private:
//     int age;
//     public:
//     int getAge(){
//         return this->age;
//     }
//     void setweight(int v){
//         this->weight =v;
//     }
// };
// class Male: public Human{
//     public:
//     string color;
//     void sleep(){
//         cout<<"Male sleeping"<<endl;
//     }
//     int getHeight(){
//         return this-> height;
//     }
// };
// int main(){
//     Male m1;
//     //cout<<m1.height<<endl;
//     cout<<m1.getHeight()<<endl;  // --Not accessible
// }


// //Inheritance (Private + Private = Not accessible)
// #include<iostream>
// using namespace std;
// class Human{
//     private:
//     int height;
//     int weight;
//     private:
//     int age;
//     public:
//     int getAge(){
//         return this->age;
//     }
//     void setweight(int v){
//         this->weight =v;
//     }
// };
// class Male: private Human{
//     public:
//     string color;
//     void sleep(){
//         cout<<"Male sleeping"<<endl;
//     }
//     int getHeight(){
//         return this-> height;
//     }
// };
// int main(){
//     Male m1;
//     //cout<<m1.height<<endl;
//     cout<<m1.getHeight()<<endl;  // --Not accessible
// }


// //Inheritance (Private + Protected = Not accessible)
// #include<iostream>
// using namespace std;
// class Human{
//     private:
//     int height;
//     int weight;
//     private:
//     int age;
//     public:
//     int getAge(){
//         return this->age;
//     }
//     void setweight(int v){
//         this->weight =v;
//     }
// };
// class Male: public Human{
//     protected:
//     string color;
//     void sleep(){
//         cout<<"Male sleeping"<<endl;
//     }
//     int getHeight(){
//         return this-> height;
//     }
// };
// int main(){
//     Male m1;
//     //cout<<m1.height<<endl;
//     cout<<m1.getHeight()<<endl;  // --Not accessible
// }


// //Single Inheritance
// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     int age;
//     int weight;
//     public:
//     void speak(){
//         cout<<"Speaking"<<endl;
//     }
// };
// class Dog: public Animal{

// };
// int main(){
//     Dog d;
//     d.speak();
//     cout<<d.age<<endl;
// }


// //Mulilevel Inheritance
// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     int age;
//     int weight;
//     public:
//     void speak(){
//         cout<<"Speaking"<<endl;
//     }
// };
// class Dog: public Animal{

// };
// class GermanShepherd: public Dog{

// };
// int main(){
//     GermanShepherd d;
//     d.speak();
//     cout<<d.age<<endl;
//     return 0;
// }


// //Mulitple Inheritance
// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     int age;
//     int weight;
//     public:
//     void bark(){
//         cout<<"Barking"<<endl;
//     }
// };
// class Human{
//     public:
//     string color;
//     public:
//     void speak(){
//         cout<<"Speaking"<<endl;
//     }
// };
// class Hybrid: public Animal, public Human{

// };
// int main(){
//     Hybrid d;
//     d.speak();
//     d.bark();
//     cout<<d.age<<endl;
// }


// //Hybrid Inheritance
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     void func1(){
//         cout<<"Inside function 1"<<endl;
//     }
// };
// class B: public A{
//     public:
//     void func2(){
//         cout<<"Inside function 2"<<endl;
//     }
// };
// class C: public A{
//     public:
//     void func3(){
//         cout<<"Inside function 3"<<endl;
//     }
// };
// int main(){
//     A object1;
//     object1.func1();

//     B object2;
//     object2.func1();
//     object2.func2();

//     C object3;
//     object3.func1();
//     //object3.func2();  --Not accessible
//     object3.func3();
//     return 0;
// }


// //Hierarchical Inheritance
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     void func1(){
//         cout<<"Inside function 1"<<endl;
//     }
// };
// class B: public A{
//     public:
//     void func2(){
//         cout<<"Inside function 2"<<endl;
//     }
// };
// class C: public A{
//     public:
//     void func3(){
//         cout<<"Inside function 3"<<endl;
//     }
// };
// int main(){
//     A object1;
//     object1.func1();

//     B object2;
//     object2.func1();
//     object2.func2();

//     C object3;
//     object3.func1();
//     //object3.func2();  --Not accessible
//     object3.func3();
//     return 0;
// }


// //Hybrid Inheritance
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     void func1(){
//         cout<<"Inside function 1"<<endl;
//     }
// };
// class D{
//     public:
//     void func4(){
//         cout<<"Inside function 4"<<endl;
//     }
// };
// class B: public A{
//     public:
//     void func2(){
//         cout<<"Inside function 2"<<endl;
//     }
// };
// class C: public A, public D{
//     public:
//     void func3(){
//         cout<<"Inside function 3"<<endl;
//     }
// };
// int main(){
//     A object1;
//     object1.func1();

//     B object2;
//     object2.func1();
//     object2.func2();

//     C object3;
//     object3.func1();
//     //object3.func2();  --Not accessible
//     object3.func3();
//     object3.func4();
//     return 0;
// }


// //Inheritance Ambiguity
// #include<iostream>
// using namespace std;
// // class A{
// //     public:
// //     void func(){
// //         cout<<"I am A"<<endl;
// //     }
// // };
// // class B{
// //     public:
// //     void func(){
// //         cout<<"I am B"<<endl;
// //     }
// // };
// // class C: public A, public B{

// // };
// class final{
//     public:
//     void sayHello(){
//         cout<<"Hello Dear"<<endl;
//     }
//     int sayHello(string name, int n){
//         cout<<"Hello again"<<endl;
//         return n;
//     }
//     int sayHello(char name){
//         cout<<"Hello again"<<endl;
//         return 1;
//     }
//     void sayHello(string name){
//         cout<<"Hello again sorry"<<name<<endl;
//     }
// };
// int main(){
//     // C obj;
//     // //obj.func();   --It's throwing error
//     // obj.A:: func();
//     // obj.B:: func();

//     final obj;
//     obj.sayHello();
//     return 0;
// }


// //Compile Time Polymorphism
// #include<iostream>
// using namespace std;
// class B{
//     public:
//     int a;
//     int b;
//     public:
//     int add(){
//         return a+b;
//     }
//     void operator+ (B &obj){
//         // int value1 = this-> a;
//         // int value2 = obj.a;
//         // cout<<"Output is : "<<value2 - value1<<endl;

//         cout<<"Hello Dear"<<endl;
//     }
// };
// int main(){
//     B obj1, obj2;
//     obj1.a = 4;
//     obj2.a = 7;
//     obj1 + obj2;
// }


// //Runtime Polymorphism
// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     void speak(){
//         cout<<"Speaking "<<endl;
//     }
// };
// class Dog: public Animal{
//     public:
//     void speak(){
//         cout<<"Barking"<<endl;
//     }
// };
// int main(){
//     Dog obj;
//     obj.speak();
// }


// //Abstraction
// #include<iostream>
// using namespace std;
// class abstraction{
//     int a, b;
//     public:
//     void set(int x, int y){
//         a = x;
//         b = y;
//     }
//     void display(){
//         cout<<"a = "<<a<<endl;
//         cout<<"b = "<<b<<endl;
//     }
// };
// int main(){
//     abstraction obj;
//     obj.set(10,20);
//     obj.display();
//     return 0;
// }
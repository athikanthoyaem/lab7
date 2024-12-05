#include <iostream> 
#include <string>
using namespace std ;

int main(){
    string name, nameMovie, day, message; 
    long long studentID ;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << "\n" ;
    cout << "?????: " ;
    getline(cin, name) ;
    cout << "Fahsai: Wow!!! "<< name << " is a really cool name." << "\n" ;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << "\n";
    cout << name << ": " ;
    cin >>  studentID ;
    cin.ignore();
    // solving gear //
    int firstTwoID = studentID/10000000 ;
    int gear = firstTwoID - 12 ;
    cout << "Fahsai: I think you may be GEAR " << gear << "." << " I have a free movie ticket for you." << "\n" ;

    // ticket movie//
    cout << "Fahsai: Let's go to the cinema together!!!" << "\n" ;
    cout << "Fahsai: What movie do you want to watch?" << "\n" ;
    cout << name <<": " ;  
    getline(cin, nameMovie) ;
    
   
    cout << "Fahsai: So....which day are you free to go with me?" << "\n" ;
    cout << name <<": " ;
    getline(cin, day) ;
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << nameMovie << " with you." <<"\n" ;
    cout << name << ": " ;
    getline(cin, message ) ;
    cout << "Fahsai: 555+ see you " <<day<< ". Bye Bye \\(^ ^)/ " ;

}

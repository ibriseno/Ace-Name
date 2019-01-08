#include<iostream> 
#include<string>   

using namespace std;

int main() {
    /*Reading string from input*/
    std::string str;
    cout << "enter name: " << endl;
    getline(cin, str);
   
    /*Check whether the name consists of "ace"*/
    /*str2 will serve as the delimeter*/
    std:: string str2 ("ace");
    
    /*found will look into str2 by find to check for "ace"*/
    std::size_t found = str.find(str2);
    
    /*If else print statement for delimeter found and not found*/
    if(found != std::string::npos){
        cout << "Bingo! You are the lucky winner!" << endl;
    }else{
        cout << "Have a nice day! Bye";
    }
    
   return 0;
}


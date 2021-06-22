#include <iostream>
#include <cstdlib>
#include <ctime>

void minigame(){

//seed for the random function (uses time(0) as a parameter so that the values are always different)

    srand(time(0));

//setting up game variables

    int total_attempt = 0;

//1+rand()%10 so that the rand function give numbers between 1 and 104

    int secret_number = 1+rand()%10;
    int user_input;

    std::cout << "try to guess the number "<< std::endl;

//main game loop

    while(total_attempt < 3){

        std::cin >> user_input;
        total_attempt++;

//check if the use input is the same as the secret number

        if(total_attempt== 3 && user_input != secret_number){

            std::cout << "NOOB!,you lost xD" << std::endl;
            break;
                
        }   
        if(user_input != secret_number){
                
            std::cout << total_attempt;
            std::cout << "wrong,try again" << std::endl;

        }else{

            std::cout << "GG,you won!" << std::endl;
            break;
                
        }
    }
}

int main(){

minigame();


}
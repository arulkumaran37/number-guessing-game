// #include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int num = 0;
    int guess = 0;
    int tries = 0;

  
    std::srand(std::time(NULL));
   
    num = (std::rand() % 100) + 1;

    std::cout << "*************NUMBER GUESSING GAME************" << '\n';

    do {
        std::cout << "Enter a guess between 1 and 100: \n";
        std::cin >> guess;
        tries++;

        if (guess > num) {
            std::cout << "Too high! Try again.\n";
        }
        else if (guess < num) {
            std::cout << "Too low! Try again.\n";
        }
        else {
            std::cout << "CORRECT! You guessed the number in " << tries << " tries.\n"; 
        }
    } while (guess != num);

    std::cout << "***********************************************" << '\n';

    return 0;
}
// int main() {
//               int num = 0;
//               int guess= 0;
//               int tries = 0;
//        srand(time(NULL));
//        num = (rand() % 100) + 1;

//               std::cout << "*************NUMBER GUESSING GAME************" << '\n';
//        do{
//               std::cout << "Enter a guess btw (1-100): \n";
//               std::cin >> guess;
//               tries++;

//               if(guess > num){
//                      std::cout << "Too high! \n";
//               }
//               else if(guess < num){
//                      std::cout << "Too high! \n";
//               }
//               else{
//                      std::cout << "CORRECT #, NO. OF #TRIES" << tries << '\n'; 
//               }
//           }while(guess != num);
//               std::cout << "***********************************************";


//     return 0;
// }

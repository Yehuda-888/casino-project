#include <iostream>
#include <cstdlib>
#include <ctime>


int main()
{
srand(time(0));
std::cout << "**********Welcome to the casino!**********\n";
std::cout << "********Welcome bonus 100 credits!********\n";
    std::cout << "\nWhat game would you like to play:  \n";

    std::cout << "Slots (1)\n";
    std::cout << "Poker (2)  \n";
    std::cout << "Blackjack (3)  \n";
    
    int game;
    int credits = 100;
    std::cout << "Choice: ";
    std::cin >> game;

    switch(game)
    {
        case 1:
        std::cout << "\n********************Slots great choice!******************** \n";
        std::cout << "\n0 = lemon  1 = $   2 = 777\n";
        std::cout << "+---------------_\n";
        std::cout << "|  MEGA SLOTS (o)\n";
        std::cout << "+===============+\n";
        std::cout << "| [ ] [ ] [ ]   |\n";
        std::cout << "| [ ] [ ] [ ]   |\n";
        std::cout << "| [ ] [ ] [ ]   |\n";
        std::cout << "+===============+\n";

         while(true){

        std::cout << "\nYou have credits: " << credits << '\n';
        std::cout << "How many credits would you like to bet: ";

        int bet;
        std::cin >> bet;
        credits = credits - bet;
        
        if (credits < 0){
            std::cout << "Sorry you cant bet more than you have!";
            break;
        }
        //the game
        int win;
        int loss;
        int slot1;
        int slot2;
        int slot3;
        int slot4;
        int slot5;
        int slot6;
        int slot7;
        int slot8;
        int slot9;
        slot1 = rand() % 3;
        slot2 = rand() % 3;
        slot3 = rand() % 3;
        slot4 = rand() % 3;
        slot5 = rand() % 3;
        slot6 = rand() % 3;
        slot7 = rand() % 3;
        slot8 = rand() % 3;
        slot9 = rand() % 3;
        
        std::cout << "\n+---------------_\n";
        std::cout << "|  MEGA SLOTS (o)\n";
        std::cout << "+===============+\n";
        std::cout << "| [" << slot1 << "] [" << slot2 <<"] [" << slot3 << "]   |\n";
        std::cout << "| [" << slot4 << "] [" << slot5 << "] [" << slot6 << "]   |\n";
        std::cout << "| [" << slot7 << "] [" << slot8 << "] [" << slot9 << "]   |\n";
        std::cout << "+===============+\n";
        
        if (slot1 == 2 && slot2 == 2 && slot3 == 2 || slot4 == 2 && slot5 == 2 && slot6 == 2 || slot7 == 2 && slot8 == 2 && slot9 == 2)
        {
               std::cout << "JACKPOT!!! 10X";
               bet = bet * 10;
               credits = bet + credits;
               bet = 0;
        }
        else if (slot1 == slot2 && slot2 == slot3 || slot4 == slot5 && slot5 == slot6 || slot7 == slot8 && slot8 == slot9)
        {
        std::cout << "\nWINNNERRRR WELL DONE!!!!!!\n";
        bet = bet * 2;
        credits = bet + credits;
        bet = 0;   
        }
        else{
         std::cout << "Loooossseerrrr\n";
        }
        
        if (credits <= 0)
        {
            std::cout << "Ez money loooosseeeerrr!!!";
            break;
        }
        
    }
    }


    return 0;
}

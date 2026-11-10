#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <sstream>
#include <chrono>

using namespace std;

// FUNCTION 1: GAME NAMES AND WELCOME BANNERS 
void gameMode(int mode, string space){
    string mode1, mode2, mode3;
        mode1 = "𝗛𝗢𝗧 𝗢𝗥 𝗖𝗢𝗟𝗗?";
        mode2 = "𝗜 𝗙𝗢𝗥𝗚𝗢𝗧 𝗠𝗬 𝗣𝗔𝗦𝗦𝗪𝗢𝗥𝗗...";
        mode3 = "𝗥𝗔𝗖𝗘 𝗧𝗢 𝟮𝟭";
    
    switch(mode){
        
        case 1:
        cout << space << "˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°\n";
        cout << space << ". ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁.\n";
        cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n";
        cout << space << "                       𝗪𝗘𝗟𝗖𝗢𝗠𝗘 𝗧𝗢 𝗧𝗛𝗘 \"" << mode1 << "\" 𝗚𝗔𝗠𝗘!" << endl;
        cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n";
        cout << space << ". ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁.\n";
        cout << space << "¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.\n\n";
        cout << endl;   
        break;
        
        case 2:
        cout << space << "˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°\n";
        cout << space << ". ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁.\n";
        cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n";
        cout << space << "                       𝗪𝗘𝗟𝗖𝗢𝗠𝗘 𝗧𝗢 𝗧𝗛𝗘 \"" << mode2 << "\" 𝗚𝗔𝗠𝗘!" << endl;
        cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n";
        cout << space << ". ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁.\n";
        cout << space << "¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.\n\n";
        break;
        
        case 3:
        cout << space << "˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°\n";
        cout << space << ". ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁.\n";
        cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n";
        cout << space << "                       𝗪𝗘𝗟𝗖𝗢𝗠𝗘 𝗧𝗢 𝗧𝗛𝗘 \"" << mode3 << "\" 𝗚𝗔𝗠𝗘!" << endl;
        cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n";
        cout << space << ". ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁.\n";
        cout << space << "¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.\n\n";
        cout << endl;   
        break;
        
        default:
        cout << space << "｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎\n";
        cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n";
        cout << space << "                            𝗧𝗛𝗔𝗧'𝗦 𝗡𝗢𝗧 𝗔 𝗩𝗔𝗟𝗜𝗗 𝗠𝗢𝗗𝗘!\n" << space << "                                   𝗧𝗥𝗬 𝗔𝗚𝗔𝗜𝗡!" << endl;
        cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n";
        cout << space << "˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎｡⋆｡\n\n";
        cout << endl;   
        
    }
    
}

// FUNCTION 2: GAME RULES AND MECHANICS
void gameMechanics(int mode, string space){
    
    switch(mode){
        
        case 1:
        cout << space << "The game mechanics are simple. If you're hot then that means" << "\n" << space << "you're within a 10-number radius from the mystery number." << "\n" << space << "If you're cold then that means you're farther. The number" << "\n" << space << "you will be guessing is between 0-30 and you will be given 7" << "\n" << space << "chances to guess the mystery number. Good luck!" << endl << endl;
        break;
        
        case 2:
        cout << space << "Decipher your own password to unlock your phone. Don't worry!" << "\n" << space << "It's Easy! You just have to guess the 4-digit combination within" << "\n" << space << "8 attempts. If you fail then you will be locked out." << "\n\n" << space << "Green = Right number, right position" << "\n" << space << "Yellow = Right number, wrong position" << "\n" << space << "Gray = Incorrect number" << endl << endl;
        break;
        
        case 3:
        cout << space << "Players take turns adding 1, 2, or 3 to a running total that" << "\n" << space << "starts at 0. The player who makes the total reach exactly 21" << "\n" << space << "wins! If you play alone, you race against the computer." << "\n" << space << "Good luck!" << endl << endl;
        break;
    }
}

// FUNCTION 3: GAME DISPLAY WINNER BANNER
void hasWon(int mode, string space, const string players[], int numPlayers, string winnerName){
    
    switch(mode){
            
        case 1:
        cout << space << "˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°\n";
        cout << space << ". ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁.\n";
        cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n";
        cout << space << "                 𝗖𝗢𝗡𝗚𝗥𝗔𝗧𝗨𝗟𝗔𝗧𝗜𝗢𝗡𝗦! " << "\033[1;33m" << winnerName << "\033[0m" << " 𝗚𝗨𝗘𝗦𝗦𝗘𝗗 𝗧𝗛𝗘 𝗠𝗬𝗦𝗧𝗘𝗥𝗬 𝗡𝗨𝗠𝗕𝗘𝗥!" << endl;
        cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n";
        cout << space << ". ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁.\n";
        cout << space << "¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.\n";
        break;
        
        case 2:
        cout << space << "˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°\n";
        cout << space << ". ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁.\n";
        cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n";
        cout << space << "                 𝗔𝗖𝗖𝗘𝗦𝗦 𝗚𝗥𝗔𝗡𝗧𝗘𝗗! " << "\033[1;33m" << winnerName << "\033[0m" << " 𝗘𝗡𝗧𝗘𝗥𝗘𝗗 𝗧𝗛𝗘 𝗥𝗜𝗚𝗛𝗧 𝗣𝗔𝗦𝗦𝗪𝗢𝗥𝗗!" << endl;
        cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n";
        cout << space << ". ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁.\n";
        cout << space << "¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.\n";
        break;
        
        case 3:
        cout << space << "˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°\n";
        cout << space << ". ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁.\n";
        cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n";
        cout << space << "                          𝗠𝗔𝗧𝗛𝗪𝗜𝗭! " << "\033[1;33m" << winnerName << "\033[0m" << " 𝗥𝗘𝗔𝗖𝗛𝗘𝗗 𝟮𝟭 𝗙𝗜𝗥𝗦𝗧!" << endl;
        cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n";
        cout << space << ". ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁.\n";
        cout << space << "¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.¸¸.◦°˚°◦.\n";
        break;
        
        }
}

// FUNCTION 4: GAME DISPLAY LOSER BANNER
void hasLost(int mode, int secret, int pass[], string space){
    
    switch(mode){
            
        case 1:
        cout << space << "｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.\n";
        cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n";
        cout << space << "                                    𝗚𝗔𝗠𝗘 𝗢𝗩𝗘𝗥!" << endl;
        cout << space << "                             𝗧𝗛𝗘 𝗠𝗬𝗦𝗧𝗘𝗥𝗬 𝗡𝗨𝗠𝗕𝗘𝗥 𝗪𝗔𝗦 " << "\033[40m\033[91m" << secret << "\033[0m" << endl;
        cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n";
        cout << space << "˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎\n";
        break;
        
        case 2:
        cout << space << "｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.\n";
        cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n";
        cout << space << "                                    𝗟𝗢𝗖𝗞𝗘𝗗 𝗢𝗨𝗧!" << endl;
        cout << space << "                               𝗧𝗛𝗘 𝗣𝗔𝗦𝗦𝗪𝗢𝗥𝗗 𝗜𝗦 ";
            for(int rightPass = 0; rightPass < 4; rightPass++){
                cout << "\033[40m\033[91m" << pass[rightPass] << "\033[0m";
            }
        cout << endl;    
        cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n";
        cout << space << "˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎\n";
        break;
        
        case 3:
        cout << space << "｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.\n";
        cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n";
        cout << space << "                                   𝗬𝗢𝗨'𝗥𝗘 𝗦𝗟𝗢𝗪!\n";
        cout << space << "                         𝗧𝗛𝗘 𝗖𝗢𝗠𝗣𝗨𝗧𝗘𝗥 𝗥𝗘𝗔𝗖𝗛𝗘𝗗 𝟮𝟭 𝗙𝗜𝗥𝗦𝗧!\n";
        cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n";
        cout << space << "˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎˚˚｡⋆｡˚˚⁎⁺˳.~~.˳⁺⁎\n";
        }
}

//---------------------------------------------------------------------
//                      MAIN GAMES FUNCTIONS
//---------------------------------------------------------------------

// GAME 1

void playHotOrCold(const string players[], int numPlayers, string space){
    
    const int mode = 1;
    const int range = 30; //fixed range: 0-30
    int secret = rand() % (range + 1); //0 to 30 inclusive
    int guess = 0;
    int noPass[4] = {0, 0, 0, 0}; //only needed because hasLost() asks for a password array
    bool correct = false;
    string winnerName;
    
    gameMode(mode, space);
    gameMechanics(mode, space);
    
    //LOGIC
    for(int chances = 1; chances <= 7 && !correct; chances++){
        for(int enterPlayers = 0; enterPlayers < numPlayers; enterPlayers++){
            
            if(chances == 7){
                cout << "\n" << space << "\033[33mFINAL GUESS, " << players[enterPlayers] << ".\033[0m";
                cout << endl;
            }
            
            if(numPlayers > 1){
                cout << "\n" << space << "\033[1;34m" << players[enterPlayers] << "'s turn" << "\033[0m\n\n";
            }
            
            else if (numPlayers == 1){
                cout << "\n";
            }
            
            //Keep asking the SAME player until the input is valid.
            //(chances is not touched here, so invalid input never affects the round count or turn order)
            while(true){
                cout << space << "What is the Number? ";
                
                //No letters
                if(!(cin >> guess)){
                    cout << "\n" << space << "That is not a number!\n\n";
                    cin.clear();
                    cin.ignore(100, '\n');
                    continue;
                }
                
                //Range validation
                if(guess < 0 || guess > range){
                    cout << "\n" << space << "Number is not in range." << endl << endl;
                    continue;
                }
                break;
            }
            cout << endl;
            
            //WIN CHECK (right after each guess, so nobody else plays after a correct answer)
            if(guess == secret){
                correct = true;
                winnerName = players[enterPlayers];
                break;
            }
            
            int difference = abs(guess - secret);
            
            //HINTS
            if(chances < 7){
                if(difference <= 10){
                    cout << space << "\033[40m\033[91m" << "YOU'RE HOT" << "\033[0m\n";
                }
                else{
                    cout << space << "\033[40m\033[94m" << "YOU'RE COLD" << "\033[0m\n";
                }
            }
            
            //DELAY so the player can read the result before the next turn
            if(!(chances == 7 && enterPlayers == numPlayers - 1) && numPlayers > 1){
                this_thread::sleep_for(chrono::seconds(3));
                cout << "\033[1A\033[2K";
            }
            
            //CHANCE INDICATOR
            if(chances == 6){
                cout << space << players[enterPlayers] << ", YOU ONLY HAVE " << 7-chances << " MORE CHANCE" << endl;
            }
            else if(chances < 7){
                cout << space << players[enterPlayers] << ", YOU ONLY HAVE " << 7-chances << " MORE CHANCES" << endl;
            }
            
            cout << "\n";
            cout << space << ". ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁.\n";
            cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n";
            
        }
    }
    
    //WINNER
    if(correct){
        hasWon(mode, space, players, numPlayers, winnerName);
    }
    //LOSER
    else{
        hasLost(mode, secret, noPass, space);
    }
}

//---------------------------------------------------------------------

// GAME 2

void playPassword(const string players[], int numPlayers, string space){
    
    const int mode = 2;
    const int passLength = 4;
    int pass[4];
    int playerGuess[4];
    string answer;
    bool correct = false;
    string winnerName;
    int convert = 0;
    
    gameMode(mode, space);
    gameMechanics(mode, space);
    
    //Assign a random digit (0-9) to each spot of the password
    for(int i = 0; i < passLength; i++){
        pass[i] = rand() % 10;
    }
    
    //Player input:
    for(int attempt = 1; attempt <= 8 && !correct; attempt++){
        for(int enterPlayers = 0; enterPlayers < numPlayers && !correct; enterPlayers++){
            
            //Keep asking the SAME player until the input is valid
            //(attempt is not touched here, so invalid input never affects the tries or the turn order)
            while(true){
                cout << space << "Welcome, " << "\033[1;34m" << players[enterPlayers] << "\033[0m" << ". Please Enter Password: ";
                cin >> answer;
                cout << endl;
                
                std::stringstream ss(answer);
                ss >> convert;
            
                if(!(ss >> convert) && !ss.eof()){
                   cout << space << "Invalid input!";
                   cout << "\n\n";
                   attempt--;
                   continue;
               }
               
                //Must be 4 digits
                if(answer.length() != passLength){
                    cout << space << "Password must be exactly 4 digits.\n\n";
                    continue;
                }
                
                break;
            }
            
            //Convert each character to its digit
            for(int i = 0; i < passLength; i++){
                playerGuess[i] = answer[i] - '0';
            }
            
            bool used[4] = {false, false, false, false}; //password spots already matched
            int color[4] = {0, 0, 0, 0}; //1 = Green, 2 = Yellow, 3 = Gray
            int greens = 0;
            
            //HINTS
            
            //FOR GREEN:
            for(int i = 0; i < passLength; i++){
                if(playerGuess[i] == pass[i]){
                    color[i] = 1;
                    used[i] = true;
                    greens++;
                }
            }
            cout << space;
            //FOR YELLOW & GRAY:
            for(int i = 0; i < passLength; i++){
                if(color[i] == 1){
                    continue;
                }
                
                bool foundYellow = false;
                
                for(int j = 0; j < passLength; j++){
                    if(!used[j] && playerGuess[i] == pass[j]){
                        foundYellow = true;
                        used[j] = true;
                        break;
                    }
                }
                
                if(foundYellow){
                    color[i] = 2;
                }
                else{
                    color[i] = 3;
                }
            }
            
            //PRINT COLORS
            for(int i = 0; i < passLength; i++){
                if(color[i] == 1){
                    cout << "\033[40m\033[32m" << playerGuess[i] << "\033[0m";
                }
                else if(color[i] == 2){
                    cout << "\033[40m\033[33m" << playerGuess[i] << "\033[0m";
                }
                else{
                    cout << "\033[40m\033[90m" << playerGuess[i] << "\033[0m";
                }
            }
            cout << endl << endl;
                
                //DELAY so the player can read the result before the next turn
                //(skipped after the very last guess of the game)
                if(!(attempt == 8 && enterPlayers == numPlayers - 1) && numPlayers > 1){
                    this_thread::sleep_for(chrono::seconds(3));
                    cout << "\033[1A\033[2K" << "\033[1A\033[2K";    
                }
            
            //WIN CHECK (right after each guess, so nobody else plays after a correct password)
            if(greens == passLength){
                correct = true;
                winnerName = players[enterPlayers];
            }
            else{
                cout << space << "Wrong Password!" << endl;
                if(attempt == 7){
                    cout << space << "You have " << 8-attempt << " last try" << endl << endl;
                }
                else if(attempt < 8){
                    cout << space << "You have " << 8-attempt << " tries left." << endl << endl;
                }
               
            }
            
            cout << space << ". ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁.\n";
            cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n\n";
        }
    }
    
    //WINNER
    if(correct){
        hasWon(mode, space, players, numPlayers, winnerName);
    }
    //LOSER
    else{
        hasLost(mode, 0, pass, space);
    }
}

//---------------------------------------------------------------------

// GAME 3

// RETURN TYPE METHOD:
// Returns how much the computer adds on its turn in Race to 21.
// It adds 1 to maxAdd, based on the current total
int computerMove(int total, int target, int maxAdd){
    int add = (total % maxAdd) + 1;
    
    if(total + add > target){
        add = target - total;
    }
    
    return add;
}

void playRaceTo21(const string players[], int numPlayers, string space){
    
    const int mode = 3;
    const int target = 21;
    const int maxAdd = 3;
    int total = 0;
    int current = 0;
    int add = 0;
    bool solo = (numPlayers == 1);
    string winnerName;
    
    gameMode(mode, space);
    gameMechanics(mode, space);
    
    cout << space << "Reach exactly " << target << " to win!\n\n";
    
        while(total < target){
        //Who is playing this turn
        string name = players[current];
        if(solo && current == 1){
            name = "Computer";
        }
        
        cout << space << "\033[1;34m" << name << "'s turn\n\n" << "\033[0m";
        
        this_thread::sleep_for(chrono::seconds(1)); //short pause before the total and prompt
        cout << space << "Current total: " << total << " / " << target << endl;
        
        if(solo && current == 1){
            //Computer's move (uses the computerMove method, which returns the number to add)
            add = computerMove(total, target, maxAdd);
        }
        else{
            //Keep asking the SAME player until the input is valid
            while(true){
                cout << space << "Add how much? (1-" << maxAdd << "): ";
                
                //No letters
                if(!(cin >> add)){
                    cout << "\n" << space << "That is not a number!\n\n";
                    cin.clear();
                    cin.ignore(100, '\n');
                    continue;
                }
                
                if(add < 1 || add > maxAdd){
                    cout << "\n" << space << "You can only add 1, 2, or 3.\n\n";
                    continue;
                }
                
                if(total + add > target){
                    cout << "\n" << space << "That goes over " << target << "! The most you can add is " << target - total << ".\n\n";
                    continue;
                }
                break;
            }
        }
        
        total += add;
        cout << "\n" << space <<  name << " added " << add << ". \n" << space << "The total is now " << "\033[1;32m" << total << "\033[0m" << ".\n\n";
        cout << space << ". ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁.\n";
        cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n\n";
        
        if(total == target){
            winnerName = name;
            break;
        }

        else{
            //DELAY so the player can read the result before the next turn
            this_thread::sleep_for(chrono::seconds(3));
            
            //Next player (the computer counts as a 2nd player in solo mode)
            if(solo){
                current = (current + 1) % 2;
            }
            else{
                current = (current + 1) % numPlayers;
                }
            }
        }
    
    //WINNER
    if(solo && winnerName == "Computer"){
        hasLost(mode, 0, 0, space);
    }
    else{
        hasWon(mode, space, players, numPlayers, winnerName);
        }
    }


int main(){
    
    //general
    string mode1, mode2, mode3;
    mode1 = "𝗛𝗢𝗧 𝗢𝗥 𝗖𝗢𝗟𝗗";
    mode2 = "𝗣𝗔𝗦𝗦𝗪 𝗢𝗥𝗗!";
    mode3 = "𝗥𝗔𝗖𝗘 𝗧𝗢 𝟮𝟭";
    string space = "                        ";
    int mode;
    srand(time(0));
    int numPlayers;
    const int maxPlayers = 4;
    string playerID[maxPlayers]; //player names (max 4)
    
    //Play again
    char again;

        cout << "                   ______   __  __   ______     "<< endl;
        cout << "                ⢀ /\\__  _\\ /\\ \\_\\ \\ /\\  ___\\   " << endl;
        cout << "              ⢀⣴⣿ \\/_/\\ \\/ \\ \\  __ \\\\ \\  __\\    " << endl;
        cout << "             ⣰⣿⣿⣿    \\ \\_\\  \\ \\_\\ \\_\\\\ \\_____\\ " << endl;
        cout << "           ⣴⣿⡿⠋⣿⣿     \\/_/   \\/_/\\/_/ \\/_____/ " << endl;
        cout << " ⠤⣤⣤⣤⣤⣤⣤⣤⣤⣿⣿⠋⠀ ⣿⣷⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⡶⠶⠶⠶⠶⠶⠶⠶⠶⠖⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒ " << endl;
        cout << "  ⠘⢿⣿⣿⣟⠛⠛⠛⠛⠁⠀⠀ ⠙⠛⠛⠛⠋⠉⠉⠉⠉ " << endl;
        cout << "    ⠈⠛⣿⣿⣦⡀          ███╗   ███╗ █████╗  ██████╗ ██╗ ██████╗    ███╗   ██╗██╗   ██╗███╗   ███╗██████╗ ███████╗██████╗ " << endl;
        cout << "        ⢹⣿⡿         ████╗ ████║██╔══██╗██╔════╝ ██║██╔════╝    ████╗  ██║██║   ██║████╗ ████║██╔══██╗██╔════╝██╔══██╗     " << endl;
        cout << "        ⣾⣿⠁⢀⣤⣾⣦⡀    ██╔████╔██║███████║██║  ███╗██║██║         ██╔██╗ ██║██║   ██║██╔████╔██║██████╔╝█████╗  ██████╔╝ " << endl;
        cout << "       ⣸⣿⢇⣶⣿⠟⠙⠻⣿⣄   ██║╚██╔╝██║██╔══██║██║   ██║██║██║         ██║╚██╗██║██║   ██║██║╚██╔╝██║██╔══██╗██╔══╝  ██╔══██╗" << endl;
        cout << "      ⢠⣿⣿⠿⠋⠁⠀⠀⠀⠀⠉⠳⣄ ██║ ╚═╝ ██║██║  ██║╚██████╔╝██║╚██████╗    ██║ ╚████║╚██████╔╝██║ ╚═╝ ██║██████╔╝███████╗██║  ██║" << endl;
        cout << "      ⡿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⠙╚═╝     ╚═╝╚═╝  ╚═╝ ╚═════╝ ╚═╝ ╚═════╝    ╚═╝  ╚═══╝ ╚═════╝ ╚═╝     ╚═╝╚═════╝ ╚══════╝╚═╝  ╚═╝\n\n " << endl;
        
        do{
        
        cout << space << ". ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁.\n";
        cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n";
        cout << space << "                                   𝗚𝗔𝗠𝗘 𝗠𝗢𝗗𝗘𝗦\n\n";
        cout << space << "               𝟭 | " << mode1 << "   𝟮 | " << mode2 << "   𝟯 | " << mode3 << endl;
        cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n";
        cout << space << ". ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁.\n";
        cout << endl;
        
        do{
            cout << space << "Select Game Mode: ";
            cin >> mode;
            cout << endl;
        
            if(mode < 1 || mode > 3){
                gameMode(mode, space);
                cin.clear() ;
                cin.ignore(100, '\n');
                continue;//For default
            }
        
        }while(mode < 1 || mode > 3);
        
        // PLAYER COUNT SELECTION 
        do{
            cout << space << "                 ┌─-─-─-─-─-─-─-─-─-─-─┐ ┌─-─-─-─-─-─-─-─-─-─-─┐\n";
            cout << space << "                 │    Single Player    │ │     Multiplayer     │\n";
            cout << space << "                 │         (1)         │ │        (2-4)        │\n";
            cout << space << "                 └─-─-─-─-─-─-─-─-─-─-─┘ └─-─-─-─-─-─-─-─-─-─-─┘\n\n";
            cout << space << "How many are playing? ";
            
            
            //No letters
            if(!(cin >> numPlayers)){
                cout << "\n" << space << "That is not a number!\n\n";
                cin.clear();
                cin.ignore(100, '\n');
                numPlayers = 0;
                continue;
            }
            cout << "\n";
            
            if(numPlayers > maxPlayers){
                cout << space << "Only 4 people can play!\n\n";
                continue;
            }
            else if(numPlayers <= 0){
                cout << space << "Number of players cannot be 0.\n\n";
                continue;
            }
        }while(numPlayers > maxPlayers || numPlayers <= 0);
        
        cin.ignore(100, '\n'); //clear the leftover Enter before reading names
        
        for(int enterPlayers = 0; enterPlayers < numPlayers; enterPlayers++){
            if(numPlayers > 1){
            cout << space << "Enter Player " << enterPlayers+1 << "'s Name: ";
            getline (cin, playerID[enterPlayers]);
            }
            
            else if(numPlayers == 1){
                cout << space << "Enter Player Name: ";
                getline (cin, playerID[enterPlayers]);
            }
        }
        
        cout << "\n";
        
        //Each game has its own function
        switch(mode){
            
            case 1:
            playHotOrCold(playerID, numPlayers, space);
            break;
            
            case 2:
            playPassword(playerID, numPlayers, space);
            break;
            
            case 3:
            playRaceTo21(playerID, numPlayers, space);
            break;
            
            default:
            gameMode(mode, space);
            break;
        }
        
    // PLAY AGAIN; this runs when the selected game function above finishes playing. 
    do{
        cout << "\n\n";
        cout << space << "                            ┌─-─-─-─-─-─-─-─-─-─-──┐\n";
        cout << space << "                            │      Play Again?     │\n";
        cout << space << "                            │         Y | N        │\n";
        cout << space << "                            └─-─-─-─-─-─-─-─-─-─-──┘\n\n";
        cout << "\n" << space << "Do you want to play again? (Y/N): ";
        cin >> again;
        cout << "\n";
            
        if(again != 'y' && again != 'Y' && again != 'N' && again != 'n'){
                cout << "\n" <<  space << "INVALID INPUT!\n";
        }
    
    }while (again != 'y' && again != 'Y' && again != 'N' && again != 'n'); // The program will keep displaying "Do you want to play again" if the input is NOT Y or N
         
    }while(again == 'Y' || again == 'y'); // The program returns to the main menu loop once the player inputs Y or N
    
    // FINAL CLOSING MESSAGE (Outputs when player types 'N' or 'n' and when all program loops end)
        cout << space << ". ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁.\n";
        cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n";
        cout << space << "                               𝗧𝗛𝗔𝗡𝗞𝗦 𝗙𝗢𝗥 𝗣𝗟𝗔𝗬𝗜𝗡𝗚!\n";
        cout << space << "─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─-─\n";
        cout << space << ". ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁. . ݁₊ ⊹ . ݁ ⟡ ݁ . ⊹ ₊ ݁.\n";
return 0;
}

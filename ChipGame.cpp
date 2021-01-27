 #include <iostream> 
 #include <ctime>
 #include <cstdlib>
 using namespace std; 
 
// This is a chip game.
/*Rule: One player picks one chip at a time and maximum 2 players are allowed to play the game,
whoever picks the last chip loses the match */

int main()  
{  
  bool player1Turn = true;  
  bool gameOver = false;    
  const int MAX_CHIPS = 100;
  int chipsInPile = 0;  
  int chipsTaken = 0; 
   srand(time(0));
   chipsInPile=(rand() % MAX_CHIPS) + 1;
   printf("This round will start with %d chips in the pile\n",chipsInPile);
  
  return 0; 
} 

 
 


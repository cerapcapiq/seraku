# seraku

a game with 2 player, 
THE RULES :
1) each player have turn to roll a dice, after getting a random number, the player were asked to put the number in their own 3x3 table like below

player 1 board
 a | b | c 
---|---|---
 d | e | f 
---|---|---
 g | h | i 


player 2 board 

 j | k | l 
---|---|---
 m | n | o 
---|---|---
 p | q | r 
 
 
 2) player 1 (for example) can put the number that they got (after rolling the dice) from "a - i".
 3) same as player 2, after rolling a dice, they can put the number from "j - r".
 4) player with highest total win 
 5) there is a catch to make it interesting :
    a) if (for example) player 1 has number 3 at b, (like board below), and then player 2 put it any place opposite to it (whether k, n, q), player 1 will
       lose the number
                                           
                                           
player 1 board                                                                   player 1 board
 a | 3 | 2                                                                        a |   | 2
---|---|---                                                                      ---|---|---
 4 | e | f                                                                        4 | e | f       
---|---|---                                                                      ---|---|---
 g | h | i                                                                        g | h | i           
                                                                                  
                                                                               

                       -----> player 2 turn, roll and get 3,           ----->
                       then he/she put it opposite to player1's 3
player 2 board                                                                    player 2 board 

 j | k | 5                                                                        j | k | 5 
---|---|---                                                                      ---|---|---
 1 | n | 5                                                                        1 |'3'| 5
---|---|---                                                                      ---|---|---
 p | q | r                                                                        p | q | r 
 
 
      b) if a player able to put vertically same number, the end result the entire vertical will be mutiplied by 2
      
      
      
             player 2 board 

 j | k | 5                                                                        j | k | 5 
---|---|---                                                                      ---|---|---
 1 | 3 | 5           --------> player 2 put 3 of 5 (at 'r')                       1 |'3'| 5
---|---|---                    on most right column                              ---|---|---
 p | q | r                     so instead of total (19),                          p | q | 5
                                total is (34)
 

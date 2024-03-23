# MagicEightBall
using RNG and loops

Problem: Suppose you are asked to simulate a Magic 8-Ball. The Magic 8-Ball is a fortune telling toy. 
The player asks a question and the Magic 8-Ball randomly answers the question with one of 20 possible 
answers. A description of the game, along with the twenty answers can be found on this Wikipedia page. 
The Wikipedia page includes a link to an online version of the game.
For this program you only need to use the following 5 answers according to the following table:
Random Number Answer
0 Yes
1 Maybe
2 No
3 Ask again later
None of the above I don't know

The answers will be generated at random using the following expressions:
1) srand(static_cast<int> (time(NULL))) to seed the random number generator
2) ( rand() % (highRange - lowRange + 1) ) + lowRange to generate the random number


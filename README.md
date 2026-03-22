
Tic-Tac-Toe Game (C++)
This is a console-based Tic-Tac-Toe game implemented in C++. It allows two players to play against each other by taking turns and placing their markers (X or O) on a 3×3 grid.

🚀 Features
•	Two-player interactive gameplay 
•	Dynamic board display after every move 
•	Input validation for invalid or occupied slots 
•	Automatic winner detection (rows, columns, diagonals) 
•	Tie detection when all slots are filled 

🛠️ Technologies Used
•	C++ 
•	Standard Input/Output (iostream) 
•	Basic control structures and functions 

🎮 How It Works
1.	Player 1 selects a marker (X or O). 
2.	Player 2 is automatically assigned the other marker. 
3.	Players take turns choosing a slot (1–9) on the board:
1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9
4.	The program: 
o	Validates the input 
o	Places the marker if the slot is available 
o	Updates and displays the board 
5.	After each move, the program checks: 
o	If a player has won (3 in a row) 
o	If the game ends in a tie 
6.	The game ends when a player wins or all slots are filled.


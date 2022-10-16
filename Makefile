main: Game.cpp GameDriver.cpp
	g++ -std=c++11 Game.cpp GameDriver.cpp -o main
	./main

save: Game.cpp SaveSystemDriver.cpp 
	g++ -std=c++11 Game.cpp SaveSystemDriver.cpp -o save
	./save

play : Game.cpp Guess.cpp Multiplayer.cpp Singleplayer.cpp
	g++ -std=c++11 Game.cpp Multiplayer.cpp Singleplayer.cpp -o play
	./play

game : Save.cpp Game.cpp DriverMain.cpp -o game
	g++ -std=c++11 Save.cpp Game.cpp DriverMain.cpp -o game
	./game



# BlockFall-Game

Run Configuration
Here is an example of how your code will be compiled (note that instead of main.cpp we will use our
test files):
$ g++ -std=c++11 main.cpp Block.h BlockFall.h BlockFall.cpp GameController.h
GameController.cpp LeaderboardEntry.h LeaderboardEntry.cpp Leaderboard.h
Leaderboard.cpp -o blockfall ,→
,→
Or, you can use the provided Makefile or CMakeLists.txt within the sample input to compile your
code:
$ make
or
$ mkdir blockfall_build
$ cmake -S . -B blockfall_build/
$ make -C blockfall_build/
After compilation, you can run the program as follows:
$ ./blockfall grid.dat blocks.dat commands.dat GRAVITY_ON leaderboard.txt
,→ BlockBuster

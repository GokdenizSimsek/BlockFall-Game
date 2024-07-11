cmake_minimum_required(VERSION 3.26)
project(untitled2)

set(CMAKE_CXX_STANDARD 11)

add_executable(untitled2 main.cpp
        BlockFall.cpp
        Leaderboard.cpp
        LeaderboardEntry.cpp
        GameController.cpp)

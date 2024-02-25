cmake_minimum_required(VERSION 3.22)

add_library(eth_link 
            STATIC "src/eth_link.cpp")

target_include_directories(eth_link 
                           PUBLIC include)

target_link_libraries(eth_link lmf abstract_link)

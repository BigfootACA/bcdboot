cmake_minimum_required(VERSION 3.0)
project(bcdboot LANGUAGES C)
add_definitions("-Wall -Wextra -Werror")
add_executable(
	bcdboot
	bcdboot.c
	bcdstore.c
	keyval.c
)
target_link_libraries(
	bcdboot
	hivex
	blkid
	uuid
)

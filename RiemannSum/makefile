# Makefile for RiemannSum by Hung Ngoc Phat (19120615)

ifeq ($(OS), Windows_NT)
	EXECUTABLE := RiemannSum.exe
else
	EXECUTABLE := RiemannSum
endif

G++ := g++

# Subfolders
folders := InfixToPostfix PostfixEval StackFloat StackChar Utils Math

# Dependencies
CPP_DEPENDENCIES := $(foreach folder, $(folders), $(wildcard $(folder)/*.cpp))

BUILD/$(EXECUTABLE): $(CPP_DEPENDENCIES) main.cpp
	@mkdir BUILD
	$(G++) -std=c++11 $^ -o $@ 
	

# Makefile for ExpressionEvaluator by Hung Ngoc Phat (19120615)

# Subfolders
folders := InfixToPostfix PostfixEval StackFloat StackChar Utils

# Dependencies
CPP_SOURCES := $(foreach folder, $(folders), $(wildcard $(folder)/*.cpp))

main: $(CPP_SOURCES) 
	g++ -std=c++11 $^ -o $@ 
	

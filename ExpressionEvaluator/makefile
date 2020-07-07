# Makefile for ExpressionEvaluator by Hung Ngoc Phat (19120615)

ifeq ($(OS), Windows_NT)
	EXECUTABLE := ExprEval.exe
else
	EXECUTABLE := ExprEval
endif

G++ := g++-9

# Subfolders
folders := InfixToPostfix PostfixEval StackFloat StackChar Utils FileRW

# Dependencies
CPP_DEPENDENCIES := $(foreach folder, $(folders), $(wildcard $(folder)/*.cpp))

BUILD/$(EXECUTABLE): $(CPP_DEPENDENCIES) main.cpp
	@mkdir BUILD
	$(G++) -std=c++11 $^ -o $@ 
	

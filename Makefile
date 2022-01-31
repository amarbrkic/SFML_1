all: build run clean

build:
	@g++ -Wall src/*.cpp -o hello
	@#g++-10 -Wall -Wextra -std=c++20 src/*.cpp -o hello

run:
	@echo Output:
	@echo -------
	@echo
	@./hello
	@echo -------

clean:
	@rm hello

git:
	@git add .
	@git commit -m "."
	@git push

lint:
	@echo Linting source files:
	@echo -------
	@cpplint src/*.cpp
	@echo ---------------------
	@echo Linting header files:
	@echo -------
	@cpplint headers/*.hpp
	@echo -------
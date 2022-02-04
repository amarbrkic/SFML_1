all: build run clean

build:
	@g++ src/*.cpp -o hello

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
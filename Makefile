all: build run clean

build:
	@g++ -Wall src/*.cpp -o hello

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
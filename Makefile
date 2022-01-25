all: build run clean

build:
	@g++ src/*.cpp -o hello

run:
	@echo Output:
	@echo
	@./hello
	@echo -------

clean:
	@rm hello

git:
	@git add .
	@git commit -m "."
	@git push
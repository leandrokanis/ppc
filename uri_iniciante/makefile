file = e

all:
	clear
	g++ $(file).cpp -o app.out -std=c++11 -lm -Wall -O2
	clear
	cat input.txt | ./app.out
init:
	clear
	touch $(file).cpp output.txt ans.txt input.txt
diff:
	clear
	g++ $(file).cpp -o app.out -std=c++11 -lm -Wall -O2
	clear
	cat input.txt | ./app.out > output.txt
	clear
	diff output.txt ans.txt
clean:
	clear
	rm output.txt ans.txt app.out input.txt

file = f

all:
	clear
	g++ $(file).cpp -o $(file).out -std=c++11 -lm -Wall -O2 | clear
	cat input.txt | ./$(file).out
init:
	touch output.txt ans.txt input.txt
	cp ../template.cpp $(file).cpp | clear
	ls
diff:
	clear
	g++ $(file).cpp -o $(file).out -std=c++11 -lm -Wall -O2 | clear
	cat input.txt | ./$(file).out > output.txt | clear
	diff output.txt ans.txt
clean:
	rm output.txt ans.txt $(file).out input.txt | clear
	ls

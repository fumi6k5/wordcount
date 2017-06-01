wordcount: wordcountlist.o wordstatistics.o wordadd.o wordcount.o wordsearch.o
	gcc wordcountlist.o wordstatistics.o wordadd.o wordcount.o wordsearch.o -o wordcount

wordcountlist.o: wordcountlist.c wordlist.h
	gcc -c wordcountlist.c

wordstatistics.o: wordstatistics.c wordlist.h
	gcc -c wordstatistics.c

wordadd.o: wordadd.c wordlist.h
	gcc -c wordadd.c

wordcount.o: wordcount.c wordlist.h
	gcc -c wordcount.c

wordsearch.o: wordsearch.c wordlist.h
	gcc -c wordsearch.c

test: wordcount
	./wordcount computer.txt

testsort: wordcount
	./wordcount computer.txt | sort -g -r

clean:
	rm -f wordcount *~ *.o

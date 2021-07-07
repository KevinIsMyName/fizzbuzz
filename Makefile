CC=gcc
OUTDIR=./out
N=50

all: clean build run

run: 
	@echo "RUNNING EXECUTABLES"
	python fizzbuzz.py $(N)
	$(OUTDIR)/fizzbuzzc $(N)
	$(OUTDIR)/fizzbuzzcpp $(N)
	java -cp $(OUTDIR) fizzbuzz $(N)
	node $(OUTDIR)/fizzbuzz.js $(N)
	go run fizzbuzz.go $(N)

build: clean
	@echo "BUILDING/COMPILING IN $(OUTDIR)"
	gcc fizzbuzz.c -o $(OUTDIR)/fizzbuzzc
	g++ fizzbuzz.cpp -o $(OUTDIR)/fizzbuzzcpp
	javac fizzbuzz.java -d $(OUTDIR)
	tsc -outDir $(OUTDIR) fizzbuzz.ts

clean:
	@echo "CLEANING $(OUTDIR)"
	rm -rf $(OUTDIR)
	mkdir $(OUTDIR)

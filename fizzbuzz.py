from sys import argv

N = int(argv[1])
def fizzbuzz(N):
    for i in range(1, N + 1):
        out = ""
        out += "Fuzz" if (i % 3 == 0) else ""
        out += "Buzz" if (i % 5 == 0) else ""
        print(out)
fizzbuzz(N)

package main
import (
	"fmt"
	"os"
	"strconv"
)

func fizzbuzz(N int) {
	var out string
	i := 1
	for i <= N  {
		out = ""
		if (i % 3 == 0) {
            out += "Fizz"
        }
		if (i % 5 == 0) {
            out += "Buzz"
        }
		fmt.Println(out)
		i += 1
    }
}

func main() {
    N, _ := strconv.Atoi(os.Args[1])
    fizzbuzz(N)
}
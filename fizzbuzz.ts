let N: number = parseInt(process.argv[2]);
const fizzbuzz = (N: number) => {
    for (let i: number = 1; i <= N; i++) {
        let out:string = "";
        if (i % 3 == 0) {
            out += "Fizz";
        }
        if  (i % 5 == 0) {
            out += "Buzz";
        }
        console.log(out);
    }
};
fizzbuzz(N);
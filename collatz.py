n=int(input("Input a number to use in the Collatz Conjecture: "));
while(n != 1):
    if(n%2 == 0):
        n=n//2;
        print(n);
    else:
        n=n*3+1;
        print(n);

long long n
    print Enter the value of n
    take input n
    long long k=1
    long long sum=0;
    long long t=0;
    for(i=1 to i=n)
        t=t+4;
        if(i%2==1){
            t++;
            sum+=k;
            t+=2;
        }
        else{
            sum-=k;
            t+=2;
        }
        k+=2;
        t+=2;
    }
    Print sum of the subsequence = sum
    Print Number of operations are t
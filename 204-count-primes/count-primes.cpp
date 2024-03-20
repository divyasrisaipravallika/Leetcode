class Solution {
public:
    int countPrimes(int n) {
    vector<bool>primes(n+1,true);
    primes[0] = false;
    primes[1] = false;
    int c = 0 ;
    for(int i = 2; i <= int(sqrt(n)); i++)
    {   
        if(primes[i])
        {
            for(int j=i*i; j<=n ; j+=i)
            {   
                if(primes[j])
                {
                    primes[j] = false; 
                    
                }
                c++;
            }
        }
    }
    int cnt = 0;
    for(int i = 1 ; i < n ;i++)
    { 
        if(primes[i]) cnt++;
    }
    return cnt;
    }
};
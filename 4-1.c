long long factorial(int n){
	long long m = 1;
	for(int i = 1;i <= n;i++)
		m *= i;
	return m;
}

long long C(int n ,int m){
	return factorial(n)/(factorial(m)*factorial(n-m));
}
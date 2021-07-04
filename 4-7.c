int sum(int a[]){
	int ans = 0;
	for(int i = 0;i< sizeof(a);i++)
		ans += a[i];
	return ans;
}
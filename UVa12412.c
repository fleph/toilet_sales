int main(){
	for(;;){
		int choice;
		print_menu();
		scanf("%d",&choice);
		if(choice == 0)break;
		if(choice == 1)add();
		if(choice == 2)DQ(0);
		if(choice == 3)DQ(1);
		if(choice == 4)printf("Showing the ranklist hurts students' self-esteem.Don't do that.\n");
		if(choice == 5)stat();
	}
	return 0;
}

void DQ(int isq){
	char s[maxl];
	for(;;){
		printf("Please enter SID or name.Enter 0 to finish.\n");
		scanf("%s",s);
		if(strcmp(s,"0") == 0) break;
		int r = 0;
		for(int i = 0;i<n;i++) if(!removed[i]){
			if(strcmp(sid[i],s) == 0 || strcmp(name[i],s) == 0){
				if(isq) printf("%d %s %d %s %d %d %d %d %d %.2f\n",rank(i),sid[i],
					cid[i],name[i],score[i][0],score[i][1],score[i][2],score[i][3],score[i][4],
					score[i][4]/4.0+EPS);
				else{removed[i] = 1;r++;}

			}
		}
		if(!isq) printf("%d student(s) removed.\n",r);
	}
}
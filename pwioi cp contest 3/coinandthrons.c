int main(){
    int z, n, add;
    scanf("%d", &z);

    for (int i = 0; i < z; i++){
        scanf("%d", &n);
        char arr[n];
        add = 0;
        int b;
        scanf("%c",&b);
    	for (int j = 0; j < n; j++){
                scanf("%c",&arr[j]);
            }
            
            
            for (int k = 1; k < n; k++){
                if (arr[k] == '@') add++;
                
                if (arr[k] == '*' && arr[k+1] == '*') break;
            }
            printf("%d\n",add);
        }
    return 0;
}

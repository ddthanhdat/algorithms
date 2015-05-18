Mình xin giới thiệu code mình có tham khảo từ daynhauhoc: viết theo mình hiểu.
sàng nguyên tố:

const long long maxn=1000000+5;
long long isPrime[maxn];
void Prime(){
	for(long long i=2;i<=maxn;i++){
		isPrime[i]=-1; // giả sử -1 thì  i là số nguyên tố;
	}
	for(long long i=2;i<=maxn;i++){
		if(isPrime[i]==-1) 
			for(long long j=i;j*i<=maxn;j++){
				isPrime[j*i]=i; // lưu lại con số nguyên tố nhỏ nhất nó chia hết.
			}
	}

}
thừa số nguyên tố:

long long factor[1000];
void recrusive_factor(long long n,long long &fn){
    if(isPrime[n]==-1){
        factor[fn]=n;
        fn++;
    }else{
        recrusive_factor(n/isPrime[n],fn);
        factor[fn]=isPrime[n];
        ++fn;
        
    }
    
}

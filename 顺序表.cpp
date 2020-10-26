#include<stdio.h>
#define MAXSIZE 100

typedef struct{
	int elem[MAXSIZE];
	int length;
}SeqList;

//初始化
void Init_SeqList(SeqList &L){
	printf("初始化函数\n");
//	L.length = 5;
	printf("请输入顺序表长度：\n");
	scanf("%d", &L.length);
	printf("请输入顺序表的元素：\n");
	for(int k = 0; k <= L.length-1; k++){
		scanf("%d", &L.elem[k]);
	}
} 

//插入
int Insert_SeqList(SeqList &L, int i, int x){
	printf("插入函数\n"); 
	int j;
	if(L.length == MAXSIZE - 1){
		printf("表满\n");
		return 0;
	}
	if(i < 1 || i > L.length){
		printf("插入位置错\n");
		return 0;
	}
	for(j = L.length; j >= i; j--){
		L.elem[j+1] = L.elem[j];
	}
	L.elem[i] = x;
	L.length++;
	
	
	return true;
} 

//删除
int Delete_SeqList(SeqList &L, int i){
	printf("删除函数\n");
	int j;
	if(i < 1 || i > L.length-1){
		printf("不存在该元素\n");
		return 0;
	}
	for(j = i; j <= L.length-1; j++){
		L.elem[j] = L.elem[j+1];
	}
	L.length--;
	return true;
}

//按值查找 
int Location_SeqList(SeqList &L, int x){
	printf("按值查找函数\n");
	int j = 0;
	while((j <= L.length-1) && L.elem[j] != x){
		j++;
	}
	if(j >= L.length){
		return 0;
	}
	else 
		return j;
} 

//两个表合并 
void Merge(SeqList &A, SeqList &B, SeqList &C){
	printf("合并函数\n"); 
	//先给A,B 分别赋值 
	int a[5] = {1, 2, 5, 3, 7};
	int b[4] = {1, 6, 9, 4};
	A.length = 5;
	for(int k = 0; k <= 5-1; k++){
		A.elem[k] = a[k];
	}
	B.length = 4;
	for(int k = 0; k <= 4-1; k++){
		B.elem[k] = a[k];
	}
//	C.length = A.length + B.length;
	printf("%d\n",A.length);
	for(int k = 0; k <= A.length-1; k++){
		printf("%d ",A.elem[k]);
	}
	printf("\n");
	printf("%d\n",B.length);
	for(int k = 0; k <= B.length-1; k++){
		printf("%d ",B.elem[k]);
	}
	printf("\n");

	int i, j, m;
	i = 0;
	j = 0; 
	m = 0;
	while((i <= A.length-1) && (j <= B.length-1)){
		if(A.elem[i] <= B.elem[j]){
			C.elem[m++] = A.elem[i++];
		}
		else{
			C.elem[m++] = B.elem[j++];
		}
	}
	while(i <= A.length-1){
		C.elem[m++] = A.elem[i++];
	}
	while(j <= B.length-1){
		C.elem[m++] = B.elem[j++];
	}
	C.length = A.length + B.length;
	
	for(int k = 0; k <= C.length-1; k++){
		printf("%d ", C.elem[k]);
	}
}

int main(){
	SeqList L, A, B, C;
	
	int i = 3;	//插入、删除、查找位置
	int x = 20;	//插入、删除元素 
	int test;	//返回结果测试 
	
//	Init_SeqList(L);

//	test = Insert_SeqList(L, i, x);
//	for(int k = 0; k <= L.length-1; k++){
//		printf("%d ", L.elem[k]);
//	}
//	printf("\n");
	
//	test = Delete_SeqList(L, i);
//	for(int k = 0; k <= L.length-1; k++){
//		printf("%d ", L.elem[k]);
//	}
//	printf("\n");

//	test = Location_SeqList(L, x);
//	printf("该元素的位置为：%d\n", test);

	Merge(A, B, C);

} 

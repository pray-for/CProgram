#include<stdio.h>
#define MAXSIZE 100

typedef struct{
	int elem[MAXSIZE];
	int length;
}SeqList;

//��ʼ��
void Init_SeqList(SeqList &L){
	printf("��ʼ������\n");
//	L.length = 5;
	printf("������˳����ȣ�\n");
	scanf("%d", &L.length);
	printf("������˳����Ԫ�أ�\n");
	for(int k = 0; k <= L.length-1; k++){
		scanf("%d", &L.elem[k]);
	}
} 

//����
int Insert_SeqList(SeqList &L, int i, int x){
	printf("���뺯��\n"); 
	int j;
	if(L.length == MAXSIZE - 1){
		printf("����\n");
		return 0;
	}
	if(i < 1 || i > L.length){
		printf("����λ�ô�\n");
		return 0;
	}
	for(j = L.length; j >= i; j--){
		L.elem[j+1] = L.elem[j];
	}
	L.elem[i] = x;
	L.length++;
	
	
	return true;
} 

//ɾ��
int Delete_SeqList(SeqList &L, int i){
	printf("ɾ������\n");
	int j;
	if(i < 1 || i > L.length-1){
		printf("�����ڸ�Ԫ��\n");
		return 0;
	}
	for(j = i; j <= L.length-1; j++){
		L.elem[j] = L.elem[j+1];
	}
	L.length--;
	return true;
}

//��ֵ���� 
int Location_SeqList(SeqList &L, int x){
	printf("��ֵ���Һ���\n");
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

//������ϲ� 
void Merge(SeqList &A, SeqList &B, SeqList &C){
	printf("�ϲ�����\n"); 
	//�ȸ�A,B �ֱ�ֵ 
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
	
	int i = 3;	//���롢ɾ��������λ��
	int x = 20;	//���롢ɾ��Ԫ�� 
	int test;	//���ؽ������ 
	
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
//	printf("��Ԫ�ص�λ��Ϊ��%d\n", test);

	Merge(A, B, C);

} 

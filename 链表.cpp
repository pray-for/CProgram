#include<stdio.h> 
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}LNode, *LinkList;

LinkList Creat_LinkList1(){
	printf("ͷ�巨������������\n");
	LinkList H = (LinkList)malloc(sizeof(LNode));	//ͷ��� 
	H->next = NULL;		//�ձ� 
	LNode *s;
	int x;
	printf("����������Ԫ��ֵ��\n");
	scanf("%d", &x);
	while(x != -1){
		s = (LinkList)malloc(sizeof(LNode));
		s->data = x;
		s->next = H->next;
		H->next = s;
		scanf("%d", &x);
	}
	return H;
} 

LinkList Creat_LinkList2(){
	printf("β�巨������������\n");
	LinkList H = (LinkList)malloc(sizeof(LNode));
	H->next = NULL;
	LNode *s;
	LNode *r = H;
	int x;
	printf("����������Ԫ��ֵ��\n");
	scanf("%d", &x);
	while(x != -1){
		s = (LinkList)malloc(sizeof(LNode));
		s->data = x;
		s->next = r->next;
		r->next = s;
		r = s;
		scanf("%d", &x);
	}
	return H;
}

int Length_LinkList(LinkList L){
	printf("�������Ⱥ���\n");
	LNode *p = L;
	int count = 0;
	while(p->next != NULL){
		p = p->next;
		count++;
	}
	return count;
}

void Print(LinkList L){
	printf("���������\n");
	while(L != NULL){
		printf("%d ", L->data);
		L = L->next;
	}
	printf("\n");
}

int main(){
	LinkList L = NULL;
	int length;
	L = Creat_LinkList1();
	
//	L = Creat_LinkList2(); 

	length = Length_LinkList(L);
	printf("������ĳ���Ϊ��%d\n", length);
	
	Print(L);
	
}

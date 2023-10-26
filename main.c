#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
    struct Node * prev;
};

struct Node * createNode(int data) {
    struct Node * newNode = (struct Node *) malloc(sizeof (struct Node));
    newNode ->data = data;
    newNode ->next = NULL;
    newNode ->prev = NULL;
    return newNode;
}

int main( )
{
    FILE *fp = fopen("input.txt", "r"); // 읽기 모드로 input.txt 파일 열기
    FILE *ofp = fopen("output.txt", "w");
    if (fp == NULL) { // 예외 처리
        printf("cannot open the file\n");
        return 1;
    }
    int n, m;
    int * arr = (int*) malloc(m*sizeof (int));
    fscanf(fp, "%d %d", &n, &m); // 파일의 포인터로 접근. %d 형식으로 읽고, a의 주소를 받아 저장한다.
    for (int i = 0; i < m; ++i) {
        fscanf(fp, "%d", &arr[i]);
    }
    fprintf(ofp, "%d %d\n", n, m);

    fclose(fp); // 파일 닫기. 리소스 누스 생길 수 있음.
    fclose(ofp); // 파일 닫기. 리소스 누스 생길 수 있음.
    return 0;
}

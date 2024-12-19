#include<stdio.h>

int main(){
    
    int array[] = {1,2,3,4,5};
    int size = sizeof(array) / sizeof(array[0]);
    int n,found = 0;
    
    printf("yeu cau nguoi dung nhap vao 1 phan tu: ");
    scanf("%d", &n);
    
    for(int i = 0; i < size; i++){
        if(array[i] == n){
            printf("vi tri phan tu trong mang la %d\n", i);
            found = 1;
            break;
        }
    }
    if(found == 0){
        printf("phan tu ko ton tai\n");
    }
    return 0;
}
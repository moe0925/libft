#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}

// int main(void)
// {
//    int *ptr,*p;
//    int *ptr2,*p2;
//    int i;
//    /* 500個のintサイズのメモリを確保 */
//    ptr = (int *)calloc(500,sizeof(int));
//    ptr2 = (int *)ft_calloc(500,sizeof(int));
//    if(ptr == NULL) {
//       printf("メモリが確保できません\n");
//       exit(EXIT_FAILURE);
//    }
//    p = ptr;
//    for (i=0; i<500; i++) {
//       *p = i;
//       printf("%d ",*p);
//       p++;
//    }
/* メモリの開放 */
// free(ptr);
//    printf("----------------------------------------\n");
// 	if(ptr2 == NULL) {
// 		printf("メモリが確保できません\n");
// 		exit(EXIT_FAILURE);
// 	}
// 	p = ptr2;
// 	for (i=0; i<500; i++) {
// 		*p2 = i;
// 		printf("%d ",*p2);
// 		p++;
// 	}
// 	/* メモリの開放 */
// 	free(ptr2);
//    return 0;
// }
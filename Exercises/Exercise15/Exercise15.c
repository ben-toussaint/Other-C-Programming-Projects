//////////////////////////////////////////////////////big challenging from chatgpt//////////////
void reverse(int a[], int start, int end){
   while(start < end){
       int temp = a[start];
       a[start] = a[end];
       a[end] = temp;
       start++;
       end--;
   }
}

int main(){
   int n, k,i;

   printf("Enter the size of the array: ");
   scanf("%d", &n);

   int a[n];

   printf("Enter %d elements:\n", n);
   for( i = 0; i < n; i++){
       scanf("%d", &a[i]);
   }

   printf("Enter K (number of rotations): ");
   scanf("%d", &k);

   // This makes sure K is not bigger than n
   k = k % n;

   // Step 1: reverse whole array
   reverse(a, 0, n - 1);

   // Step 2: reverse first K elements
   reverse(a, 0, k - 1);

   // Step 3: reverse remaining N-K elements
   reverse(a, k, n - 1);

   // Print result
   printf("Rotated Array: ");
   for(i = 0; i < n; i++){
       printf("%d ", a[i]);
   }

   return 0;
}
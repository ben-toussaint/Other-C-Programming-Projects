struct book{
	char title[20];
	float price;
	int pages;
}obj[5];

int main(){
	float average;
	int i;
	for(i=0;i<5;i++){
	printf("Enter %d's book title:",i+1);
	scanf("%s",obj[i].title);
	printf("Enter %d's book price:",i+1);
	scanf("%f",&obj[i].price);
	printf("Enter %d's book pages:",i+1);
	scanf("%d",&obj[i].pages);
}
if (obj[0].price>obj[1].price&&obj[0].price>obj[2].price&&obj[0].price>obj[3].price&&obj[0].price>obj[4].price){
	printf("First has the highest price.\n");
}
else if(obj[1].price>obj[0].price&&obj[1].price>obj[2].price&&obj[1].price>obj[3].price&&obj[1].price>obj[4].price){
	printf("Second has the highest price.\n");
}
else if(obj[2].price>obj[1].price&&obj[2].price>obj[3].price&&obj[2].price>obj[0].price&&obj[2].price>obj[4].price){
	printf("Third has the highest price.\n");
}
else if(obj[3].price>obj[1].price&&obj[3].price>obj[2].price&&obj[3].price>obj[0].price&&obj[3].price>obj[4].price){
	printf("Fourth has the highest price.\n");
}
else if(obj[4].price>obj[1].price&&obj[4].price>obj[2].price&&obj[4].price>obj[3].price&&obj[4].price>obj[0].price){
	printf("fourth has the highest price.\n");
}
float total_pages=0;
for (i=0;i<5;i++){
	total_pages+=obj[i].pages;
}
average=total_pages/5;
printf("The average of pages is equal to :%.2f",average);
}
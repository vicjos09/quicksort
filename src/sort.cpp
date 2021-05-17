#include <iostream>
void quickSort(int *arr,int izquierda,int derecha);
void quickSort(int *arr,int izquierda,int derecha)
{
	int i=izquierda;
	int j=derecha;
	int temporal;
	int p=arr[(izquierda+derecha)/2];

   while(i<=j){
         while(arr[i]<p)i++;
         while(arr[j]>p)j--;
         if (i<=j)
         {
         	temporal=arr[i];
         	arr[i]=arr[j];
         	arr[j]=temporal;
         	i++;j--;

         }
      

    }
    if(izquierda<j)
       	  quickSort(arr,izquierda,j);
    if (i<derecha)
          quickSort(arr,i,derecha);

}
int main(int argc, char const *argv[])
{
	int arreglo[10]={88,6,69,-99,98,7,23,5,0,100};
	quickSort(arreglo,0,9);
	for (int i = 0; i < 10; ++i)
	{
		std::cout<<arreglo[i]<<" ";
	}
	return 0;
}
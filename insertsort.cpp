#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>
using namespace std;



main()
{
	int n;
	time_t begin,end;
	cout<<"How long should it be?"<<endl;
	cin>>n;
	int array[n];
	for(int r = 0; r<n; r++)
		array[r] = rand() % 100 + 1;// put in random number here;

  time (&begin);
    
//time
	for(int j = 2; j<=n; j++)
	{
		int key = array[j];
		int i = j-1;
		while(i>=0&& array[i]>key)
		{
			array[i+1] = array[i];
			i = i-1;
		}
		array[i+1] = key;
	}
time (&end);
double difference = difftime (end,begin);
printf ("time taken for insertion sort %.2lf seconds.\n", difference );



}

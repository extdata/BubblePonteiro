#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using std::vector;
using std::cout;
using std::cin;

bool change( int *, int * );
bool change( double *, double * );
void printvector( vector< double > & );
void bubblesort( vector< double > & );

int main()
{
	srand(( int ) time( 0 ));
	int size;
	int count = 0;
	
	cout << "################################\n";
	cout << "Ordenar valores por bubble sort!\n\n";
	cout << "Os valores do vetor ser" << char(198) << "o gerados aleatoriamente!\n\n";
	cout << "Digite o tamanho do vetor: ";
	cin >> size;
	
	vector< double > array(size);
	
	cout << "\nValores gerados aleatoriamente: ";
	for ( int i = 0; i < size; i++ )
		array[i] = rand() % 30 + 1;
		
	printvector( array );
	
	bubblesort( array );
	
	cout << "\n\nValores em ordem crescente: ";
	
	printvector( array );
	
}

void bubblesort( vector< double > & array )
{
	
	for ( int i = 0; i < array.size() - 1; i++ )
		for ( int j = 0; j < array.size() - 1; j++ )
			if ( change( &array[j], &array[j+1] ) );
	
}

void printvector( vector< double > & array )
{
	for ( int i = 0; i < array.size(); i++ )
		cout << array[i] << '\t';
		
	cout << '\n';
}

bool change( int *a, int *b )
{

	int temp;
	if ( *a > *b )
	{
		temp = *a;
		*a = *b;
		*b = temp;
		
		return true;
	}
	else return false;
}

bool change( double *a, double *b )
{
	
	double temp;
	if ( *a > *b )
	{
		temp = *a;
		*a = *b;
		*b = temp;
		
		return true;
	}
	else return false;
}
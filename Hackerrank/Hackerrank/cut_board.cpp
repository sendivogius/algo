#include<iostream>
#include<vector>
#include<string>

using namespace std;
//https://www.hackerrank.com/contests/101hack53/challenges/cut-board


void fillBoard(int n, int m, int x, int y) {
	if(n % 2 == 0 && m % 2 == 0 && x % 2 == 0 && y % 2 == 0 )
	{
		cout << "YES\n" << (n*m-x-y)/2 << endl;
		for(int col = 1; col < m; col += 2){
			auto startRow = (col < x) ? 2 : 1;
			auto endRow = (col < m-y) ? n : n-1;
			for(int row = startRow; row <= endRow; row++)
			{
				cout << row << " " << col << " " << row << " " << col+1 << endl;
			}
		}
		return;
	}
	//else if(n % 2 == 0 && m % 2 == 0 && x % 2 == 1 && y % 2 == 1 )
	//{
	//	cout << "YES\n" << (n*m-x-y)/2 << endl;
	//	for(int row = 2; row < n; row += 2)
	//	{
	//		cout << row << " " << 1 << " " << row+1 << " " << 1 << endl;
	//	}
	//	for(int row = 1; row < n-1; row += 2)
	//	{
	//		cout << row << " " << m << " " << row+1 << " " << m << endl;
	//	}
	//	for(int col = 2; col < m-1; col += 2){
	//		auto startRow = (col < x) ? 2 : 1;
	//		auto endRow = (col < m-y) ? n : n-1;
	//		for(int row = startRow; row <= endRow; row++)
	//		{
	//			cout << row << " " << col << " " << row << " " << col+1 << endl;
	//		}
	//	}
	//	return;
	//}
	else if(n % 2 == 1 && m % 2 == 1 && ((x%2 == 1 && y % 2 == 0) || (x%2 == 0 && y % 2 == 1)))
	{
		cout << "YES\n" << (n*m-x-y)/2 << endl;
		const int startCol = (x % 2 == 0) ? 1 : 2;

		for(int col = startCol; col < m; col += 2){
			auto startRow = (col < x) ? 2 : 1;
			auto endRow = (col < m-y) ? n : n-1;
			for(int row = startRow; row <= endRow; row++)
			{
				cout << row << " " << col << " " << row << " " << col+1 << endl;
			}
		}

		const int verticalCol = (x % 2 == 0) ? m : 1;
		const int verticalRowStart = startCol;
		for(int row = verticalRowStart; row < n; row += 2)
		{
			cout << row << " " << verticalCol << " " << row+1 << " " << verticalCol << endl;
		}
		return;


	}
	else if( n % 2 == 0 && m % 2 == 1 && x % 2 == 1 && y % 2 == 1)
	{
		cout << "YES\n" << (n*m-x-y)/2 << endl;
		for(int col = x+1; col < m; col += 2)
		{
			cout << 1 << " " << col << " " << 1 << " " << col+1 << endl;
		}
		for(int col = 1; col < m-y; col += 2)
		{
			cout << n << " " << col << " " << n << " " << col+1 << endl;
		}
		for(int row = 2; row < n-1; row += 2){
			for(int col = 1; col <= m; col++)
			{
				cout << row << " " << col << " " << row+1 << " " << col << endl;
			}
		}
		return;
	}
	else if( n % 2 == 1 && m % 2 == 0 && x % 2 == 0 && y % 2 == 0)
	{
		cout << "YES\n" << (n*m-x-y)/2 << endl;
		
		for(int col = 1; col < m; col += 2){
			auto startRow = (col < x) ? 2 : 1;
			auto endRow = (col < m-y) ? n : n-1;
			for(int row = startRow; row <= endRow; row++)
			{
				cout << row << " " << col << " " << row << " " << col+1 << endl;
			}
		}
		return;
	}
	else if( n % 2 == 1 && m % 2 == 0 && x % 2 == 1 && y % 2 == 1)
	{
		cout << "YES\n" << (n*m-x-y)/2 << endl;
		for(int row = 2; row < n; row += 2)
		{
			cout << row << " " << 1 << " " << row+1 << " " << 1 << endl;
		}
		for(int row = 1; row < n-1; row += 2)
		{
			cout << row << " " << m << " " << row+1 << " " << m << endl;
		}
		for(int col = 2; col < m-1; col += 2){
			auto startRow = (col < x) ? 2 : 1;
			auto endRow = (col < m-y) ? n : n-1;
			for(int row = startRow; row <= endRow; row++)
			{
				cout << row << " " << col << " " << row << " " << col+1 << endl;
			}
		}
		return;
	}
	else if( n % 2 == 0 && m % 2 == 1 && x % 2 == 0 && y % 2 == 0)
	{
		cout << "YES\n" << (n*m-x-y)/2 << endl;
		for(int col = x+1; col < m-1; col += 2)
		{
			cout << 1 << " " << col << " " << 1 << " " << col+1 << endl;
		}
		for(int col = 1; col < m-1; col += 2)
		{
			cout << 2 << " " << col << " " << 2 << " " << col+1<< endl;
		}
		cout << 1 << " " << m << " " << 2 << " " << m << endl;
		for(int col = 2; col < m; col += 2)
		{
			cout << n-1 << " " << col << " " << n-1 << " " << col+1 << endl;
		}
		for(int col = 2; col < m-y; col += 2)
		{
			cout << n << " " << col << " " << n << " " << col+1 << endl;
		}
		cout << n-1 << " " << 1 << " " << n << " " << 1 << endl;
		for(int row = 3; row < n-1; row += 2){
			for(int col = 1; col <= m; col++)
			{
				cout << row << " " << col << " " << row+1 << " " << col << endl;
			}
		}
		return;
	}

	cout << "NO\n";
	return;
}


int main()
{
    int n, m, x, y;
	cin >> n >> m >> x >> y;
    fillBoard(n, m, x, y);
    return 0;
}
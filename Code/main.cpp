#include "Solution.h"

#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Solution test;
	test.isHeuristic = true; //using Heuristic search strategy, otherwise isHeuristic := false
	test.solve();
	cout<<endl<<"Press any key to continue...";
	getch();
	return 0;
}

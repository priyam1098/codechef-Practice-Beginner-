#include <stdio.h> 

int main() {
	// Read the number of test cases.
	int T;
	scanf("%d", &T);
	while (T--) {
		int a, b;
		scanf("%d %d", &a, &b);
		int ans = a + b;
		printf("%d\n", ans);
	}

	return 0;
}

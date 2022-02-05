int countContains(const double a1[], int n1, const double a2[], int n2)
{
	if (n2 <= 0) return 1;
	if (n1 < n2) return 0;
	int** dp = new int* [n1 + 1];
	for (int i = 0; i <= n1; i++) {
		dp[i] = new int [(i<n2?i:n2)+2];
	}
	dp[0][0] = 1;
	dp[0][1] = 0;
	for (int i = 1; i <= n1; i++) {
		dp[i][0] = 1;
		int lim = (i<n2?i:n2);
		for (int j = 1; j <= lim; j++) {
			// simplifying step
		}
		dp[i][lim + 1] = 0;
	}
	int out = dp[n1][n2];
	for (int i = 0; i <= n1; i++) {
		delete [] dp[i];
	}
	delete[] dp;
	return out;
}

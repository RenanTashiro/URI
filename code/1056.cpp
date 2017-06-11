#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
 
// M is number of applicants and N is number of jobs
typedef vector<vector<bool>> vvb; // vbb[M][N]
 
// A DFS based recursive function that returns true if a
// matching for vertex u is possible
bool bpm(vvb bpGraph, int u, bool seen[], int matchR[])
{
    // Try every job one by one
    for (int v = 0; v < (int)bpGraph[u].size(); v++)
    {
        // If applicant u is interested in job v and v is
        // not visited
        if (bpGraph[u][v] && !seen[v])
        {
            seen[v] = true; // Mark v as visited
 
            // If job 'v' is not assigned to an applicant OR
            // previously assigned applicant for job v (which is matchR[v]) 
            // has an alternate job available. 
            // Since v is marked as visited in the above line, matchR[v] 
            // in the following recursive call will not get job 'v' again
            if (matchR[v] < 0 || bpm(bpGraph, matchR[v], seen, matchR))
            {
                matchR[v] = u;
                return true;
            }
        }
    }
    return false;
}
 
// Returns maximum number of matching from M to N
int maxBPM(vvb bpGraph)
{
    // An array to keep track of the applicants assigned to
    // jobs. The value of matchR[i] is the applicant number
    // assigned to job i, the value -1 indicates nobody is
    // assigned.
    int matchR[bpGraph[0].size()];
 
    // Initially all jobs are available
    memset(matchR, -1, sizeof(matchR));
 
    int result = 0; // Count of jobs assigned to applicants
    for (int u = 0; u < (int)bpGraph.size(); u++)
    {
        // Mark all jobs as not seen for next applicant.
        bool seen[bpGraph[u].size()];
        memset(seen, 0, sizeof(seen));
 
        // Find if the applicant 'u' can get a job
        if (bpm(bpGraph, u, seen, matchR))
            result++;
    }
    return result;
}
 
// Driver program to test above functions
int main()
{	
	int T;
	
	cin >> T;
	
	for(int t = 1; t <= T; t++) {		
		// Let us create a bpGraph shown in the above example		
		vector<int> A, B;
		int m, n, v;
		
		cin >> m;
		
		for(int i = 0; i < m; i++) {
			cin >> v;
			A.push_back(v);
		}
		
		cin >> n;
		
		if(n == 0 && m == 0) {
			cout << "Case " << t << ": 0" << endl; 
		}
		else {
			vvb bpGraph(m, vector<bool>(n));
			
			for(int j = 0; j < n; j++) {
				cin >> v;
				for(int i = 0; i < m; i++) {
					if(A[i] == 0)	bpGraph[i][j] = v == 0;				
					else 			bpGraph[i][j] = v % A[i] == 0;
				}
			}					 
		 
			cout << "Case " << t << ": " << maxBPM(bpGraph) << endl; 
		}
	}
}

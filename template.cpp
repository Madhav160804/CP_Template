{
	// Place your global snippets here. Each snippet is defined under a snippet name and has a scope, prefix, body and 
	// description. Add comma separated ids of the languages where the snippet is applicable in the scope field. If scope 
	// is left empty or omitted, the snippet gets applied to all languages. The prefix is what is 
	// used to trigger the snippet and the body will be expanded and inserted. Possible variables are: 
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. 
	// Placeholders with the same ids are connected.
	// Example:
	// "Print to console": {
	// 	"scope": "javascript,typescript",
	// 	"prefix": "log",
	// 	"body": [
	// 		"console.log('$1');",
	// 		"$2"
	// 	],
	// 	"description": "Log output to console"
	// }
	"cp": {
		"body": [
			"#include <bits/stdc++.h>",
			" ",
			"#define vint vector<int>",
			"#define take(a,n) vint a(n); for(int j=0;j<n;j++) cin>>a[j];",
			"#define give(a,n) for(int j=0;j<n;j++) cout<<a[j]<<' ';",
			"#define pb push_back",
			"#define r0 return 0",
			"#define f0(i,n) for(int i=0; i<(int)n; ++i)",
			"#define f1(i,n) for(int i=1; i<=(int)n; ++i)",
			"#define nl '\\n'",
			"#define MOD 1000000007",
			"#define pii pair<int,int>",
			"#define test int t;cin>>t;while(t--)",
			"#define int long long",
			"#define mp make_pair",
			"#define sz(a) a.size()",
			"#define be(a) a.begin(),a.end()",
			"using namespace std;",
			" ",
			"//////////////////////////////////////////////////////////////",
			" ",
			"void solve(){",
			"	",
			"}",
			" ",
			"int32_t main(){",
			"    ios_base::sync_with_stdio(false);",
			"    cin.tie(NULL);",
			"    cout.tie(NULL);",
			" ",
			"    #ifndef ONLINE_JUDGE",
			"    freopen(\"input.txt\",\"r\",stdin);",
			"    freopen(\"output.txt\",\"w\",stdout);",
			"    #endif",
			" ",
			"    test",
			"        solve();",
			" ",
			"    return 0;",
			"}"
		],
		"prefix": "cp",
		"description": "code snippet for any cp solution."
	}
}
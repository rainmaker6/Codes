#include<iostream>
#include<list>
using namespace std;

//adjacency list
class Graph {
	int V;
	list<int>* adj;
	void DFSUtil(int v,bool visited[]);
	
public:
	Graph(int V);//constructor
	
	void addEdge(int v,int w);
	
	void DFS(int v);//reachable from vertex v
	
};
Graph::Graph(int V) {
	this->V=V;
	adj = new list<int> [V];
	//creating a adj list of size of no. of vertices	
}
void Graph::addEdge(int v,int w) {
	adj[v].push_back(w);
	//v se reachable vertices ki list
}
void Graph::DFSUtil(int v,bool visited[]) {
	visited[v] = true;
	cout<<v<<' ';
	list<int>::iterator i;
	for(i=adj[v].begin();i!=adj[v].end();++i) {
		if(!visited[*i]) DFSUtil(*i,visited);
	}
	
}
void Graph::DFS(int v) {
	bool* visited = new bool[V];
	for(int i=0;i<V;++i) visited[i] = false;
	
	for (int i = 0; i < V; i++)
        if (visited[i] == false)
            DFSUtil(i, visited);
}
int main() {
	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(2,0);
	g.addEdge(2,3);
	g.addEdge(3,3);
	
	g.DFS(0);
	
	return 0;
}


const int N = 10;
bool visited[N];
int par[N];
vector<int> g(N);
void dfs(int v) {
	visited[v] = true;
	for(auto i : g[v]) {
		if(!visited[i]) 
			dfs(i);
	}
}
int main() {
	
	return 0;
}

/*https://codeforces.com/blog/entry/68138
https://codeforces.com/blog/entry/16823
https://codeforces.com/blog/entry/16221
https://codeforces.com/blog/entry/54843*/

class Solution {
public:
	int mx=-1;
	
	void dfs(Node* root, int level) {
		if(!root) return;
		
		mx = max(mx,level);
		
		for(auto i:root->children) 
			dfs(i,level+1);
	}
	int maxDepth(Node* root) {
		dfs(root,1);
		
		return mx;
	}
	
};

//Iterative DFS
vector<vector<int>> paths;
queue<vector<int>> q;
q.push({0});
while(!q.empty()){
	vector<int> curr=q.front();
	int t=*(curr.end()-1);
	q.pop();
	for(int i=0;i<graph[t].size();++i){
		curr.push_back(graph[t][i]);
		if(graph[t][i]==graph.size()) paths.push_back(curr);
		else q.push(curr);
		curr.erase(curr.end()-1);
	}
}
return paths;
//we use a stack here 
//start from any vertex
//dfs spanning tree 
//when we encounter the visited edges again they are called back edges
//pre oder traversal of a tree
void dfs(int vertex){
	int n=vertices.size();
	vector<int> visited(n);
	stack<int> s;
	s.push(vertex);
	visited[vertex]=true;
	while(!s.empty()){
		int x=s.top();
		s.pop();
		if(!visited[x]) visited[x]=true;
		for(auto i:adj[x])
			if(!visited[i]) stack.push(i);
	}
}

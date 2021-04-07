void bfs(Tree* root){
	vector<int> a;
	queue<Tree*> q;
	q.push(root);
	while(!q.empty()){
		int sz=q.size();//changes every time
		for(int i=0;i<sz;++i){
			Tree* x=q.front();
			a.push_back(x->val);
			//do opertion on x
			if(x->right) q.push(x->right);
			if(x->left) q.push(x->left);
			q.pop();
		}
	}
	//a is the level order travesal of the tree
}
//the tree here we get is bfs spanning tree
//the edges we face again are called cross edges
//we can start with any vertex 
//we can visit adjacent vertices in any order
//explore adjacent vertices first then go to any other vertex for exploration
//select from the queue only for exploration 
//level order of tree 

void bfs(Graph* node){
	vector<bool> visited(1e6);
	queue<Graph*> q;
	q.push(*node);
	visited[*node]=true;
	while(!q.empty()){
		Graph* x=q.front();
		q.pop();
		for(auto &i:adj[x]){
			if(!visited[i]) {
				visited[i]=true;
				q.push(*i);
			}
			
		}
	}
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    istream& in(std::cin);
    ostream& out(std::cout);
    ios_base::sync_with_stdio(false);
    in.tie(NULL);
    int T=1;
    //in>>T;mt19937
    while(T--){
        //ek bool array lia uska last element 1 leleia 
        //aur ek int array ka first element 1 leleia
        //then we push the root 
        //like bfs we do the same procedure
        //we store the front value of queue in a variable then pop it out of the Q
        //if it is greater than 0 and pre
    /*cin >> n >> m;
    we need to go from n to m so we construct the possibilities of it and represent it as a
    tree and to find anything in a graph we use dfs or bfs we prefer bfs as it's easy
    we'll be doing same as we were doing in normal dfs we will push the root element in the q 
    then we will be running the loop while the q is non empty and pop the front element
    now we are in need to push the elements in the q so in the given q we have 2 buttons
    so for every node we have the two possibilities if the number is greater than 0 
    we can subtract 1
    or if it is less than m we could x2 here we could've swapped the possibilities 
    we could've x2 if the number is greater than 0 but (-13x2 it is still negative so machine
    will break) so we have to deal every number in a positive way so -1 is more preffered for
    >0 case 
    
    
	used[n] = 1;
	need[n] = 0;
	q.push(n);
	while (q.size())
	{
		x = q.front();
		q.pop();
		if (x > 0 && !used[x - 1]) if we haven't visited it before
		{
			used[x - 1] = 1; we've seen this before
			need[x - 1] = need[x] + 1;//x is the front of the queue 
			
			q.push(x - 1);visited
		}
		if (x <= m && !used[x + x])if we haven't visited it before
		{
			used[x + x] = 1; we've seen this before so therefore marking it for future
			need[x + x] = need[x] + 1;
			q.push(x + x);visited
		}
	}*/
    }
    return 0;
}

 

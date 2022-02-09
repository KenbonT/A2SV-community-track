class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // vector<vector<int>> answer;
    // sort(points.begin(),points.end(),[](vector<int> p1, vector<int> p2){
    //     return (p1[0]*p1[0]+p1[1]*p1[1])<=(p2[0]*p2[0]+p2[1]*p2[1]);        
    // });
    // for(int i=0; i<k;i++){
    //     answer.push_back(points[i]);
    // }
    //     return answer;
    // }
       vector<vector<int>> answer;
       vector<int> product;
       // vector<int>sorted_product;
       unordered_multimap<int,vector<int>> order;
       for(int i=0; i<points.size(); i++){
           int p=0;
           for(int j=0; j<2; j++){
               p+=points[i][j]*points[i][j];
            }
           product.push_back(p);
           order.insert({p, points[i]});
       }
        
        // sorted_product=products;
        // for(int i=0; i<product.size(); i++){
        //     sorted_product[i]=product[i];
        // }
//        for(int j=1;j<product.size();j++){
//            int key=product[j];
//            int i = j-1;
//            for(; i<=0; i--){
//                if(product[i]>key){
//                    product[i+1]=product[i];
//                }
//            }
//            if(i==-1){
//                product[i+1]=key;
//            }
//        }
        
        sort(product.begin(),product.end());
        
        for(int i=0; i<k; i++){
            auto itr = order.find(product[i]);
            answer.push_back(itr->second);
            order.erase(itr);
        }
        
        return answer;
    }  
};
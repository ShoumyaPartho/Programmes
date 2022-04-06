#include<iostream>
using namespace std;

void bsearch(int heights[],int n,int q){
    int low=0,high=q-1,mid,res1=0,res2=0;
    while(low<=high){
        mid=(low+high)/2;

        if(heights[mid]<n){
            if(mid==q-1) {
                res1=heights[mid];
                break;
            }
            else if(heights[mid+1]<n) low=mid+1;
            else if(heights[mid+1]>=n) {
                res1=heights[mid];
                break;
            }
        }
        else if(heights[mid]>=n ) {
                if(mid==0) {
                    res1=0;
                    break;
                }
                else if(heights[mid-1]>=n) high=mid-1;
                else if(heights[mid-1]<n) {
                    res1=heights[mid-1];
                    break;
                }
        }
    }

    low=0,high=q-1;
    while(low<=high){
        mid=(low+high)/2;

        if(heights[mid]>n){
            if(mid==0) {
                res2=heights[mid];
                break;
            }
            else if(heights[mid-1]>n) high=mid-1;
            else if(heights[mid-1]<=n) {
                res2=heights[mid];
                break;
            }
        }
        else if(heights[mid]<=n ) {
                if(mid==q-1) {
                    res2=0;
                    break;
                }
                else if(heights[mid+1]>n) {
                    res2=heights[mid+1];
                    break;
                }
                else if(heights[mid+1]<=n) low=mid+1;
        }
    }
    if(res1==0) cout<<"X ";
    else cout<<res1<<" ";
    if(res2==0) cout<<"X"<<endl;
    else cout<<res2<<endl;
}

int main(){
    int n,q;
    cin>>n;
    int heights[n];
    for(int i=0;i<n;i++) cin>>heights[i];
    cin>>q;
    int query[q];
    for(int i=0;i<q;i++) {
        cin>>query[i];
        bsearch(heights,query[i],n);
    }

    return 0;
}

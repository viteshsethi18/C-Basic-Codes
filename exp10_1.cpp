#include<iostream>
using namespace std;
unsigned long get_hash(unsigned long sapid){
unsigned long sum{sapid%1000};
while(sum>9) sum-=9;
return sum;
}
int main(){
cout<<"SAP ID: %lu\tFamily:%lu\n", 500076357, get_hash(500076357);
cout<<"SAP ID: %lu\tFamily:%lu\n", 500076357, get_hash(500076357);
cout<<"SAP ID: %lu\tFamily:%lu\n", 500076357, get_hash(500076357);
return 0;
}

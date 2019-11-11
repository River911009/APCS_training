/**
 * APCS 28 Oct, 2017 #1 Logic Operators
 * coded on 5 Nov by River.
 */
 #include <iostream>

int main(){
  int a,b,ans,flag=0;

  std::cin>>a>>b>>ans;

  if((int)(a&&b)==ans) {
    std::cout<<"AND\n";
    flag=1;
  }
  if((int)(a||b)==ans) {
    std::cout<<"OR\n";
    flag=1;
  }
  if((int)((a==0 && b!=0) || (a!=0 && b==0))==ans) {
    std::cout<<"XOR\n";
    flag=1;
  }
  if(!flag) std::cout<<"IMPOSSIBLE\n";

  return(0);
}

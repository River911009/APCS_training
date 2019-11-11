/**
 * APCS 28 Oct, 2017 #1 Logic Operators
 * coded on 11 Nov by River.
 */
 #include <iostream>

int main(){
  int a,b,ans;

  std::cin>>a>>b>>ans;

  if(a==0 && b==0 && ans==0) std::cout<<"AND\nOR\nXOR\n";
  if(a==0 && b==0 && ans!=0) std::cout<<"IMPOSSIBLE\n";
  if(a==0 && b!=0 && ans==0) std::cout<<"AND\n";
  if(a!=0 && b==0 && ans==0) std::cout<<"AND\n";
  if(a==0 && b!=0 && ans==1) std::cout<<"OR\nXOR\n";
  if(a!=0 && b==0 && ans==1) std::cout<<"OR\nXOR\n";
  if(a!=0 && b!=0 && ans==0) std::cout<<"XOR\n";
  if(a!=0 && b!=0 && ans==1) std::cout<<"AND\nOR\n";

  return(0);
}

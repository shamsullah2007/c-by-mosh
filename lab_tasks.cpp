#include <atomic>
#include <iostream>
// // // #include <math.h>
using namespace std;
// // //
// // // // int main() {
// // // // 	//question 1 and 2;
// // // // 	int num;
// // // // 	cout<<"enter a number to get the swequance upto that number";
// // // // 	cin>>num;
// // // // 	if (cin.fail()){
// // // // 		cout<<"please enter only integers"<<endl;
// // // // 	}
// // // // 	for (int i=0;i<=num;i++){
// // // // 		if (i%2==0){
// // // // 			cout<<i<<" is even number"<<endl;
// // // //
// // // // 		}
// // // // 		else {
// // // // 		cout<<i<<" is odd number"<<endl;}
// // // // 	}
// // // //
// // // // 	return 0;
// // // // }
// // // //
// // // // int main(){
// // // // 	int num;
// // // // 	cin>>num;
// // // // 	for (int i=0;i<=10;i++){
// // // //
// // // // 			cout<<num<<" x "<<i
// // // // 			<<" = "<<num*i<<endl;
// // // //
// // // // 	}
// // // // }
// // // //
// // // // int main(){
// // // // 	int num;
// // // //     cin>>num;
// // // // 	int product=1;
// // // // 	for (int i=1;i<=num;i++){
// // // // 		if (i%2!=0){
// // // // 			product*=i;
// // // // 		}
// // // //
// // // //
// // // //
// // // // 	}
// // // // 	cout<<product;
// // // // 	}
// // // //
// // // // int main(){
// // // // 	int num;
// // // // 	cin>>num;
// // // // 	int sum=0;
// // // // 	for (int i=1;i<=num;i++){
// // // // 		sum+=i*i;
// // // // 	}
// // // // 	cout<<sum;
// // // // }
// // // //
// // // // int main(){
// // // //    int stars;
// // // //    cin>>stars;
// // // //    for (int i =1;i<=stars;i++){
// // // //    	for (int j=1;j<i;j++){
// // // //    		cout<<"*";
// // // // 	   }
// // // // 	   cout<<endl;
// // // //    }
// // // // }
// // // // int main(){
// // // //    int stars;
// // // //    cin>>stars;
// // // //    for (int i =stars;i>0;i--){
// // // //    	for (int j=1;j<i;j++){
// // // //    		cout<<"*";
// // // // 	   }
// // // // 	   cout<<endl;
// // // //    }
// // // // }
// // // //
// // // //
// // // //
// // #include <iostream>
// // #include <math.h>
// // using namespace std;
// //   int main() {
// //       int a ,b;
// //       cout<<"enter two numbers so that the other number power by the first number:";
// //       cin>>a>>b;
// //       int x=a;
// //       for (int i=1;i<b;i++) {
// //           x*=a;
// //
// //       }
// //
// //  //this is another way of doing this
// //       int ans=pow(a,b);
// //       cout<<ans;
// //       cout<<x<<endl;
// //       return 0;
// //   }
// // //
// // //
// // //
// // //
// // //
// // //
// // // // int  main() {
// // // //     int number;
// // // //     cout<<"enter a number:";
// // // //     cin>>number;
// // // //     bool is_prime=true;
// // // //     if(number==1) {
// // // //
// // // //     }
// // // //
// // // // }{
// // //
// // //
// // //
// // // // int main() {
// // // //     int number;
// // // //     cout << "Please enter a number: ";
// // // //     cin>>number;
// // // //     for (int i=1;i<=number;i++) {
// // // //         for (int j=1;j<=number;j++) {
// // // //             cout<<"#";
// // // //         }
// // // //         cout<<endl;
// // // //
// // // //     }
// // // //     return 0;
// // // // }
// // // // 02
// // //  // int main() {
// // //  //     int sum=0;
// // //  //     for (int i=100;i<200;i++) {
// // //  //         if (i%9==0) {
// // //  //             sum+=i;
// // //  //             cout<<i<<"  \n";
// // //  //         }
// // //  //
// // //  //     }
// // //  //     cout << "the sum of number divisble by 9 inbetween 100 and 200 is: "<<sum;
// // //  // }
// // // //03
// // // // int main() {
// // // //     int nun;
// // // //     cin >> nun;
// // // //     int reversed=0;
// // // //     for (;nun!=0;) {
// // // //         int remainder=nun%10;
// // // //         reversed=reversed*10+remainder;
// // // //         nun/=10;
// // // //
// // // //     }
// // // //     cout << reversed;
// // // // }
// // // // 04
// // // int main() {
// // //     int number;
// // //     cout << "Please enter a number: ";
// // //     cin >> number;
// // //     for (int i = 1; i <= number; i++) {
// // //         for (int j=1;j<=i;j++) {
// // //             cout<<i;
// // //         }
// // //         cout<<endl;
// // //     }
// // // }
// // //
// // // // int main() {
// // // //     int number;
// // // //     int t=1;
// // // //     cin >> number;
// // // //     int spaces=number+4-1;
// // // //     for (int i=1;i<=number;i++) {
// // // //         for (int j=spaces;j>=1;j--) {
// // // //             cout<<" ";
// // // //
// // // //         }
// // // //         for (int k=1;k<=i;k++) {
// // // //             cout<<t++<<" ";
// // // //         }
// // // //         cout<<endl;
// // // //         spaces--;
// // // //
// // // //     }
// // // //
// // // //     return 0;
// // // // }
// // //
// // //
// // // // 01 while and do while
// // // // int main() {
// // // //     int numbet;
// // // //     cin >> numbet;
// // // //     int i=0;
// // // //     while (i<=numbet) {
// // // //         int j=0;
// // // //         while (j<=numbet) {
// // // //             cout << "#" << " " ;
// // // //             j++;
// // // //         }
// // // //         cout << endl;
// // // //         i++;
// // // //
// // // //     }
// // // //     return 0;
// // // // }
// // //
// // // // int main() {
// // // //     int number;
// // // //     cout << "Please enter a number: ";
// // // //     cin >> number;
// // // //     int i=0;
// // // //     do {
// // // //         int j=0;
// // // //         do {
// // // //             cout<<"#";
// // // //             j++;
// // // //         }while (j<number);
// // // //         cout<<endl;
// // // //         i++;
// // // //     }while (i<number);
// // // //
// // // //     return 0;
// // // // }
// // //
// // //
// // // // 02 while and do while loop
// // // // int main() {
// // // //     int i=100;
// // // //     int sum = 0;
// // // //     while (i<=200) {
// // // //         if (i%9==0) {
// // // //             sum+=i;
// // // //             cout << i << endl;
// // // //         }
// // // //         i++;
// // // //     }
// // // //     cout << sum;
// // // //     cout << endl;
// // // //
// // // //     return 0;
// // // // }
// // //
// // // // int main() {
// // // //     int i=100;
// // // //     int sum = 0;
// // // //     do {
// // // //         if (i%9 == 0) {
// // // //             sum+=i;
// // // //             cout << i << endl;
// // // //
// // // //         }
// // // //         i++;
// // // //
// // // //     }while(i<200);
// // // //     cout << sum << endl;
// // // //
// // // // }
// // //
// // // // 03 by while and do while
// // // // int main() {
// // // //     int number;
// // // //     cin >> number;
// // // //
// // // //     int reversed = 0;
// // // //     while (number!=0) {
// // // //         int remainder=number%10;
// // // //         reversed = reversed*10 + remainder;
// // // //         number=number/10;
// // // //     }
// // // //     cout << reversed;
// // // // }
// // //
// // // // int main() {
// // // //     int number,reversed=0;
// // // //     cin>>number;
// // // //     do {
// // // //         reversed=reversed*10+number%10;
// // // //         number/=10;
// // // //         cout<<reversed<<endl;//it just for printing that what happens ar adding somethin to the reversed
// // // //     }while(number!=0);
// // // //     cout<<reversed<<endl;
// // // //
// // // // }
// // //
// // // // 04 while and do while loop
// // // // int main() {
// // // //     int rows;
// // // //     cout<<"Enter Number of Rows: ";
// // // //     cin>>rows;
// // // //     int i=1;
// // // //     while (i<=rows) {
// // // //         int j=1;
// // // //         while (j<=i) {
// // // //             cout<<i;
// // // //             j++;
// // // //         }
// // // //         i++;
// // // //         cout<<endl;
// // // //     }
// // // // }
// // //
// // // // int main() {
// // // //     int rows;
// // // //     cout<<"Enter Number of Rows: ";
// // // //     cin>>rows;
// // // //     int i_controlrows=1;
// // // //     do {
// // // //         int j_controlelements=1;
// // // //         do {
// // // //             cout<<i_controlrows;
// // // //             j_controlelements++;
// // // //
// // // //
// // // //         }while (j_controlelements<=i_controlrows);
// // // //         i_controlrows++;
// // // //         cout<<endl;
// // // //     }while(i_controlrows<=rows);
// // // // }
// // //
// // //
// // // // 05 while and do while loop;
// // //
// // // int main() {
// // //     int t=1;
// // //     int number;
// // //     cout << "Enter number of units: ";
// // //     cin >> number;
// // //     int spaces=number-1;
// // //     int i=1;
// // //     while (i<=number) {
// // //         int j=spaces;
// // //         while (j>0) {
// // //             cout<<" ";
// // //             j--;
// // //         }
// // //         int k=1;
// // //         while (k<i) {
// // //             cout<<t++<<" ";
// // //             k++;
// // //         }
// // //         cout<<endl;
// // //         spaces--;
// // //         i++;
// // //     }
// // // }
// // //
// // // int main() {
// // //     int t = 1;
// // //     int number;
// // //     cout << "Enter number of units: ";
// // //     cin >> number;
// // //     int spaces = number - 1;
// // //     int i = 1;
// // //     do {
// // //         int j = spaces;
// // //         do {
// // //             cout << " ";
// // //             j--;} while (j > 0);
// // //         int k = 1;
// // //         do {
// // //             cout << t++ << " ";
// // //             k++;} while (k <= i);
// // //         cout << endl;
// // //         spaces--;
// // //         i++;
// // //     } while (i <= number);
// // //
// // //     return 0;
// // // }
// //
// //
// //
// //
// //
// //
//
// #include <cmath>
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main() {
//     int number;
//     cout << "Enter +VE,-VE,AND ZERO AND THERE NUMBER OF COUNT: ";
//     cin >> number;
//     int countzero=0;
//     int count_positve=0;
//     int countneg=0;
//     while (!cin.fail()) {
//         if (number>0) {
//             cout<<"positive";
//             count_positve++;
//             cin>>number;}
//         else if (number<0) {
//             cout<<"negative";
//             countneg++;
//             cin>>number;}
//         else {
//             cout<<"zero";
//             countzero++;
//             cin>>number;}}
//     cout<<endl<<"positive "<<count_positve<<endl<<"Negative "<<countneg<<endl<<"zero "<<countzero;

int main() {
    int a ,b;
    cout<<"enter two number:";
    cin>>a>>b;
    for (int i = 1;i>0;i++) {
        if (i%a==0 && i%b==0) {
            cout<<"lcm is = "<<i;
            break;
        }

    }
}

#include<iostream>
using namespace std;
char th,th1,th2,th3,th4,th5,th6,th7,th8,th9,th10,th11,th12,th13,th14,th15,th16,th17,th18,th19,th20,th21,th22,th23,th24,th25,th26,th27,th28,th29,th30;
float sum;
void fnQ1(){
	T1:
      cout<<"1.What was the name of C++ ? "<<endl;
	  cout<<"A.C++ "<<endl;
	  cout<<"B.CPP "<<endl;
	  cout<<"C.with Class "<<endl;
	  cout<<"D.None of the above"<<endl;
	  cout<<"\nAnswer here : ";cin>>th;th1=th;
	   if(th == 'A' ||th == 'a'){
	   	system("CLS");
			sum += 3;
			cout<<"\n--------------------------------------------------------\n\n";	
			cout<<"1.What was the name of C++ ? "<<endl;
	        cout<<"A.C++             "<<endl;
	        cout<<"B.CPP              "<<endl;
	        cout<<"C.with Class       "<<endl;
	        cout<<"D.None of the above"<<endl;
	        cout<<"Your answer is correct"<<endl;
			cout<<"Your Score is : "<<sum<<" / 100";
			cout<<"\n\n--------------------------------------------------------\n\n";
		}else if (th != 'C'&th != 'c'&th != 'B'&th != 'b'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T1;
		}else{
			system("CLS");
			sum += 0;
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"1.What was the name of C++ ? "<<endl;
	        cout<<"\nA.C++             "<<endl;
	        cout<<"B.CPP              "<<endl;
	        cout<<"C.with Class       "<<endl;
	        cout<<"D.None of the above"<<endl;
			cout<<"Your Score is : "<<sum<<" / 100";
			cout<<"\n\n--------------------------------------------------------\n\n";
		}
	}
void fnQ2(){
	T2:
	cout<<"2.In which year C++ was developed'?"<<endl;
	cout<<"\nA.1995 "<<endl;
	cout<<"B.1983   "<<endl;
	cout<<"C.1979   "<<endl;
	cout<<"D.1972   "<<endl;
	cout<<"\nAnswer here : ";cin>>th;th2=th;
	 if(th == 'C' ||th == 'c'){
	   	system("CLS");
			sum += 3;
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"2.In which year C++ was developed'?"<<endl;
			cout<<"\nA.1995 "<<endl;
        	cout<<"B.1983   "<<endl;
	        cout<<"C.1979   "<<endl;
        	cout<<"D.1972   "<<endl;
        	cout<<"Your answer is correct"<<endl;
			cout<<"Your Score is : "<<sum<<" / 100";
		}else if (th != 'A'&th != 'a'&th != 'B'&th != 'b'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T2;
		}else{
			system("CLS");
			sum += 0;
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"2.In which year C++ was developed'?"<<endl;
			cout<<"\nA.1995 "<<endl;
        	cout<<"B.1983   "<<endl;
	        cout<<"C.1979   "<<endl;
        	cout<<"D.1972   "<<endl;
        	cout<<"\n\n--------------------------------------------------------\n\n";
        }
}
void fnQ3(){
	T3:
	cout<<"3.The term OOPS stands for__ '?      "<<endl;
	cout<<"/nA.Object oriented programing     "<<endl;
	cout<<"B.Object oriented programing system "<<endl;
	cout<<"C.Oried programing language        "<<endl;
	cout<<"D.Object oriented                  "<<endl;
	cout<<"\nAnswer here : ";cin>>th;th3=th;
	 if(th == 'C' ||th == 'c'){
	   	system("CLS");
			sum += 3;
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"3.The term OOPS stands for__ '?      "<<endl;
	        cout<<"/nA.Object oriented programing     "<<endl;
	        cout<<"B.Object oriented programing system "<<endl;
	        cout<<"C.Oried programing language        "<<endl;
	        cout<<"D.Object oriented                  "<<endl;
	        cout<<"Your answer is correct"<<endl;
			cout<<"Your Score is : "<<sum<<" / 100";
		}else if (th != 'A'&th != 'a'&th != 'B'&th != 'b'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T3;
		}else{
			system("CLS");
			sum += 0;
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"3.The term OOPS stands for__ '?      "<<endl;
	        cout<<"/nA.Object oriented programing     "<<endl;
	        cout<<"B.Object oriented programing system "<<endl;
	        cout<<"C.Oried programing language        "<<endl;
	        cout<<"D.Object oriented                  "<<endl;
		}	cout<<"\n\n--------------------------------------------------------\n\n";	
}
void fnQ4() {
	T4:
	cout<<"4.size of a turbo'?"<<endl;
	cout<<"/nA.16 bit"<<endl;	
	cout<<"B.32bit  "<<endl;
	cout<<"C.64bit  "<<endl;
	cout<<"D.34bit  "<<endl;
	cout<<"\nAnswer here : ";cin>>th;th4=th;
	 if(th == 'B' ||th == 'b'){
	   	system("CLS");
			sum += 3; 
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"4.size of a turbo'?"<<endl;
	        cout<<"/nA.16 bit"<<endl;	
        	cout<<"B.32bit  "<<endl;
	        cout<<"C.64bit  "<<endl;
	        cout<<"D.34bit  "<<endl; 
	        cout<<"Your answer is correct"<<endl;
			cout<<"Your Score is : "<<sum<<" / 100";
		}else if (th != 'A'&th != 'a'&th != 'C'&th != 'c'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T4;
		}else{
			system("CLS");
			sum += 0;
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"4.size of a turbo'?"<<endl;
	        cout<<"/nA.16 bit"<<endl;	
        	cout<<"B.32bit  "<<endl;
	        cout<<"C.64bit  "<<endl;
	        cout<<"D.34bit  "<<endl;
	        cout<<"\n--------------------------------------------------------\n\n";
	    }		
}
void fnQ5(){
	T5:
	cout<<"5.What will be the output of the following C++ program'"<<endl;
	cout<<"A.5                 "<<endl;
	cout<<"B.6                 "<<endl;
	cout<<"C.compile time error"<<endl;
	cout<<"D.runtime error     "<<endl;
	cout<<"\nAnswer here : ";cin>>th;th5=th;
	 if(th == 'A' ||th == 'a'){
	   	system("CLS");
			sum += 3;
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"5.What will be the output of the following C++ program'"<<endl;
	        cout<<"A.5                 "<<endl;
	        cout<<"B.6                 "<<endl;
        	cout<<"C.compile time error"<<endl;
        	cout<<"D.runtime error     "<<endl;
        	cout<<"Your answer is correct"<<endl;
			cout<<"Your Score is : "<<sum<<" / 100";
		}else if (th != 'C'&th != 'c'&th != 'B'&th != 'b'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T5;
	   }else{
			system("CLS");
			sum += 0;
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"5.What will be the output of the following C++ program'"<<endl;
	        cout<<"A.5                 "<<endl;
	        cout<<"B.6                 "<<endl;
        	cout<<"C.compile time error"<<endl;
        	cout<<"D.runtime error     "<<endl;
        	cout<<"Your answer is correct"<<endl;
	        cout<<"\n--------------------------------------------------------\n\n";
	}
}
void fnQ6(){
	T6:
	cout<<"6.Which of the following is called as ' THE LAND OF THUNDERBOLT'?"<<endl;	
	cout<<"/nA.Arab"<<endl;
	cout<<"B.Bhutan"<<endl;
	cout<<"C.Canada"<<endl;
	cout<<"D.Cambodia"<<endl;
	cout<<"\nAnswer here : ";cin>>th;th6=th;	
	 if(th == 'A' ||th == 'a'){
	   	system("CLS");
			sum += 3;	
			cout<<"\n--------------------------------------------------------\n\n";
		    cout<<"6.Which of the following is called as ' THE LAND OF THUNDERBOLT'?"<<endl;	
	        cout<<"/nA.Arab"<<endl;
        	cout<<"B.Bhutan"<<endl;
	        cout<<"C.Canada"<<endl;
	        cout<<"D.Cambodia"<<endl;
	        cout<<"Your answer is correct"<<endl;
			cout<<"Your Score is : "<<sum<<" / 100";
       }else if (th != 'C'&th != 'c'&th != 'B'&th != 'b'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T6;
	   }else{
			system("CLS");
			sum += 0;
			cout<<"\n--------------------------------------------------------\n\n";
	        cout<<"6.Which of the following is called as ' THE LAND OF THUNDERBOLT'?"<<endl;	
            cout<<"/nA.Arab"<<endl;
	        cout<<"B.Bhutan"<<endl;
	        cout<<"C.Canada"<<endl;
        	cout<<"D.Cambodia"<<endl;
	        cout<<"\n--------------------------------------------------------\n\n";
	 }	        
}
void fnQ7(){
	T7:
	cout<<"7. Which of the following is called as ' THE WINDY CITY?"<<endl;
	cout<<"/nA.Jerusalem"<<endl;
	cout<<"B.Japan    "<<endl;
	cout<<"C.Chicago  "<<endl;
	cout<<"D.Cambodai "<<endl;
	cout<<"\nAnswer here : ";cin>>th;th7=th;
	 if(th == 'C' ||th == 'c'){
	   	system("CLS");
			sum += 3;	
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"7. Which of the following is called as ' THE WINDY CITY?"<<endl;
	        cout<<"/nA.Jerusalem"<<endl;
        	cout<<"B.Japan    "<<endl;
        	cout<<"C.Chicago  "<<endl;
	        cout<<"D.Cambodai "<<endl;
	        cout<<"Your answer is correct"<<endl;
			cout<<"Your Score is : "<<sum<<" / 100";
	        cout<<"\n--------------------------------------------------------\n\n";
       }else if (th != 'A'&th != 'a'&th != 'B'&th != 'b'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T7;
	    }else{
			system("CLS");
			sum += 0;
			cout<<"7. Which of the following is called as ' THE WINDY CITY?"<<endl;
	        cout<<"/nA.Jerusalem"<<endl;
        	cout<<"B.Japan    "<<endl;
        	cout<<"C.Chicago  "<<endl;
	        cout<<"D.Cambodai "<<endl;
	        cout<<"\n--------------------------------------------------------\n\n";
	    }
}
void fnQ8(){
	T8:
	cout<<"8. Which of the following is called as ' THE LAND OF WHITE ELEPHANTS'?"<<endl;
	cout<<"/nA.Bangladesh"<<endl;
	cout<<"B.Thailand    "<<endl;
	cout<<"C.India       "<<endl;
	cout<<"D.Cambodia    "<<endl;
	cout<<"\nAnswer here : ";cin>>th;th8=th;
	 if(th == 'B' ||th == 'b'){
	   	system("CLS");
			sum += 3;	
			cout<<"\n--------------------------------------------------------\n\n";
	        cout<<"8. Which of the following is called as ' THE LAND OF WHITE ELEPHANTS'?"<<endl;
	        cout<<"/nA.Bangladesh"<<endl;
	        cout<<"B.Thailand    "<<endl;
	        cout<<"C.India       "<<endl;
        	cout<<"D.Cambodia    "<<endl;
        	cout<<"Your answer is correct"<<endl;
			cout<<"Your Score is : "<<sum<<" / 100";
        	cout<<"\n--------------------------------------------------------\n\n";
       }else if (th != 'A'&th != 'a'&th != 'C'&th != 'c'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T8;
	    }else{
			system("CLS");
			sum += 0;
			cout<<"8. Which of the following is called as ' THE LAND OF WHITE ELEPHANTS'?"<<endl;
	        cout<<"/nA.Bangladesh"<<endl;
	        cout<<"B.Thailand    "<<endl;
	        cout<<"C.India       "<<endl;
        	cout<<"D.Cambodia    "<<endl;
	        cout<<"8. Which of the following is called as ' THE LAND OF WHITE ELEPHANTS'?"<<endl;
	    }
}
void fnQ9(){
	T9:
	cout<<"9. Which of the following is called as ' THE CITY OF SEVEN HILLS'?"<<endl;
	cout<<"/nA.Rome       "<<endl;
	cout<<"B.Nilgiri Hills"<<endl;
	cout<<"C.Tibet        "<<endl;
	cout<<"D.Hill         "<<endl;
	cout<<"\nAnswer here : ";cin>>th;th9=th;
	 if(th == 'B' ||th == 'b'){
	   	system("CLS");
			sum += 3;	
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"9. Which of the following is called as ' THE CITY OF SEVEN HILLS'?"<<endl;
	        cout<<"/nA.Rome       "<<endl;
        	cout<<"B.Nilgiri Hills"<<endl;
        	cout<<"C.Tibet        "<<endl;
	        cout<<"D.Hill         "<<endl;
	        cout<<"Your answer is correct"<<endl;
			cout<<"Your Score is : "<<sum<<" / 100";
        	cout<<"\n--------------------------------------------------------\n\n";
       }else if (th != 'A'&th != 'a'&th != 'C'&th != 'c'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T9;
		}else{
			system("CLS");
			sum += 0;
			cout<<"9.Which of the following is called as ' THE LAND OF WHITE ELEPHANTS'?"<<endl;
	        cout<<"/nA.Bangladesh"<<endl;
	        cout<<"B.Thailand    "<<endl;
	        cout<<"C.India       "<<endl;
        	cout<<"D.Cambodia    "<<endl;
	        cout<<"\n\n--------------------------------------------------------\n\n";
	    }
}
void fnQ10(){
	T10:
	cout<<"10.Which of the following is called as ' THE DARK CONTIENENT'?"<<endl;
	cout<<"/nA.Asia   "<<endl;
	cout<<"B.Australia"<<endl;
	cout<<"C.Africa   "<<endl;
	cout<<"D.THAT     "<<endl;
	cout<<"\nAnswer here : ";cin>>th;th10=th;
	 if(th == 'C' ||th == 'c'){
	   	system("CLS");
			sum += 3;	
			cout<<"\n--------------------------------------------------------\n\n";
	        cout<<"10. Which of the following is called as ' THE DARK CONTIENENT'?"<<endl;
            cout<<"/nA.Asia   "<<endl;
            cout<<"B.Australia"<<endl;
            cout<<"C.Africa   "<<endl;
            cout<<"D.THAT     "<<endl;
            cout<<"Your answer is correct"<<endl;
			cout<<"Your Score is : "<<sum<<" / 100";
        	cout<<"\n--------------------------------------------------------\n\n";
       }else if (th != 'A'&th != 'a'&th != 'B'&th != 'b'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T10;
		}else{
			system("CLS");
			sum += 0;
			cout<<"8. Which of the following is called as ' THE LAND OF WHITE ELEPHANTS'?"<<endl;
	        cout<<"/nA.Bangladesh"<<endl;
	        cout<<"B.Thailand    "<<endl;
	        cout<<"C.India       "<<endl;
        	cout<<"D.Cambodia    "<<endl;
	        cout<<"8. Which of the following is called as ' THE LAND OF WHITE ELEPHANTS'?"<<endl;
	        cout<<"\n\n--------------------------------------------------------\n\n";
	    }
}
void fnQ11(){
	T11:
    cout<<"11.Which of the following is called as 'PRIVATE IS A____'?"<<endl;
    cout<<"/nA.Variable"<<endl;
    cout<<"B.Keyword   "<<endl;
    cout<<"C.Bot       "<<endl;
    cout<<"D.Pro       "<<endl;
    cout<<"\nAnswer here : ";cin>>th;th11=th;
	 if(th == 'A' ||th == 'a'){
	   	system("CLS");
			sum += 3;	
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"11. Which of the following is called as 'PRIVATE IS A____'?"<<endl;
            cout<<"/nA.Variable"<<endl;
            cout<<"B.Keyword   "<<endl;
            cout<<"C.Bot       "<<endl;
            cout<<"D.Pro       "<<endl;
            cout<<"Your answer is correct"<<endl;
			cout<<"Your Score is : "<<sum<<" / 100";
        	cout<<"\n--------------------------------------------------------\n\n";
       }else if (th != 'B'&th != 'b'&th != 'B'&th != 'b'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T11;
		}else{
			system("CLS");
			sum += 0;
			cout<<"11. Which of the following is called as 'PRIVATE IS A____'?"<<endl;
            cout<<"/nA.Variable"<<endl;
            cout<<"B.Keyword   "<<endl;
            cout<<"C.Bot       "<<endl;
            cout<<"D.Pro       "<<endl;
            cout<<"\n\n--------------------------------------------------------\n\n";     
 }
}
void fnQ12(){
	T12:
	cout<<"12.Which of the following is called as 'WHAT ERROR WOULD THE FOIIOWING FUNCTION GIVE ON COMPILATION'?"<<endl;
	cout<<"/nA.None of the above"<<endl;
	cout<<"B.On error           "<<endl;
	cout<<"C.Redeclaration      "<<endl;
	cout<<"D.error              "<<endl;
	cout<<"\nAnswer here : ";cin>>th;th12=th;
	 if(th == 'B' ||th == 'b'){
	   	system("CLS");
			sum += 3;       
            cout<<"\n--------------------------------------------------------\n\n";
	        cout<<"12. Which of the following is called as 'WHAT ERROR WOULD THE FOIIOWING FUNCTION GIVE ON COMPILATION'?"<<endl;
	        cout<<"/nA.None of the above"<<endl;
        	cout<<"B.On error           "<<endl; 
	        cout<<"C.Redeclaration      "<<endl;
	        cout<<"D.error              "<<endl;
	        cout<<"Your answer is correct"<<endl;
			cout<<"Your Score is : "<<sum<<" / 100";
        	cout<<"\n--------------------------------------------------------\n\n";
        }else if (th != 'A'&th != 'a'&th != 'C'&th != 'c'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T12;
		}else{
			system("CLS");
			sum += 0;
			cout<<"12. Which of the following is called as 'WHAT ERROR WOULD THE FOIIOWING FUNCTION GIVE ON COMPILATION'?"<<endl;
	        cout<<"/nA.None of the above"<<endl;
        	cout<<"B.On error           "<<endl; 
	        cout<<"C.Redeclaration      "<<endl;
	        cout<<"D.error              "<<endl;
			cout<<"\n\n--------------------------------------------------------\n\n";
		}		
}
void fnQ13(){
	T13:
	cout<<"13. Which of the following is called as 'REUSABILITY OF CODE IN C++ IS ACHIEVED THROUGH'?"<<endl;
	cout<<"/nA.Polymorphism "<<endl;
	cout<<"B.Inheriance   "<<endl;
	cout<<"C.Bot          "<<endl;
	cout<<"D.Encapsulation"<<endl;
	cout<<"\nAnswer here : ";cin>>th;th13=th;
	 if(th == 'A' ||th == 'a'){
	   	system("CLS");
			sum += 3;       
            cout<<"\n--------------------------------------------------------\n\n";
            cout<<"13. Which of the following is called as 'REUSABILITY OF CODE IN C++ IS ACHIEVED THROUGH'?"<<endl;
        	cout<<"/nA.Polymorphism "<<endl;
        	cout<<"B.Inheriance   "<<endl;
        	cout<<"C.Bot          "<<endl;
        	cout<<"D.Encapsulation"<<endl;
	        cout<<"Your answer is correct"<<endl;
			cout<<"Your Score is : "<<sum<<" / 100";
        	cout<<"\n--------------------------------------------------------\n\n";
        }else if (th != 'C'&th != 'c'&th != 'B'&th != 'b'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T13;
		}else{
			system("CLS");
			sum += 0;
			cout<<"13. Which of the following is called as 'REUSABILITY OF CODE IN C++ IS ACHIEVED THROUGH'?"<<endl;
        	cout<<"/nA.Polymorphism "<<endl;
        	cout<<"B.Inheriance   "<<endl;
        	cout<<"C.Bot          "<<endl;
        	cout<<"D.Encapsulation"<<endl;
	        cout<<"\n\n--------------------------------------------------------\n\n";
   }
}
void fnQ14(){
	T14:
	cout<<"14.Which of the following is called as 'Write short notes on any two of the following'?"<<endl;
	cout<<"/nA.Duble"<<endl;
	cout<<"B.2D-Arry"<<endl;
	cout<<"C.Structuere"<<endl;
	cout<<"D.Duble Pointer"<<endl;
	cout<<"\nAnswer here : ";cin>>th;th14=th;
	 if(th == 'B' ||th == 'b'){
	   	system("CLS");
			sum += 3;
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"14.Which of the following is called as 'Write short notes on any two of the following'?"<<endl;
	        cout<<"/nA.Duble"<<endl;
	        cout<<"B.2D-Arry"<<endl;
	        cout<<"C.Structuere"<<endl;
	        cout<<"D.Duble Pointer"<<endl;
	        cout<<"Your Score is : "<<sum<<" / 100";
        	cout<<"\n--------------------------------------------------------\n\n";
        }else if (th != 'A'&th != 'a'&th != 'C'&th != 'c'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T14;
		}else{
			system("CLS");
			sum += 0;
			cout<<"14.Which of the following is called as 'Write short notes on any two of the following'?"<<endl;
	        cout<<"/nA.Duble"<<endl;
	        cout<<"B.2D-Arry"<<endl;
	        cout<<"C.Structuere"<<endl;
	        cout<<"D.Duble Pointer"<<endl;
	        cout<<"\n\n--------------------------------------------------------\n\n";	
    }
}
void fnQ15(){
	T15:
	cout<<"15. Which of the following is called as 'An exception in C++ can be generated using which Keywords'?"<<endl;
	cout<<"/nA.Thrown"<<endl;
	cout<<"B.Threw   "<<endl;
	cout<<"C.Throw   "<<endl;
	cout<<"D.Throws  "<<endl;
	cout<<"\nAnswer here : ";cin>>th;th15=th;
	 if(th == 'A' ||th == 'a'){
	   	system("CLS");
			sum += 3;
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"15. Which of the following is called as 'An exception in C++ can be generated using which Keywords'?"<<endl;
	        cout<<"/nA.Thrown"<<endl;
        	cout<<"B.Threw   "<<endl;
        	cout<<"C.Throw   "<<endl;
        	cout<<"D.Throws  "<<endl;
        	cout<<"Your Score is : "<<sum<<" / 100";
        	cout<<"\n--------------------------------------------------------\n\n";
        }else if (th != 'C'&th != 'c'&th != 'B'&th != 'b'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T15;
		}else{
			system("CLS");
			sum += 0;
			cout<<"15. Which of the following is called as 'An exception in C++ can be generated using which Keywords'?"<<endl;
	        cout<<"/nA.Thrown"<<endl;
        	cout<<"B.Threw   "<<endl;
        	cout<<"C.Throw   "<<endl;
        	cout<<"D.Throws  "<<endl;
        	cout<<"\n\n--------------------------------------------------------\n\n";
        }
}
void fnQ16(){
	T16:
	cout<<"16.Which of the following is called as 'Who invented C++'?"<<endl;
	cout<<"/nA.Dennis Ritchie "<<endl;
	cout<<"B.Ken Thompson     "<<endl;
	cout<<"C.Brian Kernighan  "<<endl;
	cout<<"D.Bjarne Stroustrup"<<endl;
	cout<<"\nAnswer here : ";cin>>th;th16=th;
	 if(th == 'A' ||th == 'a'){
	   	system("CLS");
			sum += 3;
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"16.Which of the following is called as 'Who invented C++'?"<<endl;
        	cout<<"/nA.Dennis Ritchie "<<endl;
        	cout<<"B.Ken Thompson     "<<endl;
        	cout<<"C.Brian Kernighan  "<<endl;
        	cout<<"D.Bjarne Stroustrup"<<endl;
        	cout<<"Your Score is : "<<sum<<" / 100";
        	cout<<"\n--------------------------------------------------------\n\n";
        }else if (th != 'C'&th != 'c'&th != 'B'&th != 'b'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T16;
		}else{
			system("CLS");
			sum += 0;
			cout<<"16.Which of the following is called as 'Who invented C++'?"<<endl;
        	cout<<"/nA.Dennis Ritchie "<<endl;
        	cout<<"B.Ken Thompson     "<<endl;
        	cout<<"C.Brian Kernighan  "<<endl;
        	cout<<"D.Bjarne Stroustrup"<<endl;
			cout<<"\n\n--------------------------------------------------------\n\n";
		}	
}
void fnQ17(){
	T17:
	cout<<"17.Which of the following is called as 'Which of the following user-defined header file extension used in c++'?"<<endl;
	cout<<"/nA.Hg"<<endl;
	cout<<"B.CPP "<<endl;
	cout<<"C.H   "<<endl;
	cout<<"D.HF  "<<endl;
	cout<<"\nAnswer here : ";cin>>th;th17=th;
	 if(th == 'A' ||th == 'a'){
	   	system("CLS");
			sum += 3;
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"17.Which of the following is called as 'Which of the following user-defined header file extension used in c++'?"<<endl;
        	cout<<"/nA.Hg"<<endl;
        	cout<<"B.CPP"<<endl;
        	cout<<"C.H"<<endl;
        	cout<<"D.HF"<<endl;
        	cout<<"Your Score is : "<<sum<<" / 100";
        	cout<<"\n--------------------------------------------------------\n\n";
        }else if (th != 'C'&th != 'c'&th != 'B'&th != 'b'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T17;
		}else{
			system("CLS");
			sum += 0;
			cout<<"17.Which of the following is called as 'Which of the following user-defined header file extension used in c++'?"<<endl;
	        cout<<"/nA.Hg"<<endl;
        	cout<<"B.CPP "<<endl;
        	cout<<"C.H   "<<endl;
        	cout<<"D.HF  "<<endl;
			cout<<"\n\n--------------------------------------------------------\n\n";
		}
}
void fnQ18(){
	T18:
	cout<<"18.Which of the following is called as'Which of the following approach is used by C++'?"<<endl;
	cout<<"/nA.Bottom-up"<<endl;
	cout<<"B.Left-right"<<endl;
	cout<<"C.Right-left"<<endl;
	cout<<"D.Top-down"<<endl;
	cout<<"\nAnswer here : ";cin>>th;th18=th;
	 if(th == 'B' ||th == 'b'){
	   	system("CLS");
			sum += 3;
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"18.Which of the following is called as'Which of the following approach is used by C++'?"<<endl;
	        cout<<"/nA.Bottom-up"<<endl;
	        cout<<"B.Left-right"<<endl;
	        cout<<"C.Right-left"<<endl;
	        cout<<"D.Top-down"<<endl;
	        cout<<"Your Score is : "<<sum<<" / 100";
        	cout<<"\n--------------------------------------------------------\n\n";
        }else if (th != 'A'&th != 'a'&th != 'C'&th != 'c'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T18;
		}else{
			system("CLS");
			sum += 0;
			cout<<"18.Which of the following is called as'Which of the following approach is used by C++'?"<<endl;
        	cout<<"/nA.Bottom-up"<<endl;
	        cout<<"B.Left-right"<<endl;
	        cout<<"C.Right-left"<<endl;
	        cout<<"D.Top-down"<<endl;
	        cout<<"\n\n--------------------------------------------------------\n\n";
	    }
}
void fnQ19(){
	T19:
	cout<<"19.Which of the following is called as 'operators have lower precedence to relational and arithmetic operators.'?"<<endl;
	cout<<"/nA.Conditional"<<endl;
	cout<<"B.Conditional"<<endl;
	cout<<"C.Relational"<<endl;
	cout<<"D.Kboy zin"<<endl;
	cout<<"\nAnswer here : ";cin>>th;th19=th;
	 if(th == 'A' ||th == 'a'){
	   	system("CLS");
			sum += 3;
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"19.Which of the following is called as 'operators have lower precedence to relational and arithmetic operators.'?"<<endl;
            cout<<"/nA.Conditional"<<endl;
        	cout<<"B.Conditional"<<endl;
        	cout<<"C.Relational"<<endl;
	        cout<<"D.Kboy zin"<<endl;
	        cout<<"Your Score is : "<<sum<<" / 100";
        	cout<<"\n--------------------------------------------------------\n\n";
        }else if (th != 'C'&th != 'c'&th != 'B'&th != 'b'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T19;
		}else{
			system("CLS");
			sum += 0;
			cout<<"19.Which of the following is called as 'operators have lower precedence to relational and arithmetic operators.'?"<<endl;
	        cout<<"/nA.Conditional"<<endl;
	        cout<<"B.Conditional"<<endl;
        	cout<<"C.Relational"<<endl;
	        cout<<"D.Kboy zin"<<endl;
	        cout<<"\n\n--------------------------------------------------------\n\n";
	    }	
}
void fnQ20(){
	T20:
	cout<<"20.Which of the following is called as 'How many C++ data types are broadly classified?'?"<<endl;
	cout<<"/nA.2"<<endl;
	cout<<"B.3"<<endl;
	cout<<"C.4"<<endl;
    cout<<"D.5"<<endl;
    cout<<"\nAnswer here : ";cin>>th;th20=th;
	 if(th == 'A' ||th == 'a'){
	   	system("CLS");
			sum += 3;
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"20.Which of the following is called as 'How many C++ data types are broadly classified?'?"<<endl;
        	cout<<"/nA.2"<<endl;
        	cout<<"B.3"<<endl;
        	cout<<"C.4"<<endl;
            cout<<"D.5"<<endl;
            cout<<"Your Score is : "<<sum<<" / 100";
        	cout<<"\n--------------------------------------------------------\n\n";
        }else if (th != 'C'&th != 'c'&th != 'B'&th != 'b'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T20;
		}else{
			system("CLS");
			sum += 0;
			cout<<"20.Which of the following is called as 'How many C++ data types are broadly classified?'?"<<endl;
        	cout<<"/nA.2"<<endl;
        	cout<<"B.3"<<endl;
	        cout<<"C.4"<<endl;
            cout<<"D.5"<<endl;
            cout<<"\n\n--------------------------------------------------------\n\n";
        }
}
void fnQ21(){
	T21:
	cout<<"21. Which of the following is called as 'Float and double are related to ____ data type.'?"<<endl;
	cout<<"/nA.Void"<<endl;
	cout<<"B.Floating"<<endl;
	cout<<"C.Integral"<<endl;
	cout<<"D.That"<<endl;
	cout<<"\nAnswer here : ";cin>>th;th21=th;
	 if(th == 'A' ||th == 'a'){
	   	system("CLS");
			sum += 3;
			cout<<"\n--------------------------------------------------------\n\n";	
			cout<<"21. Which of the following is called as 'Float and double are related to ____ data type.'?"<<endl;
	        cout<<"/nA.Void"<<endl;
        	cout<<"B.Floating"<<endl;
        	cout<<"C.Integral"<<endl;
	        cout<<"D.That"<<endl;
	        cout<<"Your Score is : "<<sum<<" / 100";
        	cout<<"\n--------------------------------------------------------\n\n";
        }else if (th != 'C'&th != 'c'&th != 'B'&th != 'b'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T21;
		}else{
			system("CLS");
			sum += 0;
			cout<<"21. Which of the following is called as 'Float and double are related to ____ data type.'?"<<endl;
	        cout<<"/nA.Void"<<endl;
        	cout<<"B.Floating"<<endl;
        	cout<<"C.Integral"<<endl;
	        cout<<"D.That"<<endl;
	        cout<<"\n\n--------------------------------------------------------\n\n";
	    }
}
void fnQ22(){
	T22:
	cout<<"22. Which of the following is called as 'Variable names must begin with ___'?"<<endl;
	cout<<"/nA.#"<<endl;
	cout<<"B.$"<<endl;
	cout<<"C.Latter"<<endl;
	cout<<"D.boy "<<endl;
	cout<<"\nAnswer here : ";cin>>th;th22=th;
	 if(th == 'A' ||th == 'a'){
	   	system("CLS");
			sum += 3;
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"22. Which of the following is called as 'Variable names must begin with ___'?"<<endl;
        	cout<<"/nA.#"<<endl;
        	cout<<"B.$"<<endl;
	        cout<<"C.Latter"<<endl;
	        cout<<"D.boy "<<endl;
	        cout<<"Your Score is : "<<sum<<" / 100";
        	cout<<"\n--------------------------------------------------------\n\n";
        }else if (th != 'C'&th != 'c'&th != 'B'&th != 'b'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T22;
		}else{
			system("CLS");
			sum += 0;
			cout<<"22. Which of the following is called as 'Variable names must begin with ___'?"<<endl;
        	cout<<"/nA.#"<<endl;
        	cout<<"B.$"<<endl;
	        cout<<"C.Latter"<<endl;
	        cout<<"D.boy "<<endl;
	        cout<<"\n\n--------------------------------------------------------\n\n";
		 }
}
void fnQ23(){
	T23:
	cout<<"23.Which of the following is called as 'Integer values are stored in ___ bit format in binary form.'? "<<endl;
	cout<<"/nA.8"<<endl;
	cout<<"B.16"<<endl;
	cout<<"C.32"<<endl;
	cout<<"D.22"<<endl;
	cout<<"\nAnswer here : ";cin>>th;th23=th;
	 if(th == 'A' ||th == 'a'){
	   	system("CLS");
			sum += 3;
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"23.Which of the following is called as 'Integer values are stored in ___ bit format in binary form.'? "<<endl;
	        cout<<"/nA.8"<<endl;
	        cout<<"B.16"<<endl;
	        cout<<"C.32"<<endl;
	        cout<<"D.22"<<endl;
	        cout<<"Your Score is : "<<sum<<" / 100";
        	cout<<"\n--------------------------------------------------------\n\n";
        }else if (th != 'C'&th != 'c'&th != 'B'&th != 'b'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T23;
		}else{
			system("CLS");
			sum += 0;
			cout<<"23.Which of the following is called as 'Integer values are stored in ___ bit format in binary form.'? "<<endl;
	        cout<<"/nA.8"<<endl;
	        cout<<"B.16"<<endl;
	        cout<<"C.32"<<endl;
	        cout<<"D.22"<<endl;
		    cout<<"\n\n--------------------------------------------------------\n\n";
		}
		
}
void fnQ24(){
	T24:
	cout<<"24.Which of the following is called as 'Every variable should be separated by ___ separator.'?"<<endl;
	cout<<"/nA.Dot"<<endl;
	cout<<"B.Colon"<<endl;
	cout<<"C.Colon"<<endl;
	cout<<"D.that"<<endl;
	cout<<"\nAnswer here : ";cin>>th;th24=th;
	 if(th == 'A' ||th == 'a'){
	   	system("CLS");
			sum += 3;
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"24.Which of the following is called as 'Every variable should be separated by ___ separator.'?"<<endl;
	        cout<<"/nA.Dot"<<endl;
        	cout<<"B.Colon"<<endl;
        	cout<<"C.Colon"<<endl;
            cout<<"D.that"<<endl;
            cout<<"Your Score is : "<<sum<<" / 100";
        	cout<<"\n--------------------------------------------------------\n\n";
        }else if (th != 'C'&th != 'c'&th != 'B'&th != 'b'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T24;
		}else{
			system("CLS");
			sum += 0;
            cout<<"24.Which of the following is called as 'Every variable should be separated by ___ separator.'?"<<endl;
	        cout<<"/nA.Dot"<<endl;
        	cout<<"B.Colon"<<endl;
        	cout<<"C.Colon"<<endl;
            cout<<"D.that"<<endl;
            cout<<"\n\n--------------------------------------------------------\n\n";
        }
}
void fnQ25(){
	T25:
	cout<<"25.Which of the following is called as '.Auto, static, extern and register are called as ___'?"<<endl;
	cout<<"/A.Register"<<endl;
	cout<<"B.Static"<<endl;
	cout<<"C.Storage"<<endl;
	cout<<"D.specifier"<<endl;
	cout<<"\nAnswer here : ";cin>>th;th25=th;
	 if(th == 'B' ||th == 'b'){
	   	system("CLS");
			sum += 3;	
			cout<<"\n\n--------------------------------------------------------\n\n";
			cout<<"25.Which of the following is called as '.Auto, static, extern and register are called as ___'?"<<endl;
        	cout<<"/A.Register"<<endl;
	        cout<<"B.Static"<<endl;
        	cout<<"C.Storage"<<endl;
	        cout<<"D.specifier"<<endl;
			cout<<"Your Score is : "<<sum<<" / 100";
        	cout<<"\n--------------------------------------------------------\n\n";
        }else if (th != 'A'&th != 'a'&th != 'C'&th != 'c'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T25;
		}else{
			system("CLS");
			sum += 0;
			cout<<"25.Which of the following is called as '.Auto, static, extern and register are called as ___'?"<<endl;
        	cout<<"/A.Register"<<endl;
	        cout<<"B.Static"<<endl;
        	cout<<"C.Storage"<<endl;
	        cout<<"D.specifier"<<endl;
			cout<<"\n\n--------------------------------------------------------\n\n";
		}
}
void fnQ26(){
	T26:
    cout<<"26.Which of the following is called as '.Auto, static, extern and register are called as ___'?"<<endl;
    cout<<"/nA.specifier"<<endl;
    cout<<"B.Storage"<<endl;
    cout<<"C.Static"<<endl;
    cout<<"D.Register"<<endl;
	cout<<"\nAnswer here : ";cin>>th;th26=th;
	 if(th == 'C' ||th == 'c'){
	   	system("CLS");
			sum += 3;	
			cout<<"\n\n--------------------------------------------------------\n\n";
			cout<<"26.Which of the following is called as '.Auto, static, extern and register are called as ___'?"<<endl;
            cout<<"/nA.specifier"<<endl;
            cout<<"B.Storage"<<endl;
            cout<<"C.Static"<<endl;
            cout<<"D.Register"<<endl;
			cout<<"Your Score is : "<<sum<<" / 100";
        	cout<<"\n--------------------------------------------------------\n\n";
        }else if (th != 'A'&th != 'a'&th != 'B'&th != 'b'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T26;
		}else{
			system("CLS");
			sum += 0;
			cout<<"26.Which of the following is called as '.Auto, static, extern and register are called as ___'?"<<endl;
            cout<<"/nA.specifier"<<endl;
            cout<<"B.Storage"<<endl;
            cout<<"C.Static"<<endl;
            cout<<"D.Register"<<endl;	
		    cout<<"\n\n--------------------------------------------------------\n\n";
		}
}
void fnQ27(){
	T27:
	cout<<"27.Which of the following is called as ''?"<<endl;
	cout<<"/nA.float"<<endl;
	cout<<"B.bool"<<endl;
	cout<<"C.Love Team"<<endl;
	cout<<"D.LOVE that"<<endl;
	cout<<"\nAnswer here : ";cin>>th;th27=th;
	 if(th == 'A' ||th == 'a'){
	   	system("CLS");
			sum += 3;	
			cout<<"\n\n--------------------------------------------------------\n\n";
			cout<<"27.Which of the following is called as ''?"<<endl;
	        cout<<"/nA.float"<<endl;
        	cout<<"B.bool"<<endl;
            cout<<"C.Love Team"<<endl;
        	cout<<"D.LOVE that"<<endl;
        	cout<<"Your Score is : "<<sum<<" / 100";
        	cout<<"\n--------------------------------------------------------\n\n";
        }else if (th != 'C'&th != 'c'&th != 'B'&th != 'b'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T27;
		}else{
			system("CLS");
			sum += 0;
			cout<<"27.Which of the following is called as ''?"<<endl;
	        cout<<"/nA.float"<<endl;
        	cout<<"B.bool"<<endl;
            cout<<"C.Love Team"<<endl;
        	cout<<"D.LOVE that"<<endl;
			cout<<"\n\n--------------------------------------------------------\n\n";
        }	
}
void fnQ28(){
	T28:
	cout<<"28.Which of the following is called as'Which of the following approach is used by C++'?"<<endl;
	cout<<"/nA.Right-left"<<endl;
	cout<<"B.Left-right"<<endl;
	cout<<"C.Bottom-up"<<endl;
	cout<<"D.Top-down"<<endl;
	cout<<"\nAnswer here : ";cin>>th;th28=th;
	 if(th == 'A' ||th == 'a'){
	   	system("CLS");
			sum += 3;	
			cout<<"\n\n--------------------------------------------------------\n\n";
			cout<<"28.Which of the following is called as'Which of the following approach is used by C++'?"<<endl;
        	cout<<"/nA.Right-left"<<endl;
        	cout<<"B.Left-right"<<endl;
	        cout<<"C.Bottom-up"<<endl;
	        cout<<"D.Top-down"<<endl;
	        cout<<"Your Score is : "<<sum<<" / 100";
        	cout<<"\n--------------------------------------------------------\n\n";
        }else if (th != 'C'&th != 'c'&th != 'B'&th != 'b'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T28;
		}else{
			system("CLS");
			sum += 0;
			cout<<"28.Which of the following is called as'Which of the following approach is used by C++'?"<<endl;
        	cout<<"/nA.Right-left"<<endl;
	        cout<<"B.Left-right"<<endl;
	        cout<<"C.Bottom-up"<<endl;
	        cout<<"D.Top-down"<<endl;
	    }
}
void fnQ29(){
	T29:
	cout<<"29. Which of the following is called as '.Auto, static, extern and register are called as ___'?"<<endl;
	cout<<"/nA.Static"<<endl;
	cout<<"B.Register "<<endl;
	cout<<"C.Storage  "<<endl;
	cout<<"D.specifier"<<endl;
	cout<<"\nAnswer here : ";cin>>th;th29=th;
	 if(th == 'A' ||th == 'a'){
	   	system("CLS");
			sum += 3;	
			cout<<"\n\n--------------------------------------------------------\n\n";
			cout<<"29. Which of the following is called as '.Auto, static, extern and register are called as ___'?"<<endl;
	        cout<<"/nA.Static"<<endl;
	        cout<<"B.Register "<<endl;
	        cout<<"C.Storage  "<<endl;
	        cout<<"D.specifier"<<endl;
	        cout<<"Your Score is : "<<sum<<" / 100";
        	cout<<"\n--------------------------------------------------------\n\n";
        }else if (th != 'C'&th != 'c'&th != 'B'&th != 'b'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T29;
		}else{
			system("CLS");
			sum += 0;
			cout<<"29.Which of the following is called as'Which of the following approach is used by C++'?"<<endl;
        	cout<<"/nA.Right-left"<<endl;
        	cout<<"B.Left-right"<<endl;
	        cout<<"C.Bottom-up"<<endl;
	        cout<<"D.Top-down"<<endl;
	        cout<<"\n\n--------------------------------------------------------\n\n";
	    }
}
void fnQ30(){
	T30:
	cout<<"30.Which of the following is called as ' THE DARK CONTIENENT'?"<<endl;
	cout<<"/nA.Asia"<<endl;
	cout<<"B.Australia"<<endl;
	cout<<"C.Africa"<<endl;
	cout<<"D.Cambodai"<<endl;
	cout<<"\n\n--------------------------------------------------------\n\n";
	cout<<"\nAnswer here : ";cin>>th;th30=th;
	 if(th == 'C' ||th == 'c'){
	   	system("CLS");
			sum += 3;	
			cout<<"\n\n--------------------------------------------------------\n\n";
			cout<<"30.Which of the following is called as ' THE DARK CONTIENENT'?"<<endl;
        	cout<<"/nA.Asia"<<endl;
        	cout<<"B.Australia"<<endl;
        	cout<<"C.Africa"<<endl;
	        cout<<"D.Cambodai"<<endl;
	        cout<<"Your Score is : "<<sum<<" / 100";
        	cout<<"\n--------------------------------------------------------\n\n";
        }else if (th != 'A'&th != 'a'&th != 'B'&th != 'b'&th != 'D'&th != 'd'){
			system("CLS");
			cout<<"\n--------------------------------------------------------\n\n";
			cout<<"Sorry your answer is not in our fill. Please put [A,B,C or D] ";
			cout<<"\n\n--------------------------------------------------------\n\n";
			goto T30;
		}else{
			system("CLS");
			sum += 0;
			cout<<"30.Which of the following is called as ' THE DARK CONTIENENT'?"<<endl;
	        cout<<"/nA.Asia"<<endl;
        	cout<<"B.Australia"<<endl;
	        cout<<"C.Africa"<<endl;
        	cout<<"D.Cambodai"<<endl;
			cout<<"\n\n--------------------------------------------------------\n\n";
		}
}

int main(){
	system("corlo A");
	char leave;
	GoBack: 
	system("CLS");
	cout<<"\t\t\t\t\t\t******************************************************"<<endl;
	cout<<"\n\t\t\t\t\t\t****** WELCOME TO C++ MULTIPLE CHOICE **************"<<endl;
	cout<<"\n\t\t\t\t\t\t****** AND WELLCOME TO MY TEAM *********************"<<endl;
	cout<<"\t\t\t\t\t\t*****************************************************"<<endl;
	cout<<"\n--------------------------------------------------------"<<endl;
	fnQ1();fnQ2();fnQ3();fnQ4;fnQ5();fnQ6();fnQ7();fnQ8();fnQ9();fnQ10();
	fnQ11();fnQ12();fnQ13();fnQ14();fnQ15();fnQ16();fnQ17();fnQ18();fnQ19();fnQ20();
	again : 
	cout<<"\n==========================================\n";
	cout<<"Do you want to exit? [Y=YES and N=No] : ";cin>>leave;
	cout<<"\n==========================================\n";
	
	if(leave == 'N' || leave == 'n'){
		fnQ21();fnQ22();fnQ23();fnQ24();fnQ25();
		again1 : 
		cout<<"\n==========================================\n";
		cout<<"Do you want to exit? [Y=YES and N=No] : ";cin>>leave;
		cout<<"\n==========================================\n";
		if(leave == 'N' || leave == 'n'){
			fnQ26();fnQ27();fnQ28();fnQ29();fnQ30();
			system("CLS");
			cout<<"\n==========RESULT==========\n";
			cout<<"|                         |\n";
			cout<<"| YOUR SCORE IS "<<sum<<" / 100   |\n";
			cout<<"|                         |\n";
			cout<<"==========================\n";
			cout<<"\n----- Your Answer ---------- Correct answer -----\n";
			cout<<"\n1.         "<<th1<<"                        C\n";
			cout<<"\n2.         "<<th2<<"                        B\n";
			cout<<"\n3.         "<<th3<<"                        D\n";
			cout<<"\n4.         "<<th4<<"                        A\n";
			cout<<"\n5.         "<<th5<<"                        C\n";
			cout<<"\n6.         "<<th6<<"                        C\n";
			cout<<"\n7.         "<<th7<<"                        A\n";
			cout<<"\n8.         "<<th8<<"                        C\n";
			cout<<"\n9.         "<<th9<<"                        A\n";
			cout<<"\n10.        "<<th10<<"                        C\n";
			cout<<"\n11.        "<<th11<<"                        A\n";
			cout<<"\n12.        "<<th12<<"                        B\n";
			cout<<"\n13.        "<<th13<<"                        C\n";
			cout<<"\n14.        "<<th14<<"                        D\n";
			cout<<"\n15.        "<<th15<<"                        B\n";
			cout<<"\n16.        "<<th16<<"                        A\n";
			cout<<"\n17.        "<<th17<<"                        A\n";
			cout<<"\n18.        "<<th18<<"                        C\n";
			cout<<"\n19.        "<<th19<<"                        A\n";
			cout<<"\n20.        "<<th20<<"                        B\n";
			cout<<"\n21.        "<<th21<<"                        B\n";
			cout<<"\n22.        "<<th22<<"                        B\n";
			cout<<"\n23.        "<<th23<<"                        D\n";
			cout<<"\n24.        "<<th24<<"                        B\n";
			cout<<"\n25.        "<<th25<<"                        D\n";
			cout<<"\n26.        "<<th26<<"                        B\n";
			cout<<"\n27.        "<<th27<<"                        B\n";
			cout<<"\n28.        "<<th28<<"                        D\n";
			cout<<"\n29.        "<<th29<<"                        D\n";
			cout<<"\n30.        "<<th30<<"                        D\n";
			again2 :
			cout<<"\n==========================================\n";
			cout<<"Do you want to exit? [Y=YES and N=No] : ";cin>>leave;
			cout<<"\n==========================================\n";
			if (leave == 'Y' || leave == 'y'){
				system("CLS");
				cout<<"Exit the program";
				exit(0);
			}else if(leave == 'N' || leave == 'n'){
				goto GoBack;	
			}else{
				goto again2;
			}
		}else if (leave == 'Y' || leave == 'y'){
			system("CLS");
			cout<<"\n==========RESULT==========\n";
			cout<<"|                         |\n";
			cout<<"| YOUR SCORE IS "<<sum<<" / 100  |\n";
			cout<<"|                         |\n";
			cout<<"==========================\n";
			cout<<"\n----- Your Answer ---------- Correct answer -----\n";
			cout<<"\n1.         "<<th1<<"                        C\n";
			cout<<"\n2.         "<<th2<<"                        B\n";
			cout<<"\n3.         "<<th3<<"                        D\n";
			cout<<"\n4.         "<<th4<<"                        A\n";
			cout<<"\n5.         "<<th5<<"                        C\n";
			cout<<"\n6.         "<<th6<<"                        C\n";
			cout<<"\n7.         "<<th7<<"                        A\n";
			cout<<"\n8.         "<<th8<<"                        C\n";
			cout<<"\n9.         "<<th9<<"                        A\n";
			cout<<"\n10.        "<<th10<<"                        C\n";
			cout<<"\n11.        "<<th11<<"                        A\n";
			cout<<"\n12.        "<<th12<<"                        B\n";
			cout<<"\n13.        "<<th13<<"                        C\n";
			cout<<"\n14.        "<<th14<<"                        D\n";
			cout<<"\n15.        "<<th15<<"                        B\n";
			cout<<"\n16.        "<<th16<<"                        A\n";
			cout<<"\n17.        "<<th17<<"                        A\n";
			cout<<"\n18.        "<<th18<<"                        C\n";
			cout<<"\n19.        "<<th19<<"                        A\n";
			cout<<"\n20.        "<<th20<<"                        B\n";
			cout<<"\n21.        "<<th21<<"                        B\n";
			cout<<"\n22.        "<<th22<<"                        B\n";
			cout<<"\n23.        "<<th23<<"                        D\n";
			cout<<"\n24.        "<<th24<<"                        B\n";
			cout<<"\n25.        "<<th25<<"                        D\n";
			
			cout<<"Do You want to do it again? Y= Yes or N=No :";cin>>th;
			if(th=='Y'||th=='y'){
				goto GoBack;
			}else{
				exit(0);
			}
		}else{
			goto again1;
		}
	}else if (leave == 'Y' || leave == 'y'){
		system("CLS");
		cout<<"\n==========RESULT==========\n";
		cout<<"|                         |\n";
		cout<<"| YOUR SCORE IS "<<sum<<" / 100  |\n";
		cout<<"|                         |\n";
		cout<<"==========================\n";
		cout<<"\n----- Your Answer ---------- Correct answer -----\n";
		cout<<"\n1.         "<<th1<<"                        C\n";
		cout<<"\n2.         "<<th2<<"                        B\n";
		cout<<"\n3.         "<<th3<<"                        D\n";
		cout<<"\n4.         "<<th4<<"                        A\n";
		cout<<"\n5.         "<<th5<<"                        C\n";
		cout<<"\n6.         "<<th6<<"                        C\n";
		cout<<"\n7.         "<<th7<<"                        A\n";
		cout<<"\n8.         "<<th8<<"                        C\n";
		cout<<"\n9.         "<<th9<<"                        A\n";
		cout<<"\n10.        "<<th10<<"                        C\n";
		cout<<"\n11.        "<<th11<<"                        A\n";
		cout<<"\n12.        "<<th12<<"                        B\n";
		cout<<"\n13.        "<<th13<<"                        C\n";
		cout<<"\n14.        "<<th14<<"                        D\n";
		cout<<"\n15.        "<<th15<<"                        B\n";
		cout<<"\n16.        "<<th16<<"                        A\n";
		cout<<"\n17.        "<<th17<<"                        A\n";
		cout<<"\n18.        "<<th18<<"                        C\n";
		cout<<"\n19.        "<<th19<<"                        A\n";
		cout<<"\n20.        "<<th20<<"                        B\n";
		
		cout<<"Do You want to do it again? Y= Yes or N=No :";cin>>th;
			if(th=='Y'||th=='y'){
				goto GoBack;
			}else{
				exit(0);
			}
	}
	else{
		goto again;
	}

	return 0;

}

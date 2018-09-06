#include <iostream>
#include <string>

using namespace std;

string calification(char note)
{ 
string frase;
 if(note=='A' || note=='a')
 {
 	frase ="Excelente, su nota fue A buen trabajo";	
 }	
  if(note=='B' || note=='b')
 {
 	frase ="Bien hecho su nota fue B, pero puedes mejorar un poco mas";	
 }	
  if(note=='C' || note=='c')
 {
 	frase ="Tu nota es C, esto es bueno te debes esforzar un poco mas";	
 }	
  if(note=='D' || note=='d')
 {
 	frase ="Tu nota es D, no es muy satisfactoria";	
 }	
  if(note=='F' || note=='f')
 {
 	frase ="Tu nota es F, no aprobaste";	
 }	
 return frase;
}


char nota;
string frase;


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define ADD 'a'           // we define macros for switch cases 
#define DISPLAY 'd'        //dispaly switch case 
#define READ 'r'      // read the file
#define SAVE 's'        //save switch case
#define APPEND 'p'  /// for appending 
#define FIND 'f'  // for finding
#define DELETE 'e'  //for deleting
#define QUIT 'q'         //that is for add and quit



enum operations         //enum operations for yes or no option in the quit case
{​​​​​​​ No=0,Yes}​​​​​​​;


// Define structure for  the linked list
typedef struct Linked_list
{​​​​​​​
  char* data;
  struct Linked_list* next;
}​​​​​​​Node;


void selectMenu(char*,char*);    //selction menu for switch cases


void read_file(char*,Node**);   //function for reading data from a file
void save_file(Node*,char*);   // saving data in the file
void append_buffer(char*,Node**);  // fucntion for appending into a file
void display_details(Node* );  // displaying function for the dispalying  data
node* add_text(node**,node**,char*);  // adding function for text adding to the linkedlist
int find_word(Node*,char*);   // function for finding word
void delete_range(Node**,int,int);   // function for deleting specific lines







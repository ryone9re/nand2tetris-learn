#ifndef HACK_VM_H
#define HACK_VM_H

#define VM_TRUE -1
#define VM_FALSE 0
#define MAXSIZE 2097152
#define READSIZ 1024
#define MAXPATHSIZ 256

typedef struct
{
    int C_ARITHMETIC;
    int C_PUSH;
    int C_POP;
    int C_LABEL;
    int C_GOTO;
    int C_IF;
    int C_FUNCTION;
    int C_RETURN;
    int C_CALL;
    int IS_NULL;
    char *command;
    char *arg1;
    int arg2;
} vm_command;

/* Prototypes */
/* main.c */

/* code_writer.c */
/* Code writer module */
void code_writer(vm_command *vm_commands);

/* parser.c */
/* Parser module */
vm_command *parser(char *buffer, vm_command *vm_commands);
void initialize_vm_command(vm_command *v_command);
int is_comment_row(char *src);
int is_space_row(char *src);
void remove_comment(char *word);
void remove_last_space(char *word);
int vm_command_len(vm_command *vm_commands);
void add_to_command(vm_command *vm_commands, char *command);
char *pick_command(char *command);
char *pick_arg1(char *command);
int pick_arg2(char *command);
char *word_slicer(char *words, int n);
int isarithmetic(char *word);
void free_commands(vm_command *vm_commands);

/* reader.c */
/* Reader module */
int check_file_ext(char *file_name, char *ext);
vm_command *file_to_parser(char *file_name, vm_command *vm_commands);
vm_command *directory_to_parser(char *file_name, vm_command *vm_commands);
void joinword(char *dest, char *src1, char *src2);

#endif /* HACK_VM_H */
